/*
 * XREFs of _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$19 @ 0x1802BC810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopPositioner::CDesktopPositioner_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(*(_QWORD *)(a2 + 64) + 576LL);
}
