/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x14047C244
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1408E7DA0 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x1408E8064 (PspSetProcessSchedulingGroup.c)
 *     PspTerminateProcess @ 0x140939700 (PspTerminateProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetThreadSchedulingGroup @ 0x14047C324 (KiSetThreadSchedulingGroup.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
