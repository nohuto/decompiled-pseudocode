/*
 * XREFs of HvlUnmapDmaRanges @ 0x140586260
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlUnmapDmaRanges(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // esi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  void *v9; // r13
  unsigned int v10; // ecx
  int v11; // ebp
  int v12; // r8d
  unsigned int v13; // edi
  __int64 v14; // rax
  unsigned __int16 v15; // bx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+38h] [rbp-30h]

  v3 = 0;
  *a3 = 0;
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v7 = HvlpAcquireHypercallPage((__int64)&v17, 1, 0LL, 0LL);
  v8 = (unsigned int)*a3;
  v9 = v7;
  v10 = a1;
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = v10;
    if ( v10 >= 0x100 )
    {
      v11 = v12;
      v13 = 256;
    }
    memmove(v9, (const void *)(a2 + 16 * v8), 16LL * v13);
    v11 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v11) & 0xFFF;
    v14 = HvcallInitiateHypercall(265);
    v15 = v14;
    if ( (_WORD)v14 )
      break;
    v12 = v11;
    v8 = *a3 + (WORD2(v14) & 0xFFFu);
    *a3 = v8;
    v10 = a1 - v8;
  }
  while ( a1 != (_DWORD)v8 );
  HvlpReleaseHypercallPage((unsigned int *)&v17);
  if ( v15 )
    return (unsigned int)HvlpHvToNtStatus(v15);
  return v3;
}
