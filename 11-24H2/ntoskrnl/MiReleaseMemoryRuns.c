/*
 * XREFs of MiReleaseMemoryRuns @ 0x140672884
 * Callers:
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     MmFreeMemoryRanges @ 0x1407EB960 (MmFreeMemoryRanges.c)
 * Callees:
 *     MiUnlockHugePfn @ 0x1404C8804 (MiUnlockHugePfn.c)
 *     MiHugePfnPartition @ 0x1404D2634 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiLockHugePfn @ 0x140671F4C (MiLockHugePfn.c)
 */

void __fastcall MiReleaseMemoryRuns(ULONG_PTR a1, __int64 *a2, int a3)
{
  _QWORD *v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // r9d
  ULONG_PTR v8; // r8
  __int64 v9; // r13
  _QWORD *v10; // r12
  char v11; // di
  char v12; // r10
  unsigned __int8 v13; // si
  __int64 v14; // rdx

  v3 = (_QWORD *)a2[2];
  v4 = 0LL;
  v5 = *a2;
  v6 = a3;
  v8 = a1;
  while ( v5 )
  {
    v4 = (*v3 / *(_QWORD *)(v8 + 24)) ^ ((*v3 / *(_QWORD *)(v8 + 24)) ^ v4) & 0xFFFFFFFFFFC00000uLL;
    v9 = *v3 % *(_QWORD *)(v8 + 24) + 1LL;
    v10 = (_QWORD *)(qword_140E30100 + 8 * ((*v3 / *(_QWORD *)(v8 + 24)) & 0x3FFFFFLL));
    do
    {
      --v9;
      v11 = 0;
      if ( v6 )
      {
        if ( (*v10 & 7) != 3 )
          KeBugCheckEx(0x1Au, 0x40F80uLL, a1, v4 & 0x3FFFFF, *a2 - v5);
      }
      else
      {
        MiHugePfnPartition(v10);
        if ( (*(_QWORD *)(qword_140E30100 + 8 * (v4 & 0x3FFFFF)) & 0x10000LL) == 0 )
          v11 = v12;
      }
      v13 = MiLockHugePfn((__int64)v10);
      MiInsertHugeRangeInList(0LL, v4, v11);
      LOBYTE(v14) = v13;
      MiUnlockHugePfn((__int64)v10, v14);
      v6 = a3;
      ++v10;
      v4 = (v4 + 1) ^ ((v4 + 1) ^ v4) & 0xFFFFFFFFFFC00000uLL;
    }
    while ( v9 );
    v8 = a1;
    --v5;
    ++v3;
  }
  *a2 = 0LL;
}
