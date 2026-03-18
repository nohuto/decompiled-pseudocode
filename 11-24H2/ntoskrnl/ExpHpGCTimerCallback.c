/*
 * XREFs of ExpHpGCTimerCallback @ 0x1403BF6C0
 * Callers:
 *     KiExpireTimer2 @ 0x1403C0A90 (KiExpireTimer2.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExpSelectGCWorkQueue @ 0x14065A3A4 (ExpSelectGCWorkQueue.c)
 *     Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline @ 0x14065A4E0 (Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline.c)
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
