/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$6 @ 0x1801D3777
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)(*(_QWORD *)(a2 + 48) + 104LL),
    a2,
    a3,
    a4);
}
