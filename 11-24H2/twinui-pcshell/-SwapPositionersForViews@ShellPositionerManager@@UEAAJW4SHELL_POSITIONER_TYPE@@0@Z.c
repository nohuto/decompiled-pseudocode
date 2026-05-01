/*
 * XREFs of ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1804EE110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18009D4C0 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18009E768 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804ECBA4 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::SwapPositionersForViews(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  const struct _GUID *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // r14
  void *v16; // rbx
  __int64 (__fastcall *v17)(void *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v18; // rax
  int v19; // eax
  int PositionerPriorityForView; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  __int64 *v29; // [rsp+40h] [rbp-20h] BYREF
  struct IShellPositionerPriority *v30; // [rsp+48h] [rbp-18h] BYREF
  struct IApplicationView *v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v34; // [rsp+A0h] [rbp+40h] BYREF
  void *v35; // [rsp+B8h] [rbp+58h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v32 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v8 = v7(v6, &v32);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v35 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    v12 = CEnumerableObjectCollection::CreateInstance(v11, v10, &v35);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 350LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
      goto LABEL_31;
    }
    v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v35 + 48LL))(v35, v32);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 351LL;
      goto LABEL_5;
    }
    v34 = 0;
    v12 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v35 + 24LL))(v35, &v34);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 354LL;
      goto LABEL_5;
    }
    if ( !v34 )
    {
LABEL_25:
      v29 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      v24 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 **))v35)(
              v35,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              &v29);
      v9 = v24;
      if ( v24 >= 0 )
      {
        v27 = ShellPositionerManager::PerformPositionerHandoff(a1 - 88, v29, 0LL, 0LL, 0LL, a2, a3);
        v9 = v27;
        if ( v27 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
          v9 = 0;
          goto LABEL_31;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C3,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v27);
        v25 = v9;
        v26 = 393LL;
      }
      else
      {
        v25 = (unsigned int)v24;
        v26 = 392LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      goto LABEL_6;
    }
    v14 = v34 - 1;
    v15 = v34;
    while ( 1 )
    {
      v31 = 0LL;
      v16 = v35;
      v17 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v35 + 32LL);
      v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v31);
      v19 = v17(v16, v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v18);
      if ( v19 >= 0 )
      {
        v30 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                      (ShellPositionerManager *)(a1 - 88),
                                      v31,
                                      &v30);
        v21 = PositionerPriorityForView;
        if ( PositionerPriorityForView >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v30 + 24LL))(v30) != a2 )
          {
            v22 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v35 + 56LL))(v35, v14);
            if ( v22 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x172,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                (const char *)(unsigned int)v22);
          }
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD, _QWORD))(*(_QWORD *)v30 + 56LL))(
            v30,
            a2,
            a3);
          ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)(a1 - 88), v31);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x16B,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)PositionerPriorityForView);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        if ( v21 >= 0 )
          goto LABEL_24;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x167,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v19);
      }
      v23 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v35 + 56LL))(v35, v14);
      if ( v23 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x182,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v23);
LABEL_24:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
      --v14;
      if ( !--v15 )
        goto LABEL_25;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_31:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  return v9;
}
