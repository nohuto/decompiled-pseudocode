/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x14096CF54
 * Callers:
 *     PnpDeviceEventWorker @ 0x14096E070 (PnpDeviceEventWorker.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 160LL);
  v3 = *(_QWORD *)(*a1 + 168LL);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((void *)(v3 + 4), v2);
  return 0LL;
}
