/*
 * XREFs of PnpDeviceCompletionQueueAddCompletedRequest @ 0x140463C9C
 * Callers:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140463A78 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddCompletedRequest(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)qword_140F8AE00;
  if ( *(__int64 **)qword_140F8AE00 != &qword_140F8ADF8 )
    __fastfail(3u);
  *a2 = &qword_140F8ADF8;
  a2[1] = v2;
  *v2 = a2;
  qword_140F8AE00 = (__int64)a2;
  return KeReleaseSemaphore(&Object, 0, 1, 0) == 0;
}
