/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x140A726D0
 * Callers:
 *     PoFxUnregisterDevice @ 0x140A724F0 (PoFxUnregisterDevice.c)
 *     PoFxAbandonDevice @ 0x140A72534 (PoFxAbandonDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PopFxLockDevice @ 0x14048C9E4 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 */

NTSTATUS __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v3; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v3 = PopFxLockDevice((__int64)a1, 9, 0);
  if ( v3 )
    return PopFxUnregisterDevice(v3);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
