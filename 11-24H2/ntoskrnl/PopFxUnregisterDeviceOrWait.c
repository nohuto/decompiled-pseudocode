/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x140A74A30
 * Callers:
 *     PoFxUnregisterDevice @ 0x140A74850 (PoFxUnregisterDevice.c)
 *     PoFxAbandonDevice @ 0x140A74894 (PoFxAbandonDevice.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopFxLockDevice @ 0x140376070 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x140A74BB4 (PopFxUnregisterDevice.c)
 */

LONG __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v3; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v3 = PopFxLockDevice((__int64)a1, 9u, 0);
  if ( v3 )
    return PopFxUnregisterDevice(v3);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
