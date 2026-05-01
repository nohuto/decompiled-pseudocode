/*
 * XREFs of ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C2520
 * Callers:
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180526E30 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C2668 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_EvictItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, __int64 *); // rdi
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v18 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v3 + 96LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v8 = v7(v3, a2, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 283LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_13;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18) == 1 )
  {
    v11 = v18;
    v19 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18 + 48LL);
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v19);
    v14 = v12(v11, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v13);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v14 = CAppLayoutOperation::_EvictView(a1, v19, a3);
      v9 = v14;
      if ( v14 >= 0 )
        goto LABEL_7;
      v15 = 288LL;
    }
    else
    {
      v15 = 287LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v14);
LABEL_7:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    goto LABEL_13;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 256LL))(*(_QWORD *)(a1 + 40), a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 293LL;
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  return v9;
}
