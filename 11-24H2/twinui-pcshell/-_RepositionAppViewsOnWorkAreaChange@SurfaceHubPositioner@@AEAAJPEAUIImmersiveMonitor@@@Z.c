/*
 * XREFs of ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EFF58
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180233090 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DEB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18006E190 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802CF1A0 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUCRect@Geometry@@@Z @ 0x1803233B0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUCRect@Geome.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange(
        SurfaceHubPositioner *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  ApplicationViewOperation *v7; // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int i; // r15d
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 *v17; // rax
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  ApplicationViewOperation *v25; // [rsp+58h] [rbp-28h] BYREF
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v26 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v26);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v25);
    v7 = v25;
    if ( !v25 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x20E,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v6);
    v24 = 0LL;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,Geometry::CRect &>(
           &v24,
           &v26);
    if ( v7 && v8 >= 0 )
    {
      v9 = v24;
      if ( *((_QWORD *)v7 + 8) != v24 )
      {
        v20 = v24;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        v20 = *((_QWORD *)v7 + 8);
        *((_QWORD *)v7 + 8) = v9;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      }
      v22 = 0LL;
      v10 = *((_QWORD *)this + 23);
      v11 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v10 + 64LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      v12 = v11(v10, 3LL, a2, &v22);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 541LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
LABEL_23:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v25);
        return v5;
      }
      v21 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v21);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 543LL;
        goto LABEL_13;
      }
      for ( i = 0; i < v21; ++i )
      {
        v20 = 0LL;
        v15 = v22;
        v16 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v22 + 32LL);
        v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v20);
        if ( v16(v15, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v17) >= 0 )
        {
          v23 = 0;
          if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 216LL))(v20, &v23) >= 0 )
          {
            if ( v23 )
            {
              v18 = (*(__int64 (__fastcall **)(__int64, ApplicationViewOperation *))(*(_QWORD *)v20 + 320LL))(v20, v7);
              if ( v18 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x22B,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
                  (const char *)(unsigned int)v18);
            }
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    }
    v5 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20C,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
