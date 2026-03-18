/*
 * XREFs of Usbh_FDO_WaitPnpAdd @ 0x140050E50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x14002DDF4 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x140039A5C (GET_FDO_PNPSTATE.c)
 *     UsbhModuleDispatch @ 0x14005084C (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x140050CB4 (UsbhSetFdoPnpState.c)
 *     Usbh_PnpRemove @ 0x1400515C4 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpAdd(__int64 a1, __int64 a2)
{
  struct _DRIVER_OBJECT *v2; // r8
  __int64 v3; // rbx
  int v4; // edi
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(struct _DRIVER_OBJECT **)(a1 + 8);
  v6 = a1;
  v3 = a1;
  LOBYTE(a1) = 1;
  v4 = UsbhModuleDispatch(a1, a2, v2, 1, 0LL, v6);
  GET_FDO_PNPSTATE(v3);
  if ( v4 < 0 )
  {
    Usbh_PnpRemove(v3, 6LL);
  }
  else
  {
    UsbhSetFdoPnpState(*(_QWORD *)(v3 + 8), 2, 1);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(v3 + 8), v3);
  }
  return (unsigned int)v4;
}
