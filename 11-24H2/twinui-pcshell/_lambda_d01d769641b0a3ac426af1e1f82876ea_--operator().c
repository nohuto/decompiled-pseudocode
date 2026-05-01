/*
 * XREFs of _lambda_d01d769641b0a3ac426af1e1f82876ea_::operator() @ 0x18005F5D0
 * Callers:
 *     SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::OnIdleStateChanged @ 0x1802302D0 (SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___--OnIdleStateChanged.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x18005F694 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d01d769641b0a3ac426af1e1f82876ea_::operator()(_QWORD *a1, int a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  v4 = 0LL;
  v10 = 0LL;
  if ( *a1 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
      *a1,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      &v10);
    v4 = v10;
  }
  if ( v4 )
  {
    v5 = CSingleViewShellExperience::OnSessionIdleStateChanged(*(CSingleViewShellExperience **)(a1[1] + 8LL), a2);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v5);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    return 0LL;
  }
}
