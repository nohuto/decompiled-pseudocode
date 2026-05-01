/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_075997a7f385a8707cee22785a55a100___::Run @ 0x1802E1280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5F2C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_075997a7f385a8707cee22785a55a100___::Run(
        __int64 a1)
{
  AgileGitPtr *v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (AgileGitPtr *)(a1 + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  v2 = AgileGitPtr::CopyLocal(v1, &GUID_e44a983b_30a7_416c_b8a5_04d032bd352d, &v5);
  if ( v2 < 0 || (v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 24LL))(v5), v2 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
}
