/*
 * XREFs of ?IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ @ 0x18006578C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall CCompositor::IsRemoteTreeEnabled(CCompositor *this)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64, GUID *, __int64); // r9
  __int64 v3; // r10
  int v4; // eax
  bool v6; // bl
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v10);
  v4 = v2(v3, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, v1);
  if ( v4 >= 0 )
  {
    v9 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 200LL))(v10, &v9);
    v6 = v9 != 0;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v4,
      v7);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v10);
    return 1;
  }
}
