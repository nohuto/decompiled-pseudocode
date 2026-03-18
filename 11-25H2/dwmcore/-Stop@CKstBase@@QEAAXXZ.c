/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x1802C0E84
 * Callers:
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x1802BFFC4 (--1CGlobalInputManager@@UEAA@XZ.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x1802C0D80 (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x1800ADF5C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SignalReset@DWM@KST@InputTraceLogging@@SAXXZ @ 0x1802C0E4C (-SignalReset@DWM@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall CKstBase::Stop(HANDLE *this)
{
  InputTraceLogging::KST::DWM::SignalReset();
  if ( (char *)this[2] - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ(this + 4);
    WaitForSingleObject(this[2], 0xFFFFFFFF);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 2,
      0LL);
  }
}
