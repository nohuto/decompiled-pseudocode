/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180016290
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180015D94 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180014F98 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800152C8 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IImmersiveApplicationInternal *a5)
{
  CApplicationManager *v9; // rcx
  int v10; // ebx
  void (__fastcall *v11)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int v12; // eax
  void (__fastcall *v13)(char *, GUID *, __int64); // rbx
  __int64 v14; // rax
  IUnknown *v15; // rcx
  __int64 v16; // rax
  struct IImmersiveApplicationInternal *v17; // rdi
  void (__fastcall *v18)(struct IImmersiveApplicationInternal *, GUID *, IUnknown **); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v20)(PVOID, IUnknown *, __int64 *); // rbx
  __int64 v21; // rcx
  void *v22; // rcx
  __int64 v23; // rcx
  struct IApplicationView *v24; // rcx
  int v26; // [rsp+20h] [rbp-30h]
  void *ppvOut; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  struct IApplicationView *v29; // [rsp+40h] [rbp-10h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v32; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(v32) = 0;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  v10 = CApplicationManager::_HandleCreation_EnsureApplicationView(v9, a2, 0LL, &v29);
  if ( v10 < 0 )
    goto LABEL_20;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v28 = 0LL;
  v11 = (*a2)[63];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  if ( ((int (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *), __int64 *))v11)(
         a2,
         &v28) >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 224LL))(v28);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDCE,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v12,
        v26);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  LODWORD(v32) = 2;
  v13 = *(void (__fastcall **)(char *, GUID *, __int64))(*((_QWORD *)this - 24) + 32LL);
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&punk);
  v13((char *)this - 192, &GUID_00000000_0000_0000_c000_000000000046, v14);
  v10 = IUnknown_QueryService(
          punk,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
          &ppvOut);
  v15 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
  }
  if ( v10 >= 0 )
  {
    v16 = 0LL;
    v32 = 0LL;
    v17 = a5;
    if ( a5 )
    {
      punk = 0LL;
      v18 = **(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, IUnknown **))a5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      v18(v17, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &punk);
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v20 = *(__int64 (__fastcall **)(PVOID, IUnknown *, __int64 *))(*(_QWORD *)Ptr + 56LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
      v10 = v20(Ptr, punk, &v32);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      if ( v10 < 0 )
      {
LABEL_12:
        v21 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        if ( v10 >= 0 )
          v10 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
                  (CApplicationManager *)((char *)this - 240),
                  (struct IImmersiveApplicationInternal *)a2);
        goto LABEL_16;
      }
      v16 = v32;
    }
    v10 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *, struct IPresentationRequestedArgs *, __int64))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v29,
            a3,
            a4,
            v16);
    goto LABEL_12;
  }
LABEL_16:
  v22 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_20:
  v24 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return (unsigned int)v10;
}
