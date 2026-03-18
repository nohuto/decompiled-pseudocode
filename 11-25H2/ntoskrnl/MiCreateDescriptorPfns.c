/*
 * XREFs of MiCreateDescriptorPfns @ 0x140C3FDC4
 * Callers:
 *     MiSwitchToPfns @ 0x140C40CE0 (MiSwitchToPfns.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiRestrictRangeToNode @ 0x1403FA42C (MiRestrictRangeToNode.c)
 *     MiInitializeNewPfns @ 0x140660094 (MiInitializeNewPfns.c)
 *     MiClearStaleSecurePageMapping @ 0x140C3FD28 (MiClearStaleSecurePageMapping.c)
 *     MxCreateFreePfns @ 0x140C4131C (MxCreateFreePfns.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
 */

char __fastcall MiCreateDescriptorPfns(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // esi
  int v9; // r15d
  __m128i *i; // rdi
  ULONG_PTR v11; // rdx
  __int64 *v12; // rcx
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  const __m128i *v16; // r8
  ULONG_PTR *v17; // rcx
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+50h] [rbp-48h]
  __int128 v21; // [rsp+60h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 40);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
    goto LABEL_4;
  if ( --v3 )
  {
    v6 = 1LL;
LABEL_4:
    v7 = 48 * v6;
    v8 = *(_DWORD *)(a1 + 24) & 0x1FFFFFFF;
    v9 = *(_DWORD *)(a1 + 24) & 0x20000000;
    LOBYTE(v6) = 0;
    for ( i = (__m128i *)(v7 - 0x220000000000LL); ; i += 3 )
    {
      while ( 1 )
      {
        if ( !v3 )
          return v6;
        if ( v9 )
        {
          v11 = 0LL;
          v12 = &i->m128i_i64[1];
          do
          {
            if ( (*((_BYTE *)v12 + 26) & 7) != 0 )
              break;
            v6 = *v12;
            if ( *v12 )
              break;
            ++v11;
            v12 += 6;
          }
          while ( v11 < v3 );
        }
        else
        {
          v11 = v3;
        }
        if ( !v11 )
          break;
        v13 = MiRestrictRangeToNode(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4), v11);
        v14 = v13;
        if ( ((v8 - 9) & 0xFFFFFFDD) != 0 || v8 == 43 )
        {
          if ( ((v8 - 33) & 0xFFFFFFFD) != 0 )
          {
            if ( v8 == 29 || v8 == 36 )
            {
              v15 = 256;
              v16 = a3;
            }
            else
            {
              v15 = 128;
              v16 = a2;
            }
            MiInitializeNewPfns(i, v14, v16, (__int64)&MiSystemPartition, v15, 0LL, 0LL);
          }
          else
          {
            MxInsertEnclaveBootPages(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4));
          }
        }
        else
        {
          DWORD2(v20) = 2;
          *(_QWORD *)&v21 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4);
          *((_QWORD *)&v21 + 1) = v13;
          MxCreateFreePfns(&v19);
        }
        v3 -= v14;
        LOBYTE(v6) = 48 * v14;
        i += 3 * v14;
      }
      if ( v8 == 29 || v8 == 36 )
      {
        v17 = (ULONG_PTR *)i->m128i_i64[1];
        if ( !v17 )
          goto LABEL_29;
        if ( v8 == 29 )
        {
          MiClearStaleSecurePageMapping(v17);
LABEL_29:
          LOBYTE(v6) = MiInitializeNewPfns(i, 1uLL, a3, (__int64)&MiSystemPartition, 0x100u, 0LL, 0LL);
          goto LABEL_30;
        }
        LOBYTE(v6) = MiMarkPfnVerified((ULONG_PTR)i, 0);
      }
LABEL_30:
      --v3;
    }
  }
  return v6;
}
