/*
 * XREFs of ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1804E4D04
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E4FAC (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::_PrepareTaggingInfoForApp(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  struct IApplicationView *v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  void (__fastcall *v14)(__int64, ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  ApplicationViewHelpers *v19; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a2;
  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v2 + 32);
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v19);
  v7 = v5(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 433LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)v10);
    goto LABEL_11;
  }
  if ( !ApplicationViewHelpers::GetWindowForView(
          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
          v8) )
  {
    v9 = -2147467259;
    v11 = 436LL;
    v10 = 2147500037LL;
    goto LABEL_5;
  }
  v12 = *((_QWORD *)this + 26);
  v13 = 0LL;
  v18 = 0LL;
  if ( v12 )
  {
    v14 = *(void (__fastcall **)(__int64, ApplicationViewHelpers *, GUID *, __int64 *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    v14(v12, v19, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v18);
    v13 = v18;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutOperationItem *, __int64, _QWORD))(**((_QWORD **)this + 23)
                                                                                             + 24LL))(
          *((_QWORD *)this + 23),
          a2,
          v13,
          *((_QWORD *)this + 25));
  v9 = v15;
  if ( v15 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return v9;
}
