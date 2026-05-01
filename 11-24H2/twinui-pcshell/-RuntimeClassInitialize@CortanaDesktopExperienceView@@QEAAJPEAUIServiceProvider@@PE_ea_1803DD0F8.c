/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803DD0F8
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803DD030 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1803D49A0 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 (__fastcall *v10)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF
  __int64 v22; // [rsp+80h] [rbp+50h] BYREF
  void **v23; // [rsp+88h] [rbp+58h]

  v23 = a4;
  if ( *(_QWORD *)(a1 + 96) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (void **)(a1 + 104),
    v9);
  *(_DWORD *)(a1 + 212) = 1134559232;
  *(_DWORD *)(a1 + 216) = 1143209984;
  v22 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  v11 = v10(a2, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v22);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 359LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_23;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(
          v22,
          26LL,
          (a1 + 40) & -(__int64)(a1 != 0),
          a1 + 252);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 360LL;
    goto LABEL_10;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(
          v22,
          1025LL,
          (a1 + 40) & -(__int64)(a1 != 0),
          a1 + 256);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 361LL;
    goto LABEL_10;
  }
  v21 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  v15 = v14(a2, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, &v21);
  v12 = v15;
  if ( v15 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 32LL))(
            v21,
            (a1 + 64) & -(__int64)(a1 != 0),
            a1 + 268);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v20 = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v20);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x170,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v17);
      *(_BYTE *)(a1 + 246) = v20 != 0;
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 120), a2);
      v15 = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 104))(
              *(_QWORD *)(a1 + 104),
              (a1 + 72) & -(__int64)(a1 != 0),
              0LL);
      v12 = v15;
      if ( v15 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        v12 = 0;
        goto LABEL_23;
      }
      v16 = 375LL;
    }
    else
    {
      v16 = 366LL;
    }
  }
  else
  {
    v16 = 365LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
LABEL_23:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v12;
}
