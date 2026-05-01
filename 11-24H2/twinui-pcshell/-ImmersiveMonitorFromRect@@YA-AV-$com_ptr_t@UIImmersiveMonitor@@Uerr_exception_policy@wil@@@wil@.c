/*
 * XREFs of ?ImmersiveMonitorFromRect@@YA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitorManager@@UtagRECT@@@Z @ 0x1802B03EC
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011CD10 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ImmersiveMonitorFromRect(__int64 *a1, __int64 a2, const RECT *a3)
{
  HMONITOR v5; // rbx
  __int64 (__fastcall *v6)(__int64, HMONITOR, __int64 *); // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  v5 = MonitorFromRect(a3, 1u);
  v6 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)a2 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(a1);
  v7 = v6(a2, v5, a1);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v7,
      1);
  return a1;
}
