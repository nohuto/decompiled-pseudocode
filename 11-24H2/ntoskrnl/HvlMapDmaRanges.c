/*
 * XREFs of HvlMapDmaRanges @ 0x140586160
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlMapDmaRanges(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp+10h]

  *a3 = 0;
  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  v6 = a1;
  do
  {
    v7 = HvlpAcquireHypercallPage((__int64)&v12, 1, 0LL, 0LL);
    if ( v6 >= 0x100 )
      v6 = 256;
    memmove(v7, (const void *)(a2 + 16LL * (unsigned int)*a3), 16LL * v6);
    v15 = HvcallInitiateHypercall(264);
    HvlpReleaseHypercallPage((unsigned int *)&v12);
    if ( HvlpHvStatusIsInsufficientMemory(v15) )
      LODWORD(result) = HvlpHandleInsufficientMemory(v15, v8, v9, v10);
    else
      LODWORD(result) = HvlpHvToNtStatus(v15);
    *a3 += WORD2(v15) & 0xFFF;
    v6 = a1 - *a3;
  }
  while ( (int)result >= 0 && v6 );
  return (unsigned int)result;
}
