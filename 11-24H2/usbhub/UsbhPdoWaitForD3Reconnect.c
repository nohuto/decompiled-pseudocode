/*
 * XREFs of UsbhPdoWaitForD3Reconnect @ 0x1400388C8
 * Callers:
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSet_Pdo_Dx @ 0x140016F34 (UsbhSet_Pdo_Dx.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400225DC (UsbhSyncResumeDeviceInternal.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 */

POWER_STATE __fastcall UsbhPdoWaitForD3Reconnect(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2)
{
  char v4; // r14
  int v5; // r15d
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  _DWORD *v8; // rax
  int v9; // eax
  int v10; // r10d
  int v11; // eax
  _DWORD *v12; // rax
  int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v4 = 0;
  v5 = 0;
  v6 = PdoExt((__int64)a2);
  v7 = v6;
  if ( (v6[355] & 0x1000000) != 0 )
  {
    v4 = 1;
    v5 = UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, v6 + 730, v6[742], 1684222788, 0, 0LL);
  }
  KeWaitForSingleObject(v7 + 736, Executive, 0, 0, 0LL);
  v7[355] &= ~0x4000000u;
  KeSetEvent((PRKEVENT)(v7 + 736), 0, 0);
  Log((__int64)DeviceObject, 16, 1144210290, v5, *((unsigned __int16 *)v7 + 714));
  if ( v4 )
  {
    if ( v5 >= 0 )
      goto LABEL_11;
LABEL_16:
    v12 = PdoExt((__int64)a2);
    UsbhQueueSoftConnectChange(DeviceObject, *((unsigned __int16 *)v7 + 714), v12 + 236, 0LL);
    return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
  }
  if ( (int)UsbhQueryPortState((__int64)DeviceObject, *((unsigned __int16 *)v7 + 714), (__int64)&v14, &v15) < 0 )
    goto LABEL_16;
  if ( (v14 & 3) != 1 )
  {
    if ( (v14 & 1) != 0 )
    {
      v8 = PdoExt((__int64)a2);
      UsbhSyncResumeDeviceInternal((__int64)DeviceObject, (__int64)(v8 + 236), a2);
      return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
    }
    Log((__int64)DeviceObject, 16, 1144210279, (unsigned __int16)v14, *((unsigned __int16 *)v7 + 714));
    goto LABEL_16;
  }
  Log((__int64)DeviceObject, 16, 1144210284, (unsigned __int16)v14, *((unsigned __int16 *)v7 + 714));
LABEL_11:
  UsbhWait((__int64)DeviceObject, 0x64u);
  v9 = UsbhQueryPortState((__int64)DeviceObject, *((unsigned __int16 *)v7 + 714), (__int64)&v14, &v15);
  Log((__int64)DeviceObject, 16, 1144210291, v9, (unsigned __int16)v14);
  if ( v10 >= 0 && (v14 & 1) != 0 )
  {
    PdoExt((__int64)a2);
    v11 = UsbhSyncResetDeviceInternal(DeviceObject);
  }
  else
  {
    v11 = -1073741823;
  }
  if ( v11 < 0 )
    goto LABEL_16;
  return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
}
