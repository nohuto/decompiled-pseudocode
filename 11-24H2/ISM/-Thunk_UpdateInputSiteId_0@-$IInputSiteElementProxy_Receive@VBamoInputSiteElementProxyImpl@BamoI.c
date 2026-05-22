/*
 * XREFs of ?Thunk_UpdateInputSiteId_0@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180074210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateInputSiteId_0(
        BamoImpl::BamoInputSiteElementProxyImpl *a1,
        unsigned __int64 **a2)
{
  unsigned __int64 *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoInputSiteElementProxyImpl::UpdateInputSiteId(a1, (__int64)a2, *v2);
}
