/*
 * XREFs of CiProcessDereference @ 0x1C000E170
 * Callers:
 *     CiProcessNotification @ 0x1C0001180 (CiProcessNotification.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000C240 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000DF90 (CiThreadCleanup.c)
 *     CiDispatchClose @ 0x1C000E390 (CiDispatchClose.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 */

void __fastcall CiProcessDereference(char *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax

  _m_prefetchw(P + 32);
  v2 = *((_QWORD *)P + 4);
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 4, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  CiSystemAcquirePushLock((__int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( v5 )
  {
    if ( v6 )
      __fastfail(0xEu);
    RtlRbRemoveNode(&WPP_MAIN_CB.DeviceQueue.Busy, P + 40);
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    ObfDereferenceObject(*((PVOID *)P + 10));
    ExFreePoolWithTag(P, 0x5073634Du);
  }
  else
  {
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  }
}
