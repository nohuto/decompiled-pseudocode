/*
 * XREFs of ??1ActivityWrapper@MobilityExperience@@QEAA@XZ @ 0x1800672E0
 * Callers:
 *     __lambda_f0f613184e0e47442428064dff914436_::operator()_::_1_::dtor$4 @ 0x1800B98C2 (__lambda_f0f613184e0e47442428064dff914436_--operator()_--_1_--dtor$4.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity_::_1_::dtor$0 @ 0x1800B9B18 (_ToastNotification--ActivityToastNotificationCallback--GetUrisFromActivity_--_1_--dtor$0.c)
 *     _ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity_::_1_::dtor$0 @ 0x1800B9B69 (_ToastNotification--ActivityToastNotificationCallback--PublishCompletedActivity_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall MobilityExperience::ActivityWrapper::~ActivityWrapper(MobilityExperience::ActivityWrapper *this)
{
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 1);
}
