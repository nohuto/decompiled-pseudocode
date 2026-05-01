/*
 * XREFs of _AppUsageTracker::AppUsageTracker_::_1_::dtor$4 @ 0x1802B8BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppUsageTracker::AppUsageTracker_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 112) + 96LL));
}
