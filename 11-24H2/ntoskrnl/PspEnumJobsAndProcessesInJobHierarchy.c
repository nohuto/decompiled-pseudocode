/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1407736B8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspDoesJobHierarchyPermitUILimits_Old @ 0x1407776D8 (PspDoesJobHierarchyPermitUILimits_Old.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407779F0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x140777BF8 (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140777C90 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777DA4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobRateControl @ 0x14077800C (PspSetJobRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407784F0 (PspSetPagePriorityLimitJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x14085EA8C (PspFreezeJobTree.c)
 *     PspEstablishJobHierarchy @ 0x1408E62CC (PspEstablishJobHierarchy.c)
 *     PspRemoveIoAttribution @ 0x1408E9FA4 (PspRemoveIoAttribution.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408EA030 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x1408EA0D0 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1408EA38C (PspIsSetJobIoAttribution.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1408EAFCC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408EB554 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408EB654 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x1408EBA7C (PspEnforceLimits.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14098CBAC (PspAddSchedulingGroupToJobChain.c)
 *     PspSetBackgroundJobTree @ 0x140A58988 (PspSetBackgroundJobTree.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140AD10F4 (PspDoesJobHierarchyPermitUILimits.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PspGetNextChildJob @ 0x1408EBF00 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408EBFF8 (PspCallJobHierarchyCallbacks.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(char *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // esi
  unsigned int v8; // r13d
  int v9; // eax
  char *v10; // rbx
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 NextChildJob; // rbp
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v19; // rdi
  int v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h]
  int v23; // [rsp+88h] [rbp+20h]
  int v24; // [rsp+98h] [rbp+30h]

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v6 = a6;
  v8 = a6 & 0xFFFFFFFE;
  v9 = a6 | 1;
  v10 = Object;
  if ( (a6 & 8) != 0 )
    v8 = a6 | 1;
  v11 = 0;
  v24 = v8;
  if ( (v6 & 8) != 0 )
    v6 = v9;
  while ( (v6 & 2) != 0 )
  {
LABEL_6:
    CurrentThread = KeGetCurrentThread();
    NextChildJob = 0LL;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v10 + 56), 1u);
    v14 = v10 + 1288;
    v15 = (_QWORD *)*((_QWORD *)v10 + 161);
    while ( v15 != v14 )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(v15 - 159), 0x6E457350u) )
      {
        NextChildJob = (__int64)(v15 - 159);
        break;
      }
      v15 = (_QWORD *)*v15;
      v14 = v10 + 1288;
    }
    ExReleaseResourceLite((PERESOURCE)(v10 + 56));
    if ( CurrentThread )
    {
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v17, v16);
      }
    }
    v8 = v24;
    if ( !NextChildJob )
    {
      v19 = (char *)*((_QWORD *)v10 + 163);
      while ( v10 != Object )
      {
        if ( (v6 & 2) != 0 )
        {
          v11 = PspCallJobHierarchyCallbacks((_DWORD)v10, v21, v22, v23, a5, v24);
          if ( v11 < 0 )
            goto LABEL_20;
        }
        NextChildJob = PspGetNextChildJob(v19, v10);
        if ( NextChildJob )
          break;
        v10 = v19;
        v19 = (char *)*((_QWORD *)v19 + 163);
      }
    }
    v10 = (char *)NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return (unsigned int)PspCallJobHierarchyCallbacks((_DWORD)Object, v21, v22, v23, a5, v6);
      return (unsigned int)v11;
    }
    a4 = v23;
    a3 = v22;
    a2 = v21;
  }
  v11 = PspCallJobHierarchyCallbacks((_DWORD)v10, a2, a3, a4, a5, v6);
  if ( v11 >= 0 )
  {
    v6 = v8;
    goto LABEL_6;
  }
LABEL_20:
  if ( v10 )
  {
    while ( v10 != Object )
    {
      ObfDereferenceObjectWithTag(v10, 0x6E457350u);
      v10 = (char *)*((_QWORD *)v10 + 163);
    }
  }
  return (unsigned int)v11;
}
