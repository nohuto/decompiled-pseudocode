/*
 * XREFs of ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1805251E4
 * Callers:
 *     ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180524E00 (-AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804BE81C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180525794 (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EF34 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C1258 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppSwitchOperation::QueryAppToAppSwitch(
        __int64 a1,
        __int64 a2,
        int a3,
        struct IApplicationView *a4,
        __int64 a5,
        _DWORD *a6)
{
  int ViewLayoutBehaviorFlags; // edi
  __int64 v11; // rdx
  enum DEVICE_SCALE_FACTOR v13; // r8d
  unsigned int v14; // edi
  int SwitchToApp; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  int IsThreadRTL; // eax
  BOOL v20; // esi
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, BOOL, GUID *, ImmersiveApplicationLayout **); // rbx
  int v23; // eax
  ImmersiveApplicationLayout *v24; // rbx
  void (__fastcall *v25)(ImmersiveApplicationLayout *, GUID *, __int64 *); // rdi
  __int64 *v26; // rax
  int v27; // eax
  int v28; // [rsp+30h] [rbp-50h] BYREF
  ImmersiveApplicationLayout *v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  __int128 v31; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v32[2]; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a6 = 0;
  v28 = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a4, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v28);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v11 = 359LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  v31 = 0LL;
  *(_OWORD *)&v32[0].cx = 0LL;
  v33 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v31);
  LODWORD(v29) = DWORD2(v31) - v31;
  HIDWORD(v29) = HIDWORD(v31) - DWORD1(v31);
  v14 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v29, (struct tagSIZE)(unsigned int)v32[0].cx, v13);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 184LL))(*(_QWORD *)(a1 + 64), a2)
    || (v28 & 2) != 0 && v14 != 1 )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(a1, a4, 0LL);
    if ( SwitchToApp < 0 )
    {
      v16 = 438LL;
      goto LABEL_10;
    }
    return 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 4LL) )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(a1, a4, 0LL);
    if ( SwitchToApp < 0 )
    {
      v16 = 374LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)SwitchToApp);
      return (unsigned int)SwitchToApp;
    }
    return 0LL;
  }
  v17 = *(__int64 **)(a1 + 64);
  v18 = *v17;
  if ( a3 == 5 )
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IApplicationView *, __int64))(v18 + 248))(
                                v17,
                                a2,
                                a4,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 381LL;
      goto LABEL_3;
    }
    goto LABEL_23;
  }
  if ( !(*(unsigned int (**)(void))(v18 + 48))() )
  {
    v28 = 0;
    SwitchToApp = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 152LL))(
                    *(_QWORD *)(a1 + 64),
                    a2,
                    0LL,
                    &v28);
    if ( SwitchToApp < 0 )
    {
      v16 = 415LL;
      goto LABEL_10;
    }
    v20 = v28 == 0;
    v29 = 0LL;
    v21 = *(_QWORD *)(a1 + 64);
    v22 = *(__int64 (__fastcall **)(__int64, BOOL, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v21 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    v23 = v22(v21, v20, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v29);
    SwitchToApp = v23;
    if ( v23 >= 0 )
    {
      v30 = 0LL;
      v24 = v29;
      v25 = *(void (__fastcall **)(ImmersiveApplicationLayout *, GUID *, __int64 *))(*(_QWORD *)v29 + 48LL);
      v26 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v30);
      v25(v24, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v26);
      v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                           + 248LL))(
              *(_QWORD *)(a1 + 64),
              v30,
              a4,
              1LL);
      SwitchToApp = v27;
      if ( v27 >= 0 )
      {
        CAppLayoutOperation::_AddAnimationData(a1 + 24, v30, 5LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AB,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v27);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A5,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v23);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    return (unsigned int)SwitchToApp;
  }
  if ( v14 <= 1 )
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                a4,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 402LL;
      goto LABEL_3;
    }
LABEL_23:
    CAppLayoutOperation::_AddAnimationData(a1 + 24, a2, 5LL);
    return 0LL;
  }
  IsThreadRTL = Mirror_IsThreadRTL();
  SwitchToApp = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                  *(_QWORD *)(a1 + 64),
                  a4,
                  IsThreadRTL == 0,
                  1LL,
                  0LL);
  if ( SwitchToApp < 0 )
  {
    v16 = 396LL;
    goto LABEL_10;
  }
  *a6 |= 2u;
  return 0LL;
}
