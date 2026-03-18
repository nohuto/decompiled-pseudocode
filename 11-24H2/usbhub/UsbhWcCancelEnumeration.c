/*
 * XREFs of UsbhWcCancelEnumeration @ 0x140034FE0
 * Callers:
 *     UsbhWaitConnect @ 0x140006D60 (UsbhWaitConnect.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     UsbhBusUnlatchPdo @ 0x140029F90 (UsbhBusUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWcCancelEnumeration(PDEVICE_OBJECT a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // rdx

  v5 = (__int64)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        43,
        (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
        *(unsigned __int16 *)(a2 + 4));
  }
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 64);
      if ( v6 )
      {
        a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v6 + 888)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884)));
        *(_DWORD *)&a1->Type = 1313175651;
        a1->DriverObject = 0LL;
        a1->NextDevice = (_DEVICE_OBJECT *)a2;
        a1->AttachedDevice = 0LL;
      }
    }
  }
  if ( a3 )
  {
    v8 = *(_QWORD *)(a2 + 376);
    UsbhAcquirePdoStateLock((__int64)a1, v8, 19);
    if ( PdoExt(a3)[281] == 2 )
    {
      UsbhBusUnlatchPdo(v5, a3, a2, v9, v8 + 132);
      UsbhDeletePdo(v5, a3, 2, 19, v8);
    }
    else
    {
      v10 = *(_QWORD *)(a2 + 376);
      *(_DWORD *)(v10 + 136) = 0;
      qword_14006F5E0 = 0LL;
      *(_DWORD *)(v10 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v10 + 132));
    }
  }
  return 4LL;
}
