/*
 * XREFs of ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F3C08
 * Callers:
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F4850 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1805F59C8 (-RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUIIn.c)
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805F5D74 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F5FBC (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6F30 (-ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4L.c)
 *     ?UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F70B4 (-UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x180046748 (--$com_agile_query@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_exception_poli.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x1802288A4 (--1-$unique_ptr@VProtocolLauncher@Utils@@U-$default_delete@VProtocolLauncher@Utils@@@std@@@std@@.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180284034 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??$?4U?$default_delete@VFlyoutView@@@std@@$0A@@?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805F0DAC (--$-4U-$default_delete@VFlyoutView@@@std@@$0A@@-$unique_ptr@VFlyoutView@@U-$default_delete@VFlyo.c)
 *     ??$PreviousViewThrownOut@I@MeetAndChatTelemetry@@SAX$$QEAI@Z @ 0x1805F1534 (--$PreviousViewThrownOut@I@MeetAndChatTelemetry@@SAX$$QEAI@Z.c)
 *     ??$get_site@UIUnknown@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIUnknown@@@1@XZ @ 0x1805F19E0 (--$get_site@UIUnknown@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIUnknown@@@1@XZ.c)
 *     ??1?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@QEAA@XZ @ 0x1805F2E2C (--1-$unique_ptr@VFlyoutView@@U-$default_delete@VFlyoutView@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VProtocolLauncher@Utils@@@std@@QEBAXPEAVProtocolLauncher@Utils@@@Z @ 0x1805F31EC (--R-$default_delete@VProtocolLauncher@Utils@@@std@@QEBAXPEAVProtocolLauncher@Utils@@@Z.c)
 *     ??1?$unique_ptr@VFallbackFlyoutView@@U?$default_delete@VFallbackFlyoutView@@@std@@@std@@QEAA@XZ @ 0x1805F9BF4 (--1-$unique_ptr@VFallbackFlyoutView@@U-$default_delete@VFallbackFlyoutView@@@std@@@std@@QEAA@XZ.c)
 *     ??$make_unique@VApplicationFlyoutView@@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHostLayout@@V?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEAPEBG$0A@@std@@YA?AV?$unique_ptr@VApplicationFlyoutView@@U?$default_delete@VApplicationFlyoutView@@@std@@@0@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@0@AEAPEBG@Z @ 0x1805FA574 (--$make_unique@VApplicationFlyoutView@@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHo.c)
 *     ??1?$unique_ptr@VApplicationFlyoutView@@U?$default_delete@VApplicationFlyoutView@@@std@@@std@@QEAA@XZ @ 0x1805FA8A0 (--1-$unique_ptr@VApplicationFlyoutView@@U-$default_delete@VApplicationFlyoutView@@@std@@@std@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
RTL_SRWLOCK *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView(
        __int64 a1,
        RTL_SRWLOCK *a2)
{
  __int64 v4; // rcx
  void **v5; // rdx
  const WCHAR **v6; // rbx
  const WCHAR *v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  RTL_SRWLOCK *v11; // rbx
  RTL_SRWLOCK *v12; // rdi
  std::_Ref_count_base **v13; // rax
  std::_Ref_count_base *v14; // rcx
  __int64 v15; // rax
  void *v16; // rbx
  _DWORD *v17; // rax
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v19; // rbx
  RTL_SRWLOCK *v21; // [rsp+30h] [rbp-49h] BYREF
  void *v22; // [rsp+38h] [rbp-41h] BYREF
  RTL_SRWLOCK *v23; // [rsp+40h] [rbp-39h] BYREF
  void **v24; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-29h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v27[2]; // [rsp+70h] [rbp-9h] BYREF

  v23 = a2;
  std::wstring::wstring((char **)v27, L"ms-meetnow");
  Utils::ProtocolLauncher::TryGetForUriScheme(&v24, v27);
  std::wstring::_Tidy_deallocate((void **)v27);
  v25 = 0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
         L"TaskbarMnFallback",
         &v25) >= 0
    && v25 )
  {
    v5 = v24;
    v6 = 0LL;
    v24 = 0LL;
    if ( !v5 )
    {
LABEL_8:
      v7 = &pvData;
      goto LABEL_9;
    }
    std::default_delete<Utils::ProtocolLauncher>::operator()(v4, v5);
  }
  else
  {
    v6 = (const WCHAR **)v24;
  }
  if ( !v6 )
    goto LABEL_8;
  v7 = *v6;
LABEL_9:
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v22, (RTL_SRWLOCK *)(a1 + 112));
  v8 = (_QWORD *)(a1 + 192);
  v9 = *(_QWORD *)(a1 + 192);
  if ( !v9
    || (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9), (unsigned int)_o__wcsicmp(v7, v10)) )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v22);
    v22 = 0LL;
    if ( *v7 )
    {
      *(_QWORD *)&v27[0] = L"ms-meetnow";
      v26[0] = *(std::_Ref_count_base **)(a1 + 184);
      v21 = *(RTL_SRWLOCK **)(a1 + 176);
      v13 = (std::_Ref_count_base **)std::make_unique<ApplicationFlyoutView,IPrivilegedPresentationOperations * &,IInputHostLayout * &,std::unique_ptr<Utils::ProtocolLauncher>,unsigned short const * &,0>(
                                       (unsigned int)&v23,
                                       (unsigned int)&v21,
                                       (unsigned int)v26,
                                       (unsigned int)&v24,
                                       (__int64)v27);
      v14 = *v13;
      *v13 = 0LL;
      v26[0] = v14;
      std::unique_ptr<ApplicationFlyoutView>::~unique_ptr<ApplicationFlyoutView>(&v23);
      std::unique_ptr<FlyoutView>::operator=<std::default_delete<FlyoutView>,0>(&v22, (void **)v26);
      std::unique_ptr<FlyoutView>::~unique_ptr<FlyoutView>((void **)v26);
    }
    else
    {
      v11 = (RTL_SRWLOCK *)*winrt::immersive_shell_component::get_site<IUnknown>(
                              (RTL_SRWLOCK *)(a1 + 16),
                              (__int64 *)v26);
      v12 = (RTL_SRWLOCK *)operator new(0x20uLL);
      v23 = v12;
      v21 = v11;
      v12->Ptr = &FallbackFlyoutView::`vftable';
      wil::com_agile_query<IUnknown * &>(&v12[1].Ptr, (__int64 *)&v21);
      v12[2].Ptr = 0LL;
      v12[3].Ptr = 0LL;
      *(_QWORD *)&v27[0] = 0LL;
      v21 = v12;
      std::unique_ptr<FallbackFlyoutView>::~unique_ptr<FallbackFlyoutView>(v27);
      std::unique_ptr<FlyoutView>::operator=<std::default_delete<FlyoutView>,0>(&v22, (void **)&v21);
      std::unique_ptr<FlyoutView>::~unique_ptr<FlyoutView>((void **)&v21);
      if ( v26[0] )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v26);
    }
    *(_OWORD *)v26 = 0LL;
    wil::AcquireSRWLockExclusive(&v23, (RTL_SRWLOCK *)(a1 + 112));
    if ( !*v8
      || (v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 40LL))(*v8), (unsigned int)_o__wcsicmp(v7, v15)) )
    {
      std::shared_ptr<FlyoutView>::operator=(v26, (_QWORD *)(a1 + 192));
      v27[0] = 0LL;
      v16 = v22;
      if ( v22 )
      {
        v17 = operator new(0x18uLL);
        *(_QWORD *)&v27[0] = v17;
        *(_OWORD *)v17 = 0LL;
        v17[2] = 1;
        v17[3] = 1;
        *(_QWORD *)v17 = &std::_Ref_count_resource<FlyoutView *,std::default_delete<FlyoutView>>::`vftable';
        *((_QWORD *)v17 + 2) = v16;
        v22 = 0LL;
      }
      else
      {
        v17 = (_DWORD *)*((_QWORD *)&v27[0] + 1);
        v16 = *(void **)&v27[0];
      }
      *(_QWORD *)(a1 + 192) = v16;
      v18 = *(std::_Ref_count_base **)(a1 + 200);
      *(_QWORD *)(a1 + 200) = v17;
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      *(_BYTE *)(a1 + 208) = 0;
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
    v19 = v26[0];
    if ( v26[0] )
    {
      LODWORD(v21) = (*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v26[0] + 24LL))(v26[0]);
      MeetAndChatTelemetry::PreviousViewThrownOut<unsigned int>((int *)&v21);
      (*(void (__fastcall **)(std::_Ref_count_base *, RTL_SRWLOCK **, _QWORD))(*(_QWORD *)v19 + 16LL))(v19, &v23, 0LL);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
    }
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a2, (_QWORD *)(a1 + 192));
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
    std::unique_ptr<FlyoutView>::~unique_ptr<FlyoutView>(&v22);
  }
  else
  {
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a2, (_QWORD *)(a1 + 192));
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v22);
  }
  std::unique_ptr<Utils::ProtocolLauncher>::~unique_ptr<Utils::ProtocolLauncher>(&v24);
  return a2;
}
