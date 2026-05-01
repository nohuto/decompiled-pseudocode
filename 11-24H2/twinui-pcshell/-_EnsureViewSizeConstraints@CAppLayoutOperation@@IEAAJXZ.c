/*
 * XREFs of ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x1806C1DCC
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C26BC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180527BD0 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C26BC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C2CFC (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_EnsureViewSizeConstraints(CAppLayoutOperation *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *), _QWORD); // rdi
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  int (__fastcall *v14)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *); // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *); // rdi
  int ViewFullScreen; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r14d
  enum DEVICE_SCALE_FACTOR v21; // r8d
  int v22; // esi
  int v23; // r13d
  int v24; // r12d
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, GUID *, __int64 *); // rdi
  __int64 *v28; // rax
  int v29; // eax
  __int64 v30; // [rsp+48h] [rbp-59h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-51h] BYREF
  __int64 v32; // [rsp+58h] [rbp-49h] BYREF
  __int64 v33; // [rsp+60h] [rbp-41h] BYREF
  ImmersiveApplicationLayout *v34[2]; // [rsp+68h] [rbp-39h] BYREF
  __int128 v35; // [rsp+78h] [rbp-29h] BYREF
  __int128 v36; // [rsp+88h] [rbp-19h] BYREF
  __int128 v37; // [rsp+98h] [rbp-9h] BYREF
  struct tagSIZE v38[2]; // [rsp+A8h] [rbp+7h]
  __int64 v39; // [rsp+B8h] [rbp+17h]
  __int128 v40; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5))
    && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5)) )
  {
    v2 = (__int64 *)((char *)this + 64);
    v3 = 0LL;
    v33 = 0LL;
    if ( *((_QWORD *)this + 8) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v33, v2);
      v3 = v33;
    }
    else
    {
      v8 = *((_QWORD *)this + 5);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL);
      v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(v2);
      v11 = v9(v8, 0LL, 1LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x185,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_21;
      }
    }
    v4 = *((_QWORD *)this + 5);
    v31 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *), _QWORD))(*(_QWORD *)v4 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v6 = v5(v4, v3, &v31, 0LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v6);
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
LABEL_21:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
      return v7;
    }
    v32 = 0LL;
    v12 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v31, &v32);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18C,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v12);
LABEL_12:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      goto LABEL_7;
    }
    v13 = *((_QWORD *)this + 5);
    v30 = 0LL;
    v14 = *(int (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 120LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    if ( v14(v13, v31, 1LL, 5LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v30) < 0 )
    {
      v15 = *((_QWORD *)this + 5);
      v16 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 120LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      ViewFullScreen = v16(v15, v31, 0xFFFFFFFFLL, 5LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v30);
      v7 = ViewFullScreen;
      if ( ViewFullScreen < 0 )
      {
        v18 = 402LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)ViewFullScreen);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        goto LABEL_12;
      }
    }
    v19 = *((_QWORD *)this + 5);
    v39 = 0LL;
    v37 = 0LL;
    *(_OWORD *)&v38[0].cx = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 24LL))(v19, &v37);
    v20 = DWORD2(v37) - v37;
    HIDWORD(v34[0]) = HIDWORD(v37) - DWORD1(v37);
    LODWORD(v34[0]) = DWORD2(v37) - v37;
    v22 = ImmersiveApplicationLayout::ComputeGutterWidth(v34[0], (struct tagSIZE)(unsigned int)v38[0].cx, v21);
    v23 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v32 + 80LL))(
            v32,
            &v37,
            (unsigned int)(v20 - v22));
    v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v30 + 80LL))(
            v30,
            &v37,
            (unsigned int)(v20 - v22));
    if ( v22 + v24 + v23 > v20 )
    {
      ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(this, v3, 5LL);
      v7 = ViewFullScreen;
      if ( ViewFullScreen < 0 )
      {
        v18 = 458LL;
        goto LABEL_16;
      }
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      v7 = 0;
      goto LABEL_21;
    }
    v36 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v32 + 56LL))(v32, 0LL, &v36);
    v35 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v30 + 56LL))(v30, 0LL, &v35);
    if ( DWORD2(v36) - (int)v36 < v23 )
    {
      DWORD2(v36) = v36 + v23;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v32 + 104LL))(v32, 0LL, &v36);
      *(_OWORD *)v34 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)v30 + 104LL))(v30, 0LL, v34);
      CAppLayoutOperation::_FinalizeLayout(this, 1LL);
      goto LABEL_20;
    }
    if ( DWORD2(v35) - (int)v35 >= v24 )
      goto LABEL_20;
    v34[0] = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 24LL))(v30) == 1 )
    {
      v26 = v30;
      v27 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v30 + 48LL);
      v28 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v34);
      v29 = v27(v26, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v28);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B9,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v29);
LABEL_28:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v34);
        goto LABEL_20;
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD, ImmersiveApplicationLayout *))(**((_QWORD **)this + 4) + 184LL))(
             *((_QWORD *)this + 4),
             v34[0]) )
      {
        goto LABEL_28;
      }
    }
    DWORD2(v35) = v24 + v35;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v30 + 104LL))(v30, 0LL, &v35);
    v40 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v32 + 104LL))(v32, 0LL, &v40);
    CAppLayoutOperation::_FinalizeLayout(this, 1LL);
    goto LABEL_28;
  }
  return 0LL;
}
