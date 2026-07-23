/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1402F03C8
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1402F0310 (PnpDeviceCompletionRoutine.c)
 *     PiProcessNewDeviceNodeWorker @ 0x140721BB0 (PiProcessNewDeviceNodeWorker.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpDeviceCompletionQueueAddCompletedRequest @ 0x1402F0794 (PnpDeviceCompletionQueueAddCompletedRequest.c)
 */

void __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  __int64 v5; // r8
  KIRQL v6; // di
  _QWORD *v7; // rdx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F8B808);
  v5 = *a2;
  v6 = v3;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v7 = (_QWORD *)a2[1], (_QWORD *)*v7 != a2) )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  --dword_140F8B7D0;
  PnpDeviceCompletionQueueAddCompletedRequest(v4, a2);
  KeReleaseSpinLock(&qword_140F8B808, v6);
}
