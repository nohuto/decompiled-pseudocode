/*
 * XREFs of HvlChangeIsolatedMemoryVisibility @ 0x140586020
 * Callers:
 *     MiSwitchToPfns @ 0x140C540A0 (MiSwitchToPfns.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlChangeIsolatedMemoryVisibility(__int64 a1, unsigned __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v8; // edi
  _QWORD *v9; // r14
  int v10; // eax
  char v11; // cl
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]

  v19 = 0LL;
  v20 = 0LL;
  v8 = 0;
  LODWORD(v21) = 0;
  *a4 = 0LL;
  v9 = HvlpAcquireHypercallPage((__int64)&v19, 1, 0LL, 0LL);
  v9[1] = 0LL;
  *v9 = -1LL;
  v10 = *((_DWORD *)v9 + 2);
  v11 = a3 ^ v10;
  v12 = 0;
  *((_DWORD *)v9 + 2) = v10 ^ v11 & 3;
  while ( a2 )
  {
    if ( a2 <= 0x1FE )
      v12 = v12 & 0xFFFFF000 | a2 & 0xFFF;
    else
      v12 = v12 & 0xFFFFF000 | 0x1FE;
    if ( (v12 & 0xFFF) != 0 )
    {
      v13 = a1;
      v14 = v12 & 0xFFF;
      v15 = v9 + 2;
      do
      {
        *v15++ = v13++;
        --v14;
      }
      while ( v14 );
    }
    v16 = HvcallInitiateHypercall(219);
    *a4 += HIDWORD(v16) & 0xFFF;
    if ( (_WORD)v16 )
    {
      v8 = HvlpHvToNtStatus(v16);
      break;
    }
    v17 = v12 & 0xFFF;
    a1 += v17;
    a2 -= v17;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v19);
  return v8;
}
