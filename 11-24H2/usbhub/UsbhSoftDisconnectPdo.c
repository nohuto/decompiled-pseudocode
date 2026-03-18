/*
 * XREFs of UsbhSoftDisconnectPdo @ 0x1400478C0
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x140044B14 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x14001855C (UsbhCancelResetTimeout.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x140024C28 (SET_PDO_HWPNPSTATE.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSignalSyncDeviceReset @ 0x140047888 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall UsbhSoftDisconnectPdo(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PortData; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  _DWORD *v13; // rax
  int v14; // edx

  v3 = *(_QWORD *)(a3 + 16);
  FdoExt(a1);
  v7 = PdoExt(v3);
  Log(a1, 2, 1347638561, 0LL, a3);
  PortData = UsbhGetPortData(a1, *((unsigned __int16 *)v7 + 714), v8, v9);
  v11 = PortData;
  if ( PortData )
  {
    UsbhCancelResetTimeout(a1, PortData, 1);
    UsbhSignalSyncDeviceReset(a1, v3, v11, -1073741823);
    UsbhAcquirePdoStateLock(v12, a3, a2);
    Log(a1, 4, 1685219152, v11, v3);
    v13 = PdoExt(v3);
    v14 = 3;
    if ( v13[281] != 3 )
    {
      if ( v13[281] != 4 )
      {
LABEL_6:
        *(_DWORD *)(a3 + 136) = 0;
        qword_14006F5E0 = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
        return;
      }
      Log(a1, 4, 1685219123, (__int64)v7, (unsigned int)v7[355]);
      v14 = 4;
    }
    SET_PDO_HWPNPSTATE(v3, v14, a2);
    goto LABEL_6;
  }
}
