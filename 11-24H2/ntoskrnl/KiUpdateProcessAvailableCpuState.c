/*
 * XREFs of KiUpdateProcessAvailableCpuState @ 0x140204268
 * Callers:
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B82AC (KeQueryProcessAvailableCpus.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BF410 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x14073BB30 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KeIsForceParkingEnabled @ 0x140204250 (KeIsForceParkingEnabled.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x140204354 (KiQueryCpuPartitionAffinityProcess.c)
 *     KeAndAffinityEx2 @ 0x1402052E0 (KeAndAffinityEx2.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlWriteAcquireTickLock @ 0x14029D4E4 (RtlWriteAcquireTickLock.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x1404387E0 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiUpdateProcessAvailableCpuState(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx

  v3 = *(_QWORD **)(a1 + 448);
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL, a3);
  }
  RtlWriteAcquireTickLock(v3);
  LOBYTE(v7) = a2;
  v8 = v3[3];
  v3[1] = KiCpuSetSequence;
  KiQueryCpuPartitionAffinityProcess(v5, v8, v7);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  KeAndAffinityEx2(v3[3], *(_QWORD *)(v5 + 80), v3[3]);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  if ( KeIsForceParkingEnabled() )
  {
    v11 = v3[3];
    v3[2] = KiForceParkingSequence;
    KiRemoveForceParkedProcessorsFromAffinity(v11);
  }
  ++*v3;
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
