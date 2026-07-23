/*
 * XREFs of SshpWorkItemQueue @ 0x140477ADC
 * Callers:
 *     SshpDereferenceBlocker @ 0x140477900 (SshpDereferenceBlocker.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140766E60 (SshpSessionManagerOpenControlTrace.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660 (SshpSessionManagerSendControlEventSlimEtl.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall SshpWorkItemQueue(struct _WORK_QUEUE_ITEM *a1)
{
  _m_prefetchw(&a1[1]);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[1], 3u) & 1) == 0 )
    ExQueueWorkItem(a1, DelayedWorkQueue);
}
