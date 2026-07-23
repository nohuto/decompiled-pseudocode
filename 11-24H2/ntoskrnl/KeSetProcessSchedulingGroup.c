/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x1402D6F08
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1408D85E4 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x1408D88A8 (PspSetProcessSchedulingGroup.c)
 *     PspTerminateProcess @ 0x1408F4E40 (PspTerminateProcess.c)
 * Callees:
 *     KiSetThreadSchedulingGroup @ 0x1402D6FE8 (KiSetThreadSchedulingGroup.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r15
  _QWORD *i; // rbx
  __int64 v7; // rdx

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v5 = *(_QWORD *)(v3 + 304);
  if ( v5 != a2 )
  {
    for ( i = *(_QWORD **)(v3 + 48); i != (_QWORD *)(v3 + 48); i = (_QWORD *)*i )
    {
      if ( *(i - 82) != a2 )
        KiSetThreadSchedulingGroup(i - 95, a2);
    }
    *(_QWORD *)(v3 + 304) = a2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  return v5;
}
