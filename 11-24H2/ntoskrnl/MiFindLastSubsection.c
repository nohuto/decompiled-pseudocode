/*
 * XREFs of MiFindLastSubsection @ 0x1403F2490
 * Callers:
 *     MiComputeDataFlushRange @ 0x140302C10 (MiComputeDataFlushRange.c)
 *     MiCanFileBeTruncatedInternal @ 0x1403F2224 (MiCanFileBeTruncatedInternal.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFindLastSubsection(__int64 a1, int a2)
{
  volatile LONG *v2; // rdi
  KIRQL v4; // bl
  __int64 v5; // rcx
  __int64 i; // rdx
  __int64 v7; // rsi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile LONG *)(a1 + 72);
  if ( a2 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockShared(v2);
  v5 = *(_QWORD *)(a1 + 280);
  for ( i = 0LL; v5; v5 = *(_QWORD *)(v5 + 8) )
    i = v5;
  v7 = i - 56;
  if ( v4 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v2, 0xBFFFFFFF);
      _InterlockedDecrement(v2);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    __writecr8(v4);
  }
  return v7;
}
