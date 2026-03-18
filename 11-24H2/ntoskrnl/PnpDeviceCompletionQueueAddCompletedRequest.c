/*
 * XREFs of PnpDeviceCompletionQueueAddCompletedRequest @ 0x14043B514
 * Callers:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14043B148 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddCompletedRequest(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)qword_140F8B580;
  if ( *(__int64 **)qword_140F8B580 != &qword_140F8B578 )
    __fastfail(3u);
  *a2 = &qword_140F8B578;
  a2[1] = v2;
  *v2 = a2;
  qword_140F8B580 = (__int64)a2;
  return KeReleaseSemaphore(&Object, 0, 1, 0) == 0;
}
