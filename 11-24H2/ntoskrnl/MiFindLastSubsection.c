/*
 * XREFs of MiFindLastSubsection @ 0x140314EB0
 * Callers:
 *     MiComputeDataFlushRange @ 0x14022F300 (MiComputeDataFlushRange.c)
 *     MiCanFileBeTruncatedInternal @ 0x140314C44 (MiCanFileBeTruncatedInternal.c)
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
