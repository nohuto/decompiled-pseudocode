/*
 * XREFs of CmpSignalDeferredPosts @ 0x14086CBD0
 * Callers:
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     CmpFreePostBlock @ 0x14086CC80 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  PVOID **v4; // rdi
  __int64 v5; // r9
  struct _KEVENT *v6; // rcx
  struct _WORK_QUEUE_ITEM *v7; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    if ( (_QWORD **)result[1] != a1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    v4 = (PVOID **)(result - 2);
    v3[1] = a1;
    v5 = result[6];
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v6 = *(struct _KEVENT **)v5;
      goto LABEL_6;
    }
    v7 = *(struct _WORK_QUEUE_ITEM **)(v5 + 8);
    if ( v7 )
      ExQueueWorkItem(v7, *(WORK_QUEUE_TYPE *)(v5 + 16));
    v6 = (struct _KEVENT *)*v4[8];
    if ( v6 )
    {
LABEL_6:
      KeSetEvent(v6, 0, 0);
      ObfDereferenceObject(*v4[8]);
      CmpFreePostBlock(v4);
    }
    else
    {
      CmpFreePostBlock(v4);
    }
  }
}
