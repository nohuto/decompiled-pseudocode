/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14048B208
 * Callers:
 *     PiProcessNewDeviceNodeAsync @ 0x14082CDEC (PiProcessNewDeviceNodeAsync.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  BOOL v5; // edi

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F8AE28);
  v4 = (_QWORD *)qword_140F8ADE8;
  v5 = *(_QWORD *)&PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(ULONG **)qword_140F8ADE8 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140F8ADF0;
  qword_140F8ADE8 = (__int64)a2;
  KeReleaseSpinLock(&qword_140F8AE28, v3);
  return v5;
}
