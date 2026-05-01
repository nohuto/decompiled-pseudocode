/*
 * XREFs of ??$tip_make_shared_nothrow@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180657DB8
 * Callers:
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065D908 (-open_helper@-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B430 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180658048 (--0-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 */

_QWORD *__fastcall tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,_GUID * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  LPVOID v4; // rax
  wil::details::in1diag3 *v5; // rcx

  v4 = CoTaskMemAlloc(0x1A0uLL);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v5);
  *a1 = tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>(
          v4,
          *a2);
  return a1;
}
