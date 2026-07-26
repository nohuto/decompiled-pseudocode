/*
 * XREFs of WdmlibIoValidateDeviceIoControlAccess @ 0x1400EBBA8
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall WdmlibIoValidateDeviceIoControlAccess(PIRP Irp, ULONG RequiredAccess)
{
  NTSTATUS result; // eax

  result = (int)PfnIoValidateDeviceIoControlAccess;
  if ( PfnIoValidateDeviceIoControlAccess )
    return PfnIoValidateDeviceIoControlAccess(Irp, 2LL);
  return result;
}
