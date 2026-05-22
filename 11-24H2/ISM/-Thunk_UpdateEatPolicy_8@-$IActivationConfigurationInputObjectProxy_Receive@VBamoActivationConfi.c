/*
 * XREFs of ?Thunk_UpdateEatPolicy_8@?$IActivationConfigurationInputObjectProxy_Receive@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800800C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IActivationConfigurationInputObjectProxy_Receive<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::Thunk_UpdateEatPolicy_8(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *a1,
        _QWORD *a2)
{
  unsigned int *v2; // rax

  v2 = (unsigned int *)*a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy(a1, (__int64)a2, *v2);
}
