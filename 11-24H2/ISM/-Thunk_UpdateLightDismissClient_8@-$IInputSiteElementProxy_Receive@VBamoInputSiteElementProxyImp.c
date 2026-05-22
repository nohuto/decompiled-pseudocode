/*
 * XREFs of ?Thunk_UpdateLightDismissClient_8@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800719B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateLightDismissClient_8(
        BamoImpl::BamoInputSiteElementProxyImpl *a1,
        _QWORD *a2)
{
  unsigned int *v2; // rax

  v2 = (unsigned int *)*a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoInputSiteElementProxyImpl::UpdateLightDismissClient(a1, (__int64)a2, *v2);
}
