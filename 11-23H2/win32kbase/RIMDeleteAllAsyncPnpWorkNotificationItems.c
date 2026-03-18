/*
 * XREFs of RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C006F0B8
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0071570 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C007267C (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMFreeAsyncPnpWorkItem @ 0x1C00B505C (RIMFreeAsyncPnpWorkItem.c)
 */

__int64 __fastcall RIMDeleteAllAsyncPnpWorkNotificationItems(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  void *v3; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 376);
  v2 = *(_QWORD **)(a1 + 376);
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    result = RIMFreeAsyncPnpWorkItem(v3);
  }
  return result;
}
