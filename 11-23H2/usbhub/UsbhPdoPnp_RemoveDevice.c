/*
 * XREFs of UsbhPdoPnp_RemoveDevice @ 0x1C0056380
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetPdoPowerState @ 0x1C0003960 (UsbhSetPdoPowerState.c)
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C001AB8C (UsbhAcquireFdoPwrLock.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdo_FailIo @ 0x1C00396D0 (UsbhSetPdo_FailIo.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C003A2F8 (UsbhSyncResumeDeviceInternal.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003B22C (Usbh_PdoRemove_PdoEvent.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C0053274 (SET_PDO_SWPNPSTATE.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056C34 (UsbhPdoRemoveCleanup.c)
 */

__int64 __fastcall UsbhPdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *v4; // r15
  int v5; // r14d
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rdi
  KSPIN_LOCK v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  char v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+49h] [rbp-3Fh]

  v4 = 0LL;
  v5 = PdoExt((__int64)DeviceObject)[281];
  v6 = PdoExt((__int64)DeviceObject);
  v7 = v6;
  if ( _bittest(v6 + 355, 0x12u) )
    v8 = 0LL;
  else
    v8 = *((_QWORD *)v6 + 148);
  if ( v5 != 6 )
  {
    v9 = (KSPIN_LOCK)(v6 + 236);
    if ( _bittest(v6 + 358, 0x12u) )
    {
      v10 = *((_QWORD *)v6 + 382);
      v16 = 0;
      v14 = v10;
      v15 = 0;
      ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v14, 13LL);
      v7[358] &= ~0x40000u;
    }
    if ( v8 )
    {
      UsbhSetPdo_FailIo((__int64)DeviceObject);
      if ( v7[288] == 2 || PdoExt((__int64)DeviceObject)[197] != 1 )
        v4 = (_QWORD *)UsbhIncHubBusy(v8, v9, (__int64)DeviceObject, 1381200755, 1);
      if ( PdoExt((__int64)DeviceObject)[197] != 1 )
      {
        UsbhSyncResumeDeviceInternal(v8, v9, DeviceObject);
        UsbhAcquireFdoPwrLock(v8, v9, 137, 1148020050);
        UsbhSetPdoPowerState(v9, (__int64)DeviceObject, v11, 1, 15);
        UsbhReleaseFdoPwrLock(v8, v9);
      }
      UsbhPdoRemoveCleanup(DeviceObject);
    }
    SET_PDO_SWPNPSTATE((__int64)DeviceObject, 102, 2);
    Usbh_PdoRemove_PdoEvent(v8, (__int64)DeviceObject, v9);
    if ( v4 )
      UsbhDecHubBusy(v8, v12, v4);
  }
  if ( !Irp )
    UsbhTrapFatal_Dbg(v8, (ULONG_PTR)DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
