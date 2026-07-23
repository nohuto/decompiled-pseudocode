/*
 * XREFs of KeCpuPartitionMoveCpus @ 0x1405BCCE0
 * Callers:
 *     KeDeleteCpuPartition @ 0x14073A7A8 (KeDeleteCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x1407760E0 (NtSetInformationCpuPartition.c)
 *     PsCpuPartitionMoveCpus @ 0x14077663C (PsCpuPartitionMoveCpus.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeSubtractAffinityEx2 @ 0x1402B2C40 (KeSubtractAffinityEx2.c)
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KiAcquireCpuPartitionLock @ 0x14048B51C (KiAcquireCpuPartitionLock.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14048B680 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8B20 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B5C68 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B5C94 (KiUpdateSystemAvailableCpuState.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405BD53C (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405BD834 (KiCpuPartitionUpdatePrcbs.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeCpuPartitionMoveCpus(__int64 a1, __int64 a2, struct _KAFFINITY_EX *a3, char a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 v9; // rbx
  void *Pool2; // r13
  __int64 v11; // rax
  void *v12; // r12
  struct _KAFFINITY_EX *v13; // rbx
  _QWORD *v14; // rbp
  _QWORD *v15; // r15
  unsigned __int16 v16; // si
  __int64 v17; // rbx
  _QWORD *v18; // r15
  unsigned __int16 v19; // si
  __int64 v20; // rbx
  unsigned __int8 v22[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v23; // [rsp+34h] [rbp-34h]

  v22[0] = 0;
  v5 = a2;
  v23 = KiActiveGroups;
  v7 = 0;
  v9 = (unsigned __int16)KiActiveGroups;
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 8LL * (unsigned __int16)KiActiveGroups, 0x7543694Bu);
  v11 = ExAllocatePool2(0x40uLL, 16 * v9, 0x7543694Bu);
  v12 = (void *)v11;
  if ( !Pool2 || !v11 )
  {
    v7 = -1073741670;
    if ( !Pool2 )
      goto LABEL_29;
    goto LABEL_28;
  }
  KiAcquireCpuPartitionLock(v5, v22);
  v13 = *(struct _KAFFINITY_EX **)v5;
  if ( (unsigned int)KeIsSubsetAffinityEx(&a3->Count, *(unsigned __int16 **)v5)
    && (a4 || !(unsigned int)KeIsEqualAffinityEx(&a3->Count, &v13->Count)) )
  {
    if ( v5 != a1 )
    {
      KeSubtractAffinityEx2(v13, a3, v13);
      if ( v5 == KiSystemCpuPartition )
        v7 = KiModifySystemAllowedCpuSetsWithLock(0, 0LL, &a3->Count, 0, 2);
      KxReleaseSpinLock((volatile signed __int64 *)(v5 + 8));
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 8));
      KeOrAffinityEx2(*(struct _KAFFINITY_EX **)a1, a3, *(struct _KAFFINITY_EX **)a1);
      KiCpuPartitionUpdatePrcbs(a1, a3);
      if ( a1 == KiSystemCpuPartition )
        v7 = KiModifySystemAllowedCpuSetsWithLock(0, 0LL, &a3->Count, 0, 1);
      KxReleaseSpinLock((volatile signed __int64 *)(a1 + 8));
      KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
      v14 = (_QWORD *)(v5 + 16);
      v15 = *(_QWORD **)(v5 + 16);
      if ( v15 != (_QWORD *)(v5 + 16) )
      {
        v16 = v23;
        do
        {
          v17 = *(v15 - 2);
          v15 = (_QWORD *)*v15;
          KiAdjustProcessCpuSetsAfterCpuPartitionChange(v17, v12, Pool2, v16, 0LL);
          KiUpdateProcessAvailableCpuState(v17, 1);
          KiNotifyAvailableCpusChangeProcess(v17);
        }
        while ( v15 != v14 );
        v5 = a2;
      }
      v18 = *(_QWORD **)(a1 + 16);
      if ( v18 != (_QWORD *)(a1 + 16) )
      {
        v19 = v23;
        do
        {
          v20 = *(v18 - 2);
          v18 = (_QWORD *)*v18;
          KiAdjustProcessCpuSetsAfterCpuPartitionChange(v20, v12, Pool2, v19, 0LL);
          KiUpdateProcessAvailableCpuState(v20, 1);
          KiNotifyAvailableCpusChangeProcess(v20);
        }
        while ( v18 != (_QWORD *)(a1 + 16) );
        v5 = a2;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiCpuPartitionAssignmentLock);
      if ( v5 == KiSystemCpuPartition || a1 == KiSystemCpuPartition )
      {
        KiUpdateSystemAvailableCpuState();
        KiNotifyAvailableCpusChangeCpuPartition(KiSystemCpuPartition);
      }
      goto LABEL_24;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v5 + 8));
LABEL_24:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22[0]);
  __writecr8(v22[0]);
LABEL_28:
  ExFreePoolWithTag(Pool2, 0);
LABEL_29:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v7;
}
