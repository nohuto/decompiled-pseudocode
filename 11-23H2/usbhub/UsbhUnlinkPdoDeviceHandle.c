/*
 * XREFs of UsbhUnlinkPdoDeviceHandle @ 0x1C001BEDC
 * Callers:
 *     UsbhInitializeDevice @ 0x1C0002778 (UsbhInitializeDevice.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDeregisterPdo @ 0x1C0037578 (UsbhDeregisterPdo.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003A9B8 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPortDisconnect @ 0x1C004D690 (UsbhPortDisconnect.c)
 *     UsbhReset2Timeout @ 0x1C004E6E0 (UsbhReset2Timeout.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C00569B0 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C003B1EC (Usbh_HubRemoveUsbDevice.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C004C188 (UsbhBusIf_SetClearRootPortResumeTime.c)
 */

void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rsi
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r13
  _DWORD *v11; // rbp
  int v12; // r10d
  int v13; // r10d
  int v14; // ecx
  int v15; // ecx
  __int64 *v16; // rbx
  _DWORD *v17; // rax

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  Log(a1, 256, 1970032708, 0LL, 0LL);
  Log(a1, v12, a3, a2, 0LL);
  v14 = v11[288];
  if ( v14 && (v15 = v14 - 1) != 0 )
  {
    if ( v15 == 1 )
    {
      v16 = (__int64 *)(v11 + 290);
      if ( (v11[355] & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *v16, 0LL, 0LL);
        v11[355] &= ~0x20000000u;
        v13 = 256;
      }
      v8 = *v16;
      *v16 = 0xFEFEFEFEFEFEFEFEuLL;
      v11[288] = 1;
      Log(a1, v13, 1970032690, 0LL, v8);
      v17 = FdoExt(a1);
      if ( *((_QWORD *)v17 + 559) )
        (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v17 + 559))(
          *((_QWORD *)v17 + 529),
          v8,
          a2,
          1212441712LL);
    }
  }
  else
  {
    Log(a1, v13, 1970032689, 0LL, (int)v11[288]);
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
