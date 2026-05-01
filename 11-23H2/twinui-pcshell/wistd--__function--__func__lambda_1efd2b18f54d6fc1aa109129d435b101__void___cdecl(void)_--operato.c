/*
 * XREFs of wistd::__function::__func__lambda_1efd2b18f54d6fc1aa109129d435b101__void___cdecl(void)_::operator() @ 0x1803D0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141B80.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x1802D1FB6 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___ @ 0x1803D0AF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___.c)
 */

void __fastcall wistd::__function::__func__lambda_1efd2b18f54d6fc1aa109129d435b101__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rcx
  volatile int *v5; // rdx
  int v6; // edi
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  volatile int *v8; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile int *v10; // [rsp+40h] [rbp+8h] BYREF

  wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
    &v10,
    *(volatile int **)(a1 + 8));
  *(_QWORD *)v7 = *(_QWORD *)(v1 + 8);
  wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
    &v8,
    v10);
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___(
         v4,
         v3,
         *(_DWORD *)(*(_QWORD *)(v2 + 8) + 204LL),
         v7);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
      (__int64)v8,
      v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15A,
      (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v6);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
      (__int64)v10,
      v5);
}
