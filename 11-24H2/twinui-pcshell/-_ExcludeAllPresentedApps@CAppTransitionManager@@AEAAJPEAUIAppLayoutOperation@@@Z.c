/*
 * XREFs of ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E481C
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E3890 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::_ExcludeAllPresentedApps(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int i; // esi
  __int64 v8; // rax
  int (__fastcall *v9)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  struct IApplicationView *v13; // rdx
  __int64 WindowForView; // rax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  CAppTransitionManager *v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  ApplicationViewHelpers *v19; // [rsp+70h] [rbp+40h] BYREF

  v17 = this;
  v2 = *(_QWORD *)a2;
  LODWORD(v17) = 0;
  v4 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, CAppTransitionManager **))(v2 + 24))(a2, &v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    for ( i = 0; i < (unsigned int)v17; ++i )
    {
      v8 = *(_QWORD *)a2;
      v18 = 0LL;
      v9 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(v8 + 32);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
      if ( v9(a2, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v18) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 88LL))(v18) )
      {
        v10 = v18;
        v19 = 0LL;
        v11 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18 + 32LL);
        v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v19);
        if ( v11(v10, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v12) >= 0 )
        {
          WindowForView = ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                            v13);
          if ( WindowForView )
          {
            v15 = DwmpTransitionWindow(WindowForView, 43LL);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1A4,
                (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                (const char *)(unsigned int)v15);
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x193,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
