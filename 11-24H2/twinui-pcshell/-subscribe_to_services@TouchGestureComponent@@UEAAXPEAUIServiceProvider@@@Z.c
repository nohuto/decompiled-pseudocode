/*
 * XREFs of ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x18058B890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIInputHostLayout@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x1800D062C (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIIn.c)
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800D06A4 (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F4798 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$Register@UIGlobalRudeWindowNotificationService@@P81@EAAJPEAUIGlobalRudeWindowNotifications@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@SmartCookie@@QEAAJPEAUIGlobalRudeWindowNotificationService@@P81@EAAJPEAUIGlobalRudeWindowNotifications@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@Z @ 0x18058A8B4 (--$Register@UIGlobalRudeWindowNotificationService@@P81@EAAJPEAUIGlobalRudeWindowNotifications@@P.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@Z @ 0x18058A988 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVTouchGe.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIImmersiveMonitorManager@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x18058AA68 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIIm.c)
 */

void __fastcall TouchGestureComponent::subscribe_to_services(
        TouchGestureComponent *this,
        IUnknown *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  HRESULT Service; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  IUnknown *punk; // [rsp+68h] [rbp+10h] BYREF

  punk = a2;
  v4 = *((_QWORD *)this + 12);
  if ( *(IUnknown **)(v4 + 24) != a2 )
  {
    if ( *(_QWORD *)(v4 + 24) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v4 + 24));
    *(_QWORD *)(v4 + 24) = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v4 + 24));
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  TouchEdgeGestureManager::Initialize(*((TouchEdgeGestureManager **)this + 13), (struct IServiceProvider *)a2);
  winrt::com_ptr<IImmersiveMonitorManager>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
    (__int64 *)this + 14,
    (__int64 (__fastcall *)(_QWORD, SID *, void *, __int64 *))IUnknown_QueryService,
    &punk);
  winrt::com_ptr<IInputHostLayout>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
    (__int64 *)this + 15,
    (__int64 (__fastcall *)(_QWORD, SID *, void *, __int64 *))IUnknown_QueryService,
    &punk);
  v8 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),TouchGestureComponent *>(
         (__int64)this + 128,
         *((_QWORD *)this + 15),
         v7);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2F,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
      (const char *)(unsigned int)v8,
      (_DWORD)this - 16);
  v13 = 0;
  v9 = *((_QWORD *)this + 32) == 0LL;
  v14 = 0LL;
  if ( !v9 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)this + 32);
  Service = IUnknown_QueryService(
              punk,
              &winrt::impl::guid_v<IGlobalRudeWindowNotificationService>,
              &winrt::impl::guid_v<IGlobalRudeWindowNotificationService>,
              (void **)this + 32);
  winrt::check_hresult((int *)&punk, Service, (__int64)&v13);
  v12 = SmartCookie::Register<IGlobalRudeWindowNotificationService,long (IGlobalRudeWindowNotificationService::*)(IGlobalRudeWindowNotifications *,unsigned long *),long (IGlobalRudeWindowNotificationService::*)(unsigned long),TouchGestureComponent *>(
          (__int64)this + 264,
          *((_QWORD *)this + 32),
          v11);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x36,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
      (const char *)(unsigned int)v12,
      (_DWORD)this - 16);
}
