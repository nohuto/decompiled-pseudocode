/*
 * XREFs of ?Thunk_UpdateId_0@?$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18007DC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IActivationControllerProxy_Receive<BamoImpl::BamoActivationControllerProxyImpl>::Thunk_UpdateId_0(
        BamoImpl::BamoActivationControllerProxyImpl *a1,
        unsigned __int64 **a2)
{
  unsigned __int64 *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoActivationControllerProxyImpl::UpdateId(a1, (__int64)a2, *v2);
}
