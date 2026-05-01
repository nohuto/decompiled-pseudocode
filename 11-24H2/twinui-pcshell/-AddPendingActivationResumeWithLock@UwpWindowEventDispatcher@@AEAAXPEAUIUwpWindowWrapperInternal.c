/*
 * XREFs of ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009B0F4
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180021B40 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?AddPendingActivationResume@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18022685C (-AddPendingActivationResume@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindo.c)
 * Callees:
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18001E50C (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009B620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatc.c)
 *     ??0?$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEventDispatcher@@@Z @ 0x18009B6B4 (--0-$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEve.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18009B70C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEvent.c)
 *     ??$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@00@Z @ 0x18009B864 (--$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAU.c)
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18009B8B4 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 *     ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x18014A45C (--$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@-$vector@UPending.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180193958 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall UwpWindowEventDispatcher::AddPendingActivationResumeWithLock(__int64 a1, __int64 *a2, unsigned int a3)
{
  char v6; // r14
  __int64 v7; // rax
  char v8; // bl
  struct IUnknown **v9; // r14
  struct IUnknown **i; // rbx
  struct IUnknown **j; // rdi
  __int64 v12; // rbx
  signed __int32 v13; // r14d
  struct IUnknown *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  struct IUnknown *v18; // rbx
  unsigned int v19; // r15d
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  int (__fastcall *v23)(__int64, __int64 *); // r12
  __int64 v24; // rcx
  _QWORD *Uwlm; // rax
  __int64 v26; // rbx
  int (__fastcall *v27)(__int64, _QWORD, struct IUnknown **); // r12
  struct IUnknown *v28; // rcx
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-38h] BYREF
  struct IUnknown *v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 *v34; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+70h] [rbp-10h]
  signed __int32 v36; // [rsp+78h] [rbp-8h]
  int v37; // [rsp+7Ch] [rbp-4h]
  struct IUnknown *v38; // [rsp+C8h] [rbp+48h] BYREF

  v6 = 0;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v38 = 0LL;
  if ( !a3 )
    goto LABEL_4;
  v7 = *a2;
  v31 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v7 + 248))(a2, &v31) < 0 )
    goto LABEL_4;
  if ( !v31 )
    goto LABEL_4;
  v23 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL);
  v29 = 0LL;
  if ( v23(v31, &v29) < 0 )
    goto LABEL_4;
  v24 = v30;
  v30 = 0LL;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v29)(v29, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, &v30) < 0 )
    goto LABEL_4;
  Uwlm = UwpWindowEventDispatcher::GetUwlm(a1, v32);
  v6 = 1;
  v26 = *Uwlm;
  v27 = *(int (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)*Uwlm + 112LL);
  v28 = v38;
  v38 = 0LL;
  if ( v28 )
    ((void (__fastcall *)(struct IUnknown *))v28->lpVtbl->Release)(v28);
  if ( v27(v26, a3, &v38) >= 0
    && v38
    && ((int (__fastcall *)(struct IUnknown *, __int64))v38->lpVtbl[5].AddRef)(v38, 2LL) >= 0 )
  {
    v8 = 1;
  }
  else
  {
LABEL_4:
    v8 = 0;
  }
  if ( (v6 & 1) != 0 && v32[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 16LL))(v32[0]);
  if ( v8 )
  {
    v9 = *(struct IUnknown ***)(a1 + 528);
    for ( i = *(struct IUnknown ***)(a1 + 520); i != v9 && !(unsigned int)SHIsSameObject(v38, *i); i += 4 )
      ;
    if ( i != v9 )
    {
      for ( j = i + 4; j != v9; j += 4 )
      {
        if ( !(unsigned int)SHIsSameObject(v38, *j) )
        {
          UwpWindowEventDispatcher::PendingActivationResumeData::operator=(i, j);
          i += 4;
        }
      }
      if ( i != v9 )
      {
        v12 = std::_Move_unchecked<UwpWindowEventDispatcher::PendingActivationResumeData *,UwpWindowEventDispatcher::PendingActivationResumeData *>(
                v9,
                *(_QWORD *)(a1 + 528),
                i);
        std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(
          v12,
          *(_QWORD *)(a1 + 528));
        *(_QWORD *)(a1 + 528) = v12;
      }
    }
    v32[2] = a1;
    if ( a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::InternalAddRef(a1);
    v13 = _InterlockedExchangeAdd(&UwpWindowEventDispatcher::s_nextResumeToken, 1u);
    v14 = v38;
    v38 = 0LL;
    v33 = v14;
    v34 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
    v15 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 296))(a2);
    v35 = v15;
    v36 = v13;
    v16 = 0LL;
    v37 = 0;
    v17 = *(_QWORD *)(a1 + 528);
    if ( v17 == *(_QWORD *)(a1 + 536) )
    {
      std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        a1 + 520,
        v17,
        &v33);
      v16 = v34;
      v18 = v33;
    }
    else
    {
      v18 = 0LL;
      *(_QWORD *)v17 = v14;
      *(_QWORD *)(v17 + 8) = a2;
      *(_QWORD *)(v17 + 16) = v15;
      *(_DWORD *)(v17 + 24) = v13;
      *(_QWORD *)(a1 + 528) += 32LL;
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
    if ( v18 )
      ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
    wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>(
      v32,
      a1);
    v19 = *(_DWORD *)(a1 + 516);
    v20 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v20;
    if ( v20 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v20);
      v22 = 0LL;
      v21[2] = v32[0];
      *((_DWORD *)v21 + 6) = v13;
      *v21 = &off_180711150;
    }
    else
    {
      v21 = 0LL;
      v22 = v32[0];
    }
    SHTaskPoolQueueTask(0LL, 0LL, v19);
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::Release(v22);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::Release(a1);
  }
  if ( v38 )
    ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
}
