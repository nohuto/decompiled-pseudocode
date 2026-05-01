/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18008609C
 * Callers:
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18005F010 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180682728 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  char v4; // di
  __int64 v5; // rbx
  unsigned int v6; // ecx
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  HSTRING v10; // rax
  HSTRING v11; // r12
  int v12; // r14d
  __int64 v13; // r15
  __int64 (__fastcall *v14)(__int64, HSTRING, HSTRING, _QWORD, int, __int64 *, struct EventRegistrationToken *); // r13
  __int64 *v15; // rax
  __int64 *v16; // rdi
  int v17; // esi
  __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  __int64 v20[2]; // [rsp+48h] [rbp-31h] BYREF
  struct EventRegistrationToken *v21; // [rsp+58h] [rbp-21h]
  HSTRING v22; // [rsp+60h] [rbp-19h]
  __int64 *v23; // [rsp+68h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-9h] BYREF
  HSTRING string; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v21 = a3;
  v22 = a2;
  v4 = 0;
  LODWORD(v19) = 0;
  a3->value = 0LL;
  v5 = *((_QWORD *)this + 12);
  v19 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *((_DWORD *)this + 33);
  if ( (v6 & 2) != 0 )
  {
    string = 0LL;
    v7 = WindowsCreateStringReference(L"ShellExperience", 0xFu, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
      __debugbreak();
    }
    v4 = 1;
    v10 = string;
    v11 = string;
    v6 = *((_DWORD *)this + 33);
  }
  else
  {
    v11 = 0LL;
    v10 = string;
  }
  if ( (v4 & 1) != 0 )
    v10 = 0LL;
  string = v10;
  v12 = (v6 >> 3) & 1;
  if ( (v6 & 0x10) != 0 )
    goto LABEL_22;
  v13 = *((_QWORD *)this + 13);
  v14 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, int, __int64 *, struct EventRegistrationToken *))(*(_QWORD *)v13 + 48LL);
  v20[0] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v20[1] = (__int64)this;
  v15 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    *v15 = (__int64)&Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v15 + 3) = 1;
    *v15 = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v16[2] = 0LL;
    if ( v16 + 2 != v20 )
    {
      v16[2] = v5;
      v20[0] = 0LL;
    }
    v16[3] = (__int64)this;
    *v16 = (__int64)off_18071D328;
  }
  else
  {
    v16 = 0LL;
  }
  v23 = v16;
  v17 = v14(v13, v22, v11, *((_QWORD *)this + 2), v12, v16, v21);
  if ( v16 )
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v20);
  if ( v17 == -2147483629 || v17 >= 0 )
  {
LABEL_22:
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    return (unsigned int)v17;
  }
}
