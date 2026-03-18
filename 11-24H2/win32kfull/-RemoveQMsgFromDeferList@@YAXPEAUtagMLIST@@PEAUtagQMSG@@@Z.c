/*
 * XREFs of ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x140154968
 * Callers:
 *     FreeMessageList @ 0x14008FFF0 (FreeMessageList.c)
 *     RedistributeDeferredMsgsOnQueue @ 0x140090D70 (RedistributeDeferredMsgsOnQueue.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x140154700 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     DestroyThreadsMessages @ 0x1401A1840 (DestroyThreadsMessages.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveQMsgFromDeferList(struct tagMLIST *a1, struct tagQMSG *a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( v2 )
    *v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  if ( *((struct tagQMSG **)a1 + 3) == a2 )
    *((_QWORD *)a1 + 3) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
}
