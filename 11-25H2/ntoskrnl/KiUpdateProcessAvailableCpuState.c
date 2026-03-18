/*
 * XREFs of KiUpdateProcessAvailableCpuState @ 0x140267998
 * Callers:
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B43BC (KeQueryProcessAvailableCpus.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BB5D0 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x14072F8A0 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KeAndAffinityEx2 @ 0x140267450 (KeAndAffinityEx2.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x140267A84 (KiQueryCpuPartitionAffinityProcess.c)
 *     RtlWriteAcquireTickLock @ 0x140274A4C (RtlWriteAcquireTickLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeIsForceParkingEnabled @ 0x140313D80 (KeIsForceParkingEnabled.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x140428F84 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiUpdateProcessAvailableCpuState(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a1 + 448);
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  RtlWriteAcquireTickLock(v2);
  LOBYTE(v6) = a2;
  v7 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v2 + 8) = KiCpuSetSequence;
  KiQueryCpuPartitionAffinityProcess(v4, v7, v6);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  KeAndAffinityEx2(
    *(struct _KAFFINITY_EX **)(v2 + 24),
    *(struct _KAFFINITY_EX **)(v4 + 80),
    *(struct _KAFFINITY_EX **)(v2 + 24));
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  if ( (unsigned __int8)KeIsForceParkingEnabled(v9, v8) )
  {
    v12 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 16) = KiForceParkingSequence;
    KiRemoveForceParkedProcessorsFromAffinity(v12);
  }
  ++*(_QWORD *)v2;
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
