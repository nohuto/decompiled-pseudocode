/*
 * XREFs of SshpWorkItemQueue @ 0x14047CD9C
 * Callers:
 *     SshpDereferenceBlocker @ 0x14047CBC0 (SshpDereferenceBlocker.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140757A40 (SshpSessionManagerOpenControlTrace.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A6DFC0 (SshpSessionManagerSendControlEventSlimEtl.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall SshpWorkItemQueue(struct _WORK_QUEUE_ITEM *a1)
{
  _m_prefetchw(&a1[1]);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[1], 3u) & 1) == 0 )
    ExQueueWorkItem(a1, DelayedWorkQueue);
}
