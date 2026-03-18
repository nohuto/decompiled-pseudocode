/*
 * XREFs of UsbhPdoRemoveCleanup @ 0x14001DB50
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x14005CC70 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005CF30 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhCompletePdoIdleIrp @ 0x14001D8AC (UsbhCompletePdoIdleIrp.c)
 *     UsbhPdoDeleteSymbolicLink @ 0x14001DA70 (UsbhPdoDeleteSymbolicLink.c)
 *     UsbhRefPdoDeviceHandle @ 0x14001E740 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x14001E9F0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhCompletePdoWakeIrp @ 0x14002123C (UsbhCompletePdoWakeIrp.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

int __fastcall UsbhPdoRemoveCleanup(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rax

  v2 = PdoExt((__int64)DeviceObject);
  v3 = PdoExt((__int64)DeviceObject);
  if ( v3[280] != 100 )
  {
    v3 = PdoExt((__int64)DeviceObject);
    if ( v3[280] != 102 )
    {
      UsbhCompletePdoWakeIrp(*((_QWORD *)v2 + 148), DeviceObject, 3221225760LL);
      UsbhCompletePdoIdleIrp(*((_QWORD *)v2 + 148), *((_QWORD *)v2 + 105), -1073741536);
      v4 = UsbhRefPdoDeviceHandle(*((_QWORD *)v2 + 148), DeviceObject, DeviceObject, 1212443750LL);
      if ( v4 )
      {
        v5 = FdoExt(*((_QWORD *)v2 + 148));
        if ( *((_QWORD *)v5 + 546) )
          (*((void (__fastcall **)(_QWORD, __int64))v5 + 546))(*((_QWORD *)v5 + 529), v4);
        UsbhDerefPdoDeviceHandle(*((_QWORD *)v2 + 148), v4, DeviceObject, 1212443750LL);
      }
      UsbhPdoDeleteSymbolicLink((__int64)DeviceObject);
      LODWORD(v3) = v2[355];
      if ( (char)v3 < 0 )
      {
        LODWORD(v3) = IoWMIRegistrationControl(DeviceObject, 2u);
        v2[355] &= ~0x80u;
      }
    }
  }
  return (int)v3;
}
