/*
 * XREFs of CiProcessLocate @ 0x1C000DC90
 * Callers:
 *     CiProcessNotification @ 0x1C0001180 (CiProcessNotification.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000C240 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 * Callees:
 *     CiProcessComparer @ 0x1C000DDB0 (CiProcessComparer.c)
 */

unsigned __int64 __fastcall CiProcessLocate(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  int v5; // esi
  int v6; // eax
  unsigned __int64 v7; // rax

  v2 = 0LL;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  v4 = (unsigned __int64)WPP_MAIN_CB.DeviceQueue.1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  if ( (WPP_MAIN_CB.Dpc.Type & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
      goto LABEL_9;
    v4 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.32 ^ *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1;
  }
  v5 = WPP_MAIN_CB.Dpc.Type & 1;
  while ( v4 )
  {
    v6 = CiProcessComparer(a1, v4, v3);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        break;
      v7 = *(_QWORD *)(v4 + 8);
      if ( v5 && v7 )
      {
LABEL_15:
        v4 ^= v7;
        continue;
      }
    }
    else
    {
      v7 = *(_QWORD *)v4;
      if ( v5 && v7 )
        goto LABEL_15;
    }
    v4 = v7;
  }
  if ( v4 )
  {
    v2 = v4 - 40;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 - 40 + 32)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_9:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}
