/*
 * XREFs of ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x1800D56A4
 * Callers:
 *     ??1?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800D51BC (--1-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180107B2C (--1-$test_watcher@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800D9490 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder(
        wil::details::ThreadFailureCallbackHolder *this)
{
  if ( *((_DWORD *)this + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(this);
}
