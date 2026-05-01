/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___ @ 0x180016C34
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18001595C (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721_____lambda_2037807ba102184564a830884e8e7721___ @ 0x180307E20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___(
        _DWORD *a1,
        __int64 a2)
{
  __int64 *v5; // r14
  unsigned int v6; // esi
  void *v7; // rax
  __int64 v8; // rdi
  int v9; // esi
  int v10; // [rsp+20h] [rbp-48h]
  __int64 v11[3]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a2 + 8));
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v11[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v11[1] = (__int64)a1;
    v11[2] = *(_QWORD *)a2;
    v5 = (__int64 *)(a2 + 8);
    v12 = *(_QWORD *)(a2 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v13 = *(_BYTE *)(a2 + 16);
    v6 = a1[12];
    v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
      v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721_____lambda_2037807ba102184564a830884e8e7721___(
             v7,
             v11);
    else
      v8 = 0LL;
    v9 = SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    if ( v9 >= 0 )
      ++a1[52];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
    return (unsigned int)v9;
  }
}
