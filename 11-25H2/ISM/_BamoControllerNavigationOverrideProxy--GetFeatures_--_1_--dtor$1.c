/*
 * XREFs of _BamoControllerNavigationOverrideProxy::GetFeatures_::_1_::dtor$1 @ 0x1801C9646
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoControllerNavigationOverrideProxy::GetFeatures_::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)(a2 + 48),
    a2,
    a3,
    a4);
}
