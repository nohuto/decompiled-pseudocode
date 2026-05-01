/*
 * XREFs of _lambda_6134154151224943773d07617b636c50_::__lambda_6134154151224943773d07617b636c50_ @ 0x1804F8BC0
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_2461923bd7d30a187d21cb937ed01b39___ @ 0x1804F71AC (CreationThreadDispatcher--RunAsync__lambda_2461923bd7d30a187d21cb937ed01b39___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5997640efe376a9387473cba5853814f___ @ 0x1804F7234 (CreationThreadDispatcher--RunAsync__lambda_5997640efe376a9387473cba5853814f___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6134154151224943773d07617b636c50___::_CTaskWrapper__lambda_6134154151224943773d07617b636c50___ @ 0x1804F8BE8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6134154151224943773d07617b636c50___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_6134154151224943773d07617b636c50_::__lambda_6134154151224943773d07617b636c50_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
