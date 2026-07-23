/*
 * XREFs of KiUpdateProcessAvailableCpuState @ 0x14032B848
 * Callers:
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B588C (KeQueryProcessAvailableCpus.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x140739A60 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x1402ABFD4 (RtlWriteAcquireTickLock.c)
 *     KeIsForceParkingEnabled @ 0x14032B830 (KeIsForceParkingEnabled.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x14032B934 (KiQueryCpuPartitionAffinityProcess.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x14042B3A0 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiUpdateProcessAvailableCpuState(__int64 a1, char a2)
{
  signed __int64 *v2; // rdi
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r8
  signed __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 result; // rax
  signed __int64 v10; // rcx

  v2 = *(signed __int64 **)(a1 + 448);
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  RtlWriteAcquireTickLock(v2);
  LOBYTE(v6) = a2;
  v7 = v2[3];
  v2[1] = KiCpuSetSequence;
  KiQueryCpuPartitionAffinityProcess(v4, v7, v6);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  KeAndAffinityEx2(v2[3], *(_QWORD *)(v4 + 80), v2[3]);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  if ( KeIsForceParkingEnabled() )
  {
    v10 = v2[3];
    v2[2] = KiForceParkingSequence;
    KiRemoveForceParkedProcessorsFromAffinity(v10);
  }
  ++*v2;
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
