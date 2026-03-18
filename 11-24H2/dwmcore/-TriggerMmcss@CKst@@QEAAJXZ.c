/*
 * XREFs of ?TriggerMmcss@CKst@@QEAAJXZ @ 0x18021A714
 * Callers:
 *     ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x18021A640 (-ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x18007BF7C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ?SignalMMCSSTask@DWM@KST@InputTraceLogging@@SAXXZ @ 0x18021A76C (-SignalMMCSSTask@DWM@KST@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall CKst::TriggerMmcss(HANDLE *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::KST::DWM::SignalMMCSSTask();
  if ( (((unsigned __int64)this[2] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ(this + 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)0x80004004LL);
    return 2147500036LL;
  }
}
