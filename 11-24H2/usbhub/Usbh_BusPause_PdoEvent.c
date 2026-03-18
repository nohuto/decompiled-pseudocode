/*
 * XREFs of Usbh_BusPause_PdoEvent @ 0x140048294
 * Callers:
 *     UsbhCancelEnumeration @ 0x140034170 (UsbhCancelEnumeration.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x140024C28 (SET_PDO_HWPNPSTATE.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     UsbhFlushQueuedDriverReset @ 0x140046324 (UsbhFlushQueuedDriverReset.c)
 *     UsbhSignalSyncDeviceReset @ 0x140047888 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_BusPause_PdoEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  KIRQL v11; // dl

  UsbhFlushQueuedDriverReset(a1, a3);
  UsbhAcquirePdoStateLock(v8, a4, 10);
  Log(a1, 2, 1716736630, 0LL, a4);
  v9 = PdoExt(a2);
  v10 = (unsigned int)v9[281];
  if ( v9[281] == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        1u,
        0x45u,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        a2);
    Log(a1, 4, 1685283663, a2, a4);
    UsbhDeletePdo(a1, a2, 1, 10, a4);
  }
  else if ( v9[281] == 2 || (unsigned int)(v9[281] - 3) < 2 )
  {
    SET_PDO_HWPNPSTATE(a2, v10, 10);
    *(_DWORD *)(a4 + 136) = 0;
    qword_14006F5E0 = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a4 + 132));
    UsbhSignalSyncDeviceReset(a1, a2, a3, -1073741823);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    qword_14006F5E0 = 0LL;
    v11 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v11);
  }
}
