/*
 * XREFs of _AppUsageTracker::EnumerateExistingViews_::_1_::dtor$1 @ 0x1806215AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppUsageTracker::EnumerateExistingViews_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
