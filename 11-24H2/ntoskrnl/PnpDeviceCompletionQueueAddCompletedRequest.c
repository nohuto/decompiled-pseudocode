/*
 * XREFs of PnpDeviceCompletionQueueAddCompletedRequest @ 0x1402F0794
 * Callers:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1402F03C8 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddCompletedRequest(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)qword_140F8B7E0;
  if ( *(__int64 **)qword_140F8B7E0 != &qword_140F8B7D8 )
    __fastfail(3u);
  *a2 = &qword_140F8B7D8;
  a2[1] = v2;
  *v2 = a2;
  qword_140F8B7E0 = (__int64)a2;
  return KeReleaseSemaphore(&Object, 0, 1, 0) == 0;
}
