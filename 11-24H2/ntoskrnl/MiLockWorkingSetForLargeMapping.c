/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x1404D1EB4
 * Callers:
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
