/*
 * XREFs of _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger_::_1_::dtor$1 @ 0x1800B7B1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
