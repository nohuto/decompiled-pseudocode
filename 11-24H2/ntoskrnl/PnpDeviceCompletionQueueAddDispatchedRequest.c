/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14048AB00
 * Callers:
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A7C4EC (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  BOOL v5; // edi

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F8B5A8);
  v4 = (_QWORD *)qword_140F8B568;
  v5 = *(_QWORD *)&PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(ULONG **)qword_140F8B568 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140F8B570;
  qword_140F8B568 = (__int64)a2;
  KeReleaseSpinLock(&qword_140F8B5A8, v3);
  return v5;
}
