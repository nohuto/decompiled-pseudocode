/*
 * XREFs of KeCpuPartitionMoveCpus @ 0x1405BF6B0
 * Callers:
 *     KeDeleteCpuPartition @ 0x14073C878 (KeDeleteCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x140775EC0 (NtSetInformationCpuPartition.c)
 *     PsCpuPartitionMoveCpus @ 0x14077641C (PsCpuPartitionMoveCpus.c)
 * Callees:
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 *     KeOrAffinityEx2 @ 0x1402067F0 (KeOrAffinityEx2.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeSubtractAffinityEx2 @ 0x140354F10 (KeSubtractAffinityEx2.c)
 *     KeIsSubsetAffinityEx @ 0x1403B34F0 (KeIsSubsetAffinityEx.c)
 *     KiAcquireCpuPartitionLock @ 0x1403C65B4 (KiAcquireCpuPartitionLock.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1403C82C8 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeIsEqualAffinityEx @ 0x1403C8980 (KeIsEqualAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404FB240 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B8688 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B86B4 (KiUpdateSystemAvailableCpuState.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405BFF0C (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405C0204 (KiCpuPartitionUpdatePrcbs.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeCpuPartitionMoveCpus(__int64 a1, __int64 a2, struct _KAFFINITY_EX *a3, char a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  void *Pool2; // r13
  __int64 v10; // rax
  void *v11; // r12
  struct _KAFFINITY_EX *v12; // rbx
  _QWORD *v13; // rbp
  _QWORD *v14; // r15
  unsigned __int16 v15; // si
  __int64 v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // r15
  unsigned __int16 v19; // si
  __int64 v20; // rbx
  __int64 v21; // r8
  unsigned __int8 v23[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v24; // [rsp+34h] [rbp-34h]

  v23[0] = 0;
  v5 = a2;
  v24 = KiActiveGroups;
  v7 = 0;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v10 = ExAllocatePool2(0x40uLL);
  v11 = (void *)v10;
  if ( !Pool2 || !v10 )
  {
    v7 = -1073741670;
    if ( !Pool2 )
      goto LABEL_29;
    goto LABEL_28;
  }
  KiAcquireCpuPartitionLock(v5, v23);
  v12 = *(struct _KAFFINITY_EX **)v5;
  if ( (unsigned int)KeIsSubsetAffinityEx(&a3->Count, *(unsigned __int16 **)v5)
    && (a4 || !(unsigned int)KeIsEqualAffinityEx(&a3->Count, &v12->Count)) )
  {
    if ( v5 != a1 )
    {
      KeSubtractAffinityEx2(v12, a3, v12);
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
      v13 = (_QWORD *)(v5 + 16);
      v14 = *(_QWORD **)(v5 + 16);
      if ( v14 != (_QWORD *)(v5 + 16) )
      {
        v15 = v24;
        do
        {
          v16 = *(v14 - 2);
          v14 = (_QWORD *)*v14;
          KiAdjustProcessCpuSetsAfterCpuPartitionChange(v16, v11, Pool2, v15, 0LL);
          KiUpdateProcessAvailableCpuState(v16, 1, v17);
          KiNotifyAvailableCpusChangeProcess(v16);
        }
        while ( v14 != v13 );
        v5 = a2;
      }
      v18 = *(_QWORD **)(a1 + 16);
      if ( v18 != (_QWORD *)(a1 + 16) )
      {
        v19 = v24;
        do
        {
          v20 = *(v18 - 2);
          v18 = (_QWORD *)*v18;
          KiAdjustProcessCpuSetsAfterCpuPartitionChange(v20, v11, Pool2, v19, 0LL);
          KiUpdateProcessAvailableCpuState(v20, 1, v21);
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
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23[0]);
  __writecr8(v23[0]);
LABEL_28:
  ExFreePoolWithTag(Pool2, 0);
LABEL_29:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v7;
}
