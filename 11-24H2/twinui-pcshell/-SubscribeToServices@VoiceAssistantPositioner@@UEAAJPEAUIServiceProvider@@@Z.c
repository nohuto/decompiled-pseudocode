/*
 * XREFs of ?SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C76B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7688 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@Z @ 0x180509D74 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_180509D74.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::SubscribeToServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  __int64 v12; // rcx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v24; // [rsp+50h] [rbp+20h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 144);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, _QWORD *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC3,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  v8 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo(v5);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 197LL;
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v24 + 24LL))(
         v24,
         ((unsigned __int64)this + 88) & -(__int64)(this != (VoiceAssistantPositioner *)40),
         (char *)this + 152);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 199LL;
    goto LABEL_7;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
         a2,
         &SID_InputHostLayout,
         &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
         (char *)this + 160);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 201LL;
    goto LABEL_7;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 20) + 24LL))(
          *((_QWORD *)this + 20),
          ((unsigned __int64)this + 96) & -(__int64)(this != (VoiceAssistantPositioner *)40),
          (char *)this + 168);
  v7 = v11;
  if ( v11 >= 0 )
  {
    v13 = a2->lpVtbl->QueryService;
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 22);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v13)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           v14);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 206LL;
      goto LABEL_7;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 22) + 96LL))(
            *((_QWORD *)this + 22),
            ((unsigned __int64)this + 112) & -(__int64)(this != (VoiceAssistantPositioner *)40),
            (char *)this + 184);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v17 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 24);
      v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
              a2,
              &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
              &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
              (char *)this + 192);
      v7 = v18;
      if ( v18 >= 0 )
      {
        v8 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),VoiceAssistantPositioner *>(
               (int)this + 200,
               *((_QWORD *)this + 24),
               v19,
               v20,
               (__int64)this - 40);
        v7 = v8;
        if ( v8 >= 0 )
        {
          v7 = 0;
          goto LABEL_27;
        }
        v9 = 214LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
          (const char *)(unsigned int)v8);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        return v7;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v18);
      v21 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v15);
      v16 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v11);
    v12 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return v7;
}
