/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x14021E1F8
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14021E000 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x14021E1E0 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x14021E2E4 (RtlAcquireSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x14021E33C (RtlpFcAddDelayedUsageReportToBuffer.c)
 *     RtlReleaseSwapReference @ 0x14021E4BC (RtlReleaseSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall CmFcManagerNotifyFeatureUsage(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 EffectiveIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx

  v3 = 0;
  EffectiveIrql = KeGetEffectiveIrql();
  if ( EffectiveIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v6 = (unsigned int)RtlAcquireSwapReference(&unk_140EF72B8);
  v7 = qword_140EF72E0[v6];
  if ( v7 )
  {
    v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
    if ( v8 >= 0 )
    {
      RtlReleaseSwapReference(&unk_140EF72B8, (unsigned int)v6);
      if ( byte_140EF72D8 )
      {
        if ( EffectiveIrql >= 2u )
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        else
          CmpWorkItemQueueWork(&stru_140EF7330);
      }
      v8 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (_DWORD)v6 != -1 )
    RtlReleaseSwapReference(&unk_140EF72B8, (unsigned int)v6);
LABEL_12:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
