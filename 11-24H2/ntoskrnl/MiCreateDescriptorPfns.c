/*
 * XREFs of MiCreateDescriptorPfns @ 0x140C53184
 * Callers:
 *     MiSwitchToPfns @ 0x140C540A0 (MiSwitchToPfns.c)
 * Callees:
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MiClearStaleSecurePageMapping @ 0x140C530E8 (MiClearStaleSecurePageMapping.c)
 *     MxCreateFreePfns @ 0x140C546DC (MxCreateFreePfns.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 */

char __fastcall MiCreateDescriptorPfns(__int64 a1, const __m128i *a2, const __m128i *a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // esi
  int v10; // r15d
  __m128i *i; // rdi
  ULONG_PTR v12; // rdx
  __int64 *v13; // rcx
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // r14
  unsigned int v16; // eax
  const __m128i *v17; // r8
  __int64 *v18; // rcx
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h]
  __int128 v22; // [rsp+60h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 40);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
    goto LABEL_4;
  if ( --v4 )
  {
    v7 = 1LL;
LABEL_4:
    v8 = 48 * v7;
    v9 = *(_DWORD *)(a1 + 24) & 0x1FFFFFFF;
    v10 = *(_DWORD *)(a1 + 24) & 0x20000000;
    LOBYTE(v7) = 0;
    for ( i = (__m128i *)(v8 - 0x220000000000LL); ; i += 3 )
    {
      while ( 1 )
      {
        if ( !v4 )
          return v7;
        if ( v10 )
        {
          v12 = 0LL;
          v13 = &i->m128i_i64[1];
          do
          {
            if ( (*((_BYTE *)v13 + 26) & 7) != 0 )
              break;
            v7 = *v13;
            if ( *v13 )
              break;
            ++v12;
            v13 += 6;
          }
          while ( v12 < v4 );
        }
        else
        {
          v12 = v4;
        }
        if ( !v12 )
          break;
        v14 = MiRestrictRangeToNode(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4), v12);
        v15 = v14;
        if ( ((v9 - 9) & 0xFFFFFFDD) != 0 || v9 == 43 )
        {
          if ( ((v9 - 33) & 0xFFFFFFFD) != 0 )
          {
            if ( v9 == 29 || v9 == 36 )
            {
              v16 = 256;
              v17 = a3;
            }
            else
            {
              v16 = 128;
              v17 = a2;
            }
            MiInitializeNewPfns(i, v15, v17, (__int64)&MiSystemPartition, v16, 0LL, 0LL);
          }
          else
          {
            MxInsertEnclaveBootPages(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4));
          }
        }
        else
        {
          DWORD2(v21) = 2;
          *(_QWORD *)&v22 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4);
          *((_QWORD *)&v22 + 1) = v14;
          MxCreateFreePfns(&v20);
        }
        v4 -= v15;
        LOBYTE(v7) = 48 * v15;
        i += 3 * v15;
      }
      if ( v9 == 29 || v9 == 36 )
      {
        v18 = (__int64 *)i->m128i_i64[1];
        if ( !v18 )
          goto LABEL_29;
        if ( v9 == 29 )
        {
          MiClearStaleSecurePageMapping(v18);
LABEL_29:
          LOBYTE(v7) = MiInitializeNewPfns(i, 1uLL, a3, (__int64)&MiSystemPartition, 0x100u, 0LL, 0LL);
          goto LABEL_30;
        }
        LOBYTE(v7) = MiMarkPfnVerified((ULONG_PTR)i, 0LL, (__int64)a3, a4);
      }
LABEL_30:
      --v4;
    }
  }
  return v7;
}
