/*
 * XREFs of UsbhInitPortChangeList @ 0x1C0034048
 * Callers:
 *     UsbhBusPnpStart @ 0x1C00369F0 (UsbhBusPnpStart.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInitPortChangeList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-10h]

  Log(a1, 512, 1768837187, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x34u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v5);
  }
  FdoExt(a1);
  KeInitializeEvent((PRKEVENT)(a2 + 520), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 2464), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 472), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 496), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a2 + 800), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 712), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 744), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 824), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 2888), SynchronizationEvent, 1u);
  *(_DWORD *)(a2 + 696) = 0;
  *(_DWORD *)(a2 + 860) = 32;
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 440));
  result = a2 + 456;
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  *(_DWORD *)(a2 + 12) = 1;
  *(_QWORD *)(a2 + 464) = a2 + 456;
  *(_QWORD *)(a2 + 456) = a2 + 456;
  return result;
}
