/*
 * XREFs of ?Thunk_UpdateLuid_3@?$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18007F850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IActivationControllerProxy_Receive<BamoImpl::BamoActivationControllerProxyImpl>::Thunk_UpdateLuid_3(
        BamoImpl::BamoActivationControllerProxyImpl *a1,
        const struct _LUID *a2)
{
  const struct _LUID *v2; // r8

  v2 = (const struct _LUID *)*a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid(a1, a2, v2);
}
