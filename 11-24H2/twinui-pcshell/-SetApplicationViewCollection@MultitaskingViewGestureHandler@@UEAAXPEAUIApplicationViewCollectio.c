/*
 * XREFs of ?SetApplicationViewCollection@MultitaskingViewGestureHandler@@UEAAXPEAUIApplicationViewCollection@@@Z @ 0x1802317D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetApplicationViewCollection(
        MultitaskingViewGestureHandler *this,
        struct IApplicationViewCollection *a2)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 7,
    (__int64)a2);
}
