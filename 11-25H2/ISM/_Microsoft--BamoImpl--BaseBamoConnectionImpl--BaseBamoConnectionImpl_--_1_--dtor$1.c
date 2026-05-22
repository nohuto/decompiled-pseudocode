/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$1 @ 0x1801CC454
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 56LL));
}
