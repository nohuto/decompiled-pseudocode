/*
 * XREFs of _TaskViewHost::TaskViewHost_::_1_::dtor$9 @ 0x1802C2E8B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewHost::TaskViewHost_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 216LL));
}
