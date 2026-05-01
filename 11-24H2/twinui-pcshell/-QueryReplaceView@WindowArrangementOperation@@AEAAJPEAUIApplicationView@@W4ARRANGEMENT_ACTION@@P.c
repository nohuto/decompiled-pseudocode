/*
 * XREFs of ?QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180526614
 * Callers:
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x18052638C (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804BE81C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C1258 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementOperation::QueryReplaceView(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        _DWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, bool, GUID *, __int64 *); // rbx
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rdi
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+40h] BYREF

  v19[0] = 0LL;
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(__int64 (__fastcall **)(__int64, bool, GUID *, __int64 *))(*(_QWORD *)v8 + 96LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
  ViewLayoutBehaviorFlags = v9(v8, a3 != 3, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v19);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v12 = 229LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    goto LABEL_12;
  }
  v22 = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v22);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v12 = 233LL;
    goto LABEL_5;
  }
  v21 = 0LL;
  v13 = v19[0];
  v14 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v19[0] + 48LL);
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v21);
  v16 = v14(v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v15);
  v11 = v16;
  if ( v16 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, _QWORD))(**(_QWORD **)(a1 + 64) + 248LL))(
            *(_QWORD *)(a1 + 64),
            v21,
            a2,
            v22);
    v11 = v16;
    if ( v16 >= 0 )
    {
      CAppLayoutOperation::_AddAnimationData(a1 + 24, v21, 1LL);
      *a4 |= 4u;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      v11 = 0;
      goto LABEL_12;
    }
    v17 = 237LL;
  }
  else
  {
    v17 = 236LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
    (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
  return v11;
}
