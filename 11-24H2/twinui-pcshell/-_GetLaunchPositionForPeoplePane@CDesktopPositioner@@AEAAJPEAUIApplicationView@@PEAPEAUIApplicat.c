/*
 * XREFs of ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180515554
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_506887c07e1b822a9b74fbb4e38c4dc3__&_::Run @ 0x180514370 (wil--details--functor_wrapper_void__lambda_506887c07e1b822a9b74fbb4e38c4dc3__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x18006D374 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180070730 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x180514E08 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetLaunchPositionForPeoplePane(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationViewPosition **a3)
{
  struct IImmersiveApplication **v7; // r8
  int ApplicationFromView; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, void **); // rbx
  void **v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  struct IApplicationViewPosition *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-39h] BYREF
  void *v23; // [rsp+38h] [rbp-31h] BYREF
  struct IApplicationViewPosition *v24; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-21h] BYREF
  __int64 v26; // [rsp+50h] [rbp-19h] BYREF
  struct tagSIZE v27; // [rsp+58h] [rbp-11h] BYREF
  RECT rc; // [rsp+60h] [rbp-9h] BYREF
  RECT v29; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v30; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 41) )
    return 2147943568LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v25, v7);
  v9 = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v22 = 0LL;
    v10 = v25;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v25 + 24LL);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v22);
    v13 = v11(v10, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v12);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x684,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      goto LABEL_26;
    }
    v26 = 0LL;
    v14 = 0;
    v23 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, &v26) < 0
      || (v14 = ~(_DWORD)v26,
          v15 = *((_QWORD *)this + 41),
          v16 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v15 + 96LL),
          v17 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v23),
          v18 = v16(v15, v14, v17),
          v9 = v18,
          v18 >= 0) )
    {
      v29 = 0LL;
      if ( v14 && v23 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, void *, RECT *))(**((_QWORD **)this + 41) + 112LL))(
                *((_QWORD *)this + 41),
                v23,
                &v29);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 1688LL;
          goto LABEL_11;
        }
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 41) + 120LL))(
                *((_QWORD *)this + 41),
                &v29);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 1684LL;
          goto LABEL_11;
        }
      }
      v27 = 0LL;
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagSIZE *))(**((_QWORD **)this + 41) + 104LL))(
              *((_QWORD *)this + 41),
              v14,
              &v27);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v30 = 0LL;
        rc = v29;
        v18 = CDesktopPositioner::_CalculateTaskbarFlyoutPosition(this, &rc, v27, &v30);
        v9 = v18;
        if ( v18 >= 0 )
        {
          v24 = 0LL;
          v20 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                  (__int64 *)&v24,
                  (__int64)&v30);
          v9 = v20;
          if ( v20 >= 0 )
          {
            v21 = v24;
            v24 = 0LL;
            *a3 = v21;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v23);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
            v9 = 0;
            goto LABEL_26;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6A2,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
          goto LABEL_12;
        }
        v19 = 1695LL;
      }
      else
      {
        v19 = 1692LL;
      }
    }
    else
    {
      v19 = 1676LL;
    }
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v18);
LABEL_12:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v23);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x681,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_26:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  return v9;
}
