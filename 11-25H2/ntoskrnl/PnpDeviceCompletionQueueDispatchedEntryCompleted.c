/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140463A78
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404639C0 (PnpDeviceCompletionRoutine.c)
 *     PiProcessNewDeviceNodeWorker @ 0x140717F20 (PiProcessNewDeviceNodeWorker.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PnpDeviceCompletionQueueAddCompletedRequest @ 0x140463C9C (PnpDeviceCompletionQueueAddCompletedRequest.c)
 */

void __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  __int64 v5; // r8
  KIRQL v6; // di
  _QWORD *v7; // rdx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F8AE28);
  v5 = *a2;
  v6 = v3;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v7 = (_QWORD *)a2[1], (_QWORD *)*v7 != a2) )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  --dword_140F8ADF0;
  PnpDeviceCompletionQueueAddCompletedRequest(v4, a2);
  KeReleaseSpinLock(&qword_140F8AE28, v6);
}
