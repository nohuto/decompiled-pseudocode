/*
 * XREFs of ExpHpGCTimerCallback @ 0x1403AE280
 * Callers:
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExpSelectGCWorkQueue @ 0x140658A74 (ExpSelectGCWorkQueue.c)
 *     Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline @ 0x140658BB0 (Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall ExpHpGCTimerCallback(__int64 a1, void *a2)
{
  struct _WORK_QUEUE_ITEM *v2; // rbx
  unsigned int v3; // edi
  WORK_QUEUE_TYPE v4; // eax

  v2 = (struct _WORK_QUEUE_ITEM *)&ExpHpGCWorkItemNonPaged;
  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 != 1 )
    v2 = &ExpHpGCWorkItemPaged;
  v2->List.Flink = 0LL;
  v2->WorkerRoutine = (void (__fastcall *)(void *))ExpHpCompactionRoutine;
  v2->Parameter = a2;
  if ( (unsigned int)Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline() )
    v4 = (unsigned int)ExpSelectGCWorkQueue(v3);
  else
    v4 = NormalWorkQueue;
  ExQueueWorkItem(v2, v4);
}
