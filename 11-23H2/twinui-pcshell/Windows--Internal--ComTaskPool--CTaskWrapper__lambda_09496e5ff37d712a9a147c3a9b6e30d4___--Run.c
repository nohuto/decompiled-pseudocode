/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09496e5ff37d712a9a147c3a9b6e30d4___::Run @ 0x1801B65F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09496e5ff37d712a9a147c3a9b6e30d4___::Run(
        __int64 a1)
{
  AgileGitPtr *v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (AgileGitPtr *)(a1 + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  v2 = AgileGitPtr::CopyLocal(v1, &GUID_e44a983b_30a7_416c_b8a5_04d032bd352d, &v5);
  if ( v2 < 0 || (v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 24LL))(v5), v2 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v2);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
}
