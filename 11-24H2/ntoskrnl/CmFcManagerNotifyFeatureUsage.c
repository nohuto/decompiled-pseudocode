/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x1403A4D48
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1403A4B50 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x1403A4D30 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     RtlAcquireSwapReference @ 0x1403A4E34 (RtlAcquireSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1403A4E8C (RtlpFcAddDelayedUsageReportToBuffer.c)
 *     RtlReleaseSwapReference @ 0x1403A500C (RtlReleaseSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
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
  v6 = (unsigned int)RtlAcquireSwapReference(&unk_140EF7078);
  v7 = qword_140EF70A0[v6];
  if ( v7 )
  {
    v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
    if ( v8 >= 0 )
    {
      RtlReleaseSwapReference(&unk_140EF7078, (unsigned int)v6);
      if ( byte_140EF7098 )
      {
        if ( EffectiveIrql >= 2u )
          KeInsertQueueDpc(&stru_140EF70B0, 0LL, 0LL);
        else
          CmpWorkItemQueueWork(&stru_140EF70F0);
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
    RtlReleaseSwapReference(&unk_140EF7078, (unsigned int)v6);
LABEL_12:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
