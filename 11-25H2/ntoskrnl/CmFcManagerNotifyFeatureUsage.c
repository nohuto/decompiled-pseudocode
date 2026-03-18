/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x1403B8968
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1403B86D0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x1403B8950 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     RtlAcquireSwapReference @ 0x1403B8A54 (RtlAcquireSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1403B8AAC (RtlpFcAddDelayedUsageReportToBuffer.c)
 *     RtlReleaseSwapReference @ 0x1403B8C2C (RtlReleaseSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 */

__int64 __fastcall CmFcManagerNotifyFeatureUsage(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx

  v3 = 0;
  CurrentIrql = ObGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v6 = (unsigned int)RtlAcquireSwapReference(&unk_140EF6CD8);
  v7 = qword_140EF6D00[v6];
  if ( v7 )
  {
    v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
    if ( v8 >= 0 )
    {
      RtlReleaseSwapReference(&unk_140EF6CD8, (unsigned int)v6);
      if ( byte_140EF6CF8 )
      {
        if ( CurrentIrql >= 2u )
          KeInsertQueueDpc(&stru_140EF6D10, 0LL, 0LL);
        else
          CmpWorkItemQueueWork(&stru_140EF6D50);
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
    RtlReleaseSwapReference(&unk_140EF6CD8, (unsigned int)v6);
LABEL_12:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
