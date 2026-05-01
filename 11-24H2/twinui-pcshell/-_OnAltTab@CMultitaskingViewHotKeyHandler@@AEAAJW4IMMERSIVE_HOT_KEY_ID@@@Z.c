/*
 * XREFs of ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180180C28
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180180A70 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x180180F40 (-_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ.c)
 *     MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___ @ 0x1801811C0 (MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___.c)
 *     _lambda_7e7f8cd3e685741244f76c8bd4111764_::__lambda_7e7f8cd3e685741244f76c8bd4111764_ @ 0x18020B6B8 (_lambda_7e7f8cd3e685741244f76c8bd4111764_--__lambda_7e7f8cd3e685741244f76c8bd4111764_.c)
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x1804A20CC (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CMultitaskingViewHotKeyHandler::_OnAltTab(__int64 a1, int a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  HWND WindowW; // rax
  HWND v19; // r14
  HWND WindowLongPtrW; // rbx
  HWND ForegroundWindow; // rdi
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, HWND, __int64 *); // rbx
  int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  int v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v31; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+48h] BYREF

  if ( CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab((CMultitaskingViewHotKeyHandler *)a1) )
  {
    v31 = 0LL;
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    v5(v4, &v31);
    if ( !v31 )
    {
      WindowW = FindWindowW(L"Shell_CortanaProxy", 0LL);
      v19 = WindowW;
      if ( WindowW )
      {
        WindowLongPtrW = (HWND)GetWindowLongPtrW(WindowW, 0);
        ForegroundWindow = GetForegroundWindow();
        if ( ForegroundWindow == WindowLongPtrW || ForegroundWindow == GetLastActivePopup(WindowLongPtrW) )
        {
          v26 = 0LL;
          v22 = *(_QWORD *)(a1 + 56);
          v23 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v22 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          v24 = v23(v22, v19, &v26);
          if ( v24 >= 0 )
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v31, &v26);
          else
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xAB,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
              (const char *)(unsigned int)v24);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        }
      }
    }
    v32 = 0LL;
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    v8 = v7(v6, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v32);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v27 = a2;
      v28 = v32;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
      v29[0] = v31;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
      v25 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764 = MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_(
                                                                                &v25,
                                                                                &v27);
      v9 = MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764;
      if ( MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDB,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
          (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        lambda_7e7f8cd3e685741244f76c8bd4111764_::__lambda_7e7f8cd3e685741244f76c8bd4111764_(&v27);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(
                *(_QWORD *)(a1 + 48),
                v25,
                1LL);
        v9 = v14;
        if ( v14 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDE,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
            (const char *)(unsigned int)v14);
        v15 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v29);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
        v16 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
        (const char *)(unsigned int)v8);
      v10 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    return v9;
  }
  else
  {
    CMultitaskingViewHotKeyHandler::_UnregisterHotKeys((CMultitaskingViewHotKeyHandler *)a1);
    return 0LL;
  }
}
