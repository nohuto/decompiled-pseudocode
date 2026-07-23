/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140485928
 * Callers:
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A767EC (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  BOOL v5; // edi

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F8B808);
  v4 = (_QWORD *)qword_140F8B7C8;
  v5 = *(_QWORD *)&PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(ULONG **)qword_140F8B7C8 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140F8B7D0;
  qword_140F8B7C8 = (__int64)a2;
  KeReleaseSpinLock(&qword_140F8B808, v3);
  return v5;
}
