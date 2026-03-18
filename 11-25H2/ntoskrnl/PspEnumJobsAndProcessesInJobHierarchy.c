/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x140763CE8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140767F10 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x140768118 (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1407681B0 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407682C4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobRateControl @ 0x14076852C (PspSetJobRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x140768A10 (PspSetPagePriorityLimitJobTree.c)
 *     PspRemoveIoAttribution @ 0x1408DABD8 (PspRemoveIoAttribution.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408DAC64 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x1408DADA4 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1408DB060 (PspIsSetJobIoAttribution.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1408DBBF8 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408DC184 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x1408DC6AC (PspEnforceLimits.c)
 *     PspEstablishJobHierarchy @ 0x1409040C0 (PspEstablishJobHierarchy.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetBackgroundJobTree @ 0x140A558BC (PspSetBackgroundJobTree.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140A57628 (PspAddSchedulingGroupToJobChain.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140A60890 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspFreezeJobTree @ 0x140A71B9C (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     PspGetNextChildJob @ 0x1408DCB30 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408DCC28 (PspCallJobHierarchyCallbacks.c)
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
