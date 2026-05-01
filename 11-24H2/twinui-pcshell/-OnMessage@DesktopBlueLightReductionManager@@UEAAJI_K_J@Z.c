/*
 * XREFs of ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x1801CC140
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099770 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellC.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x1801CC1E8 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0bfcc78e271c9d57dd0543599a36cd9a___ @ 0x180293EF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_0bfcc78e271c9d57dd0543599a36cd9a___.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::OnMessage(
        DesktopBlueLightReductionManager *this,
        volatile int *a2)
{
  char *v3; // rbx
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  volatile int *v7; // rdx
  int v8; // edi
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (_DWORD)a2 == 30 )
  {
    v3 = (char *)this - 104;
    if ( this != (DesktopBlueLightReductionManager *)104 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 164), a2);
    *(_QWORD *)v9 = v3;
    wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
      &v10,
      v3);
    v8 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *))Windows::Internal::ComTaskPool::QueueTask__lambda_0bfcc78e271c9d57dd0543599a36cd9a___)(
           v6,
           v5,
           *(unsigned int *)(v4 + 100),
           v9);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
        v10,
        v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v8);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
        (__int64)v3,
        v7);
  }
  return 0LL;
}
