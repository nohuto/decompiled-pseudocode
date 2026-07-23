/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1407738D8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140777BB0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x140777DB8 (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140777E50 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777F64 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobRateControl @ 0x1407781CC (PspSetJobRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407786B0 (PspSetPagePriorityLimitJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PspRemoveIoAttribution @ 0x14085B7D4 (PspRemoveIoAttribution.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14085B860 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x14085B900 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x14085BBBC (PspIsSetJobIoAttribution.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14085C7FC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x14085CD84 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14085CE84 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x14085D2AC (PspEnforceLimits.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409774CC (PspAddSchedulingGroupToJobChain.c)
 *     PspSetBackgroundJobTree @ 0x140A50138 (PspSetBackgroundJobTree.c)
 *     PspFreezeJobTree @ 0x140A67B30 (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140ACF180 (PspDoesJobHierarchyPermitUILimits.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PspGetNextChildJob @ 0x14085D730 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x14085D828 (PspCallJobHierarchyCallbacks.c)
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
  char *v17; // rdi
  int v19; // [rsp+78h] [rbp+10h]
  int v20; // [rsp+80h] [rbp+18h]
  int v21; // [rsp+88h] [rbp+20h]
  int v22; // [rsp+98h] [rbp+30h]

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v6 = a6;
  v8 = a6 & 0xFFFFFFFE;
  v9 = a6 | 1;
  v10 = Object;
  if ( (a6 & 8) != 0 )
    v8 = a6 | 1;
  v11 = 0;
  v22 = v8;
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
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v8 = v22;
    if ( !NextChildJob )
    {
      v17 = (char *)*((_QWORD *)v10 + 163);
      while ( v10 != Object )
      {
        if ( (v6 & 2) != 0 )
        {
          v11 = PspCallJobHierarchyCallbacks((_DWORD)v10, v19, v20, v21, a5, v22);
          if ( v11 < 0 )
            goto LABEL_20;
        }
        NextChildJob = PspGetNextChildJob(v17, v10);
        if ( NextChildJob )
          break;
        v10 = v17;
        v17 = (char *)*((_QWORD *)v17 + 163);
      }
    }
    v10 = (char *)NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return (unsigned int)PspCallJobHierarchyCallbacks((_DWORD)Object, v19, v20, v21, a5, v6);
      return (unsigned int)v11;
    }
    a4 = v21;
    a3 = v20;
    a2 = v19;
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
