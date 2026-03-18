/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x1404D99E4
 * Callers:
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

unsigned __int8 __fastcall MiLockWorkingSetForLargeMapping(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rbx
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  void *PoolMm; // rax
  unsigned __int8 v7; // al
  unsigned __int8 v8; // si

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return MiLockWorkingSetExclusive(a1);
  v4 = 0LL;
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( !ActiveProcessors[5].StaticBitmap[7] )
  {
    PoolMm = (void *)ExAllocatePoolMm(0x40uLL, 0x800uLL, 1817405773, a3 | 0x80000000);
    v4 = PoolMm;
    if ( PoolMm )
      memset_0(PoolMm, 0, 0x800uLL);
  }
  v7 = MiLockWorkingSetExclusive(a1);
  v8 = v7;
  if ( v4 )
  {
    if ( ActiveProcessors[5].StaticBitmap[7] )
    {
      MiUnlockWorkingSetExclusive(a1, v7);
      ExFreePoolWithTag(v4, 0);
      MiLockWorkingSetExclusive(a1);
    }
    else
    {
      ActiveProcessors[5].StaticBitmap[7] = (unsigned __int64)v4;
    }
  }
  return v8;
}
