/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_____lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___ @ 0x1803AE52C
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_____lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___ @ 0x1803AEF18 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ba07cbb8b2fdb.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18018AC40 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18018AC40.c)
 *     ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D47B4 (--0-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_____lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  std::vector<tagRECT>::vector<tagRECT>((_QWORD *)(a1 + 40), a2 + 24);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 64));
  *(_QWORD *)(a1 + 64) = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  *(_QWORD *)a1 = &off_180735DC8;
  return a1;
}
