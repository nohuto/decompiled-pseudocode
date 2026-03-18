/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x14004FAA0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  int v6; // [rsp+28h] [rbp-40h]

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 2, 1934650960, *((unsigned int *)v4 + 643), (__int64)a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_88c51487de8b36c95d93828ad72ed338_Traceguids);
  if ( *((_DWORD *)v4 + 643) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = *((_DWORD *)v4 + 643);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x11u,
        (__int64)&WPP_88c51487de8b36c95d93828ad72ed338_Traceguids,
        v6);
    }
    a2->IoStatus.Information |= *((unsigned int *)v4 + 643);
    a2->IoStatus.Status = 0;
    UsbhException(a1, 0LL, 87LL, &a2->IoStatus.Information, 8u, 0, 0, usbfile_pnp_c, 2265, 0);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
