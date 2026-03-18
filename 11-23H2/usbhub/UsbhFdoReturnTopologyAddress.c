/*
 * XREFs of UsbhFdoReturnTopologyAddress @ 0x1C00312B0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhBuildTopologyAddress @ 0x1C0048D58 (UsbhBuildTopologyAddress.c)
 */

__int64 __fastcall UsbhFdoReturnTopologyAddress(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // r15
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  int v8; // eax
  unsigned int v9; // ebx

  FdoExt(a1);
  v6 = PdoExt(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  v8 = UsbhBuildTopologyAddress(a1, SecurityContext, *((unsigned __int16 *)v6 + 714));
  a3->IoStatus.Status = v8;
  v9 = v8;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v9;
}
