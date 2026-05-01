/*
 * XREFs of ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180021B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsLegacyApp@@YA_NPEBG@Z @ 0x180017EAC (-IsLegacyApp@@YA_NPEBG@Z.c)
 *     ??0?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001939C (--0-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shel.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18001CF2C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18001E50C (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18001F148 (--$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800209C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800209C0.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?StartActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180020AA0 (-StartActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002193C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800219E0 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180021A14 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180021AE0 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ??0ViewEventArgsForNavigationRequest@@QEAA@XZ @ 0x180023828 (--0ViewEventArgsForNavigationRequest@@QEAA@XZ.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18002387C (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800246F4 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180026624 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800274B0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180049054 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperB.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009B0F4 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1800D5F6C (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exc.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x1800E6768 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIUwpWindowWrapperUniversalInternal@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FF820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpW_ea_1800FF820.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180123324 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180150E08 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18017C6C0 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18017C6C0.c)
 *     ?GetEventRegistration@UwpWindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x1801951C0 (-GetEventRegistration@UwpWindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A61EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VVie_ea_1801A61EC.c)
 *     ?GetTombstonedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1801C1CD0 (-GetTombstonedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr.c)
 *     ??$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@wil@@YA?AV?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1801CDDC0 (--$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowL.c)
 *     ??1WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180217C7C (--1WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@wil@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1802A0DB8 (--$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpW.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED88C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@E@Z @ 0x180423744 (-SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     ?EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1804289AC (-EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180429504 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=63 #try_helpers=1
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowActivating(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *a2)
{
  struct IUwpWindowWrapperInternal *v2; // r14
  UwpWindowEventDispatcher *v4; // r12
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD **); // rdi
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 *v15; // rbx
  __int64 (__fastcall *v16)(__int64 *, HSTRING *); // rdi
  int v17; // eax
  CallerIdentity *StringRawBuffer; // rax
  __int64 v19; // rdx
  unsigned __int16 **v20; // r8
  bool v21; // al
  unsigned __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  int v27; // edx
  unsigned int v28; // r8d
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rbx
  unsigned int v31; // eax
  UINT32 v32; // edx
  HRESULT v33; // eax
  int v34; // edx
  __int64 v35; // r8
  int v36; // edx
  unsigned int v37; // r8d
  char v38; // al
  unsigned int v39; // eax
  UINT32 v40; // edx
  HRESULT v41; // eax
  int v42; // edx
  __int64 v43; // r8
  unsigned __int8 v44; // r8
  char v45; // al
  int v46; // eax
  struct IUwpWindowWrapperInternal *v47; // r15
  struct IUwpWindowWrapperInternal **v48; // rdi
  struct IUwpWindowWrapperInternal **v49; // r12
  struct IUwpWindowWrapperInternal *v50; // rcx
  unsigned int v51; // edi
  bool v52; // zf
  __int64 v53; // rax
  std::_Ref_count_base *v54; // rcx
  std::_Ref_count_base *v55; // rdx
  struct IUwpWindowWrapperInternal **TombstonedView; // rax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v57; // rdx
  unsigned __int8 v58; // r8
  __int64 v59; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v60; // rdi
  RTL_SRWLOCK *v61; // r12
  ViewEventArgsBase *v62; // rax
  __int64 v63; // rbx
  volatile int *v64; // rdx
  __int64 v65; // rcx
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  __int64 v68; // r9
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rdx
  std::_Ref_count_base *v72; // rcx
  __int64 Ptr_high; // r8
  struct IUwpWindowWrapperInternal **v74; // rax
  __int64 v75; // rcx
  int v76; // edx
  unsigned int v77; // r8d
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rcx
  UwpWindowEventDispatcher *v81; // r15
  __int64 v82; // rcx
  __int64 CachedView; // rax
  __int64 v84; // rdx
  __int64 v85; // r8
  unsigned int v86; // eax
  UINT32 v87; // edx
  HRESULT v88; // eax
  int v89; // edx
  unsigned int v90; // r8d
  HSTRING v91; // rbx
  UwpWindowEventDispatcher *v92; // r13
  __int64 *v93; // rax
  __int64 v94; // rcx
  int v95; // eax
  int v96; // eax
  _QWORD *Uwlm; // rax
  __int64 v98; // rdi
  __int64 (__fastcall *v99)(__int64, _QWORD, __int64 *); // rbx
  int v100; // eax
  __int64 *v101; // rax
  __int64 v102; // rcx
  char v103; // di
  void (__fastcall *v104)(unsigned __int64, _QWORD, _QWORD); // rdi
  unsigned int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 EventRegistration; // rax
  const char *v110; // r9
  std::_Ref_count_base *v111; // rbx
  volatile signed __int32 *v112; // r15
  std::_Ref_count_base *v113; // rdi
  std::_Ref_count_base *v114; // rcx
  std::_Ref_count_base *v115; // rdx
  struct IUwpWindowWrapperInternal *v116; // rcx
  __int64 v117; // rax
  UwpWindowEventDispatcher *v118; // rbx
  std::_Ref_count_base *v119; // rcx
  HRESULT v120; // eax
  int v121; // edx
  __int64 v122; // r8
  __int64 v123; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v124; // r12
  ViewEventArgsForNavigationRequest *v125; // rax
  ViewEventArgsForNavigationRequest *v126; // rbx
  int v127; // r12d
  __int64 v128; // rcx
  int v129; // eax
  __int64 v130; // rcx
  int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // r12
  int (__fastcall *v134)(unsigned __int64, GUID *, __int64 *); // rdi
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rdx
  int v138; // eax
  __int64 v139; // rcx
  const char *v140; // r9
  __int64 result; // rax
  __int64 v142; // rax
  std::_Ref_count_base *v143; // rcx
  __int64 v144; // rcx
  int v145; // eax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  __int64 v149; // rax
  int v150; // eax
  int v151; // eax
  int *v152; // [rsp+20h] [rbp-4B8h]
  char v153; // [rsp+60h] [rbp-478h] BYREF
  char v154; // [rsp+61h] [rbp-477h]
  char v155[2]; // [rsp+62h] [rbp-476h] BYREF
  int v156; // [rsp+64h] [rbp-474h] BYREF
  int v157; // [rsp+68h] [rbp-470h]
  unsigned int v158; // [rsp+6Ch] [rbp-46Ch] BYREF
  unsigned int v159; // [rsp+70h] [rbp-468h] BYREF
  struct IUwpWindowWrapperInternal *v160; // [rsp+78h] [rbp-460h] BYREF
  int v161[2]; // [rsp+80h] [rbp-458h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v162; // [rsp+88h] [rbp-450h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v163; // [rsp+90h] [rbp-448h] BYREF
  struct IUwpWindowWrapperInternal *v164; // [rsp+98h] [rbp-440h] BYREF
  HSTRING v165; // [rsp+A0h] [rbp-438h] BYREF
  std::_Ref_count_base *v166[2]; // [rsp+A8h] [rbp-430h]
  UwpWindowEventDispatcher *v167; // [rsp+B8h] [rbp-420h]
  __int64 v168; // [rsp+C0h] [rbp-418h] BYREF
  __int64 *v169; // [rsp+C8h] [rbp-410h] BYREF
  unsigned int v170; // [rsp+D0h] [rbp-408h] BYREF
  int v171; // [rsp+D4h] [rbp-404h] BYREF
  int v172; // [rsp+D8h] [rbp-400h] BYREF
  __int64 v173; // [rsp+E0h] [rbp-3F8h] BYREF
  __int64 v174; // [rsp+E8h] [rbp-3F0h] BYREF
  HSTRING string; // [rsp+F0h] [rbp-3E8h] BYREF
  __int64 v176; // [rsp+F8h] [rbp-3E0h] BYREF
  _QWORD *v177; // [rsp+100h] [rbp-3D8h] BYREF
  struct IUwpWindowWrapperInternal *v178; // [rsp+108h] [rbp-3D0h] BYREF
  __int64 v179; // [rsp+110h] [rbp-3C8h] BYREF
  int v180; // [rsp+118h] [rbp-3C0h] BYREF
  unsigned int v181; // [rsp+11Ch] [rbp-3BCh] BYREF
  int v182; // [rsp+120h] [rbp-3B8h] BYREF
  __int64 v183; // [rsp+128h] [rbp-3B0h] BYREF
  __int64 v184; // [rsp+130h] [rbp-3A8h] BYREF
  __int64 v185; // [rsp+138h] [rbp-3A0h]
  __int64 v186; // [rsp+140h] [rbp-398h]
  RTL_SRWLOCK *v187; // [rsp+148h] [rbp-390h]
  __int64 v188; // [rsp+150h] [rbp-388h] BYREF
  __int64 v189; // [rsp+158h] [rbp-380h] BYREF
  std::_Ref_count_base *v190[2]; // [rsp+160h] [rbp-378h] BYREF
  char v191[8]; // [rsp+170h] [rbp-368h] BYREF
  __int64 v192; // [rsp+178h] [rbp-360h] BYREF
  __int64 v193; // [rsp+180h] [rbp-358h] BYREF
  UwpWindowEventDispatcher *v194; // [rsp+188h] [rbp-350h] BYREF
  __int128 v195; // [rsp+190h] [rbp-348h] BYREF
  __int64 v196; // [rsp+1A0h] [rbp-338h] BYREF
  __int64 v197; // [rsp+1A8h] [rbp-330h] BYREF
  __int64 v198; // [rsp+1B0h] [rbp-328h] BYREF
  unsigned __int64 v199; // [rsp+1B8h] [rbp-320h] BYREF
  __int64 v200; // [rsp+1C0h] [rbp-318h] BYREF
  std::_Ref_count_base *v201[2]; // [rsp+1D0h] [rbp-308h] BYREF
  __int64 v202; // [rsp+1E0h] [rbp-2F8h]
  int v203; // [rsp+1E8h] [rbp-2F0h]
  __int64 v204; // [rsp+1F0h] [rbp-2E8h] BYREF
  __int64 v205; // [rsp+1F8h] [rbp-2E0h] BYREF
  PCWSTR v206; // [rsp+200h] [rbp-2D8h] BYREF
  _QWORD *v207; // [rsp+208h] [rbp-2D0h] BYREF
  HSTRING v208; // [rsp+210h] [rbp-2C8h] BYREF
  __int64 v209; // [rsp+218h] [rbp-2C0h] BYREF
  unsigned __int64 v210; // [rsp+220h] [rbp-2B8h]
  PCWSTR v211; // [rsp+228h] [rbp-2B0h] BYREF
  HSTRING v212; // [rsp+230h] [rbp-2A8h] BYREF
  __int64 v213; // [rsp+238h] [rbp-2A0h] BYREF
  UwpWindowEventDispatcher *v214; // [rsp+240h] [rbp-298h] BYREF
  RTL_SRWLOCK *v215; // [rsp+248h] [rbp-290h]
  std::_Ref_count_base **v216; // [rsp+250h] [rbp-288h]
  __int64 v217; // [rsp+258h] [rbp-280h] BYREF
  _QWORD *v218; // [rsp+260h] [rbp-278h] BYREF
  __int64 v219; // [rsp+268h] [rbp-270h] BYREF
  char v220[8]; // [rsp+270h] [rbp-268h] BYREF
  __int64 *v221; // [rsp+278h] [rbp-260h]
  unsigned __int64 v222; // [rsp+280h] [rbp-258h]
  char v223[8]; // [rsp+288h] [rbp-250h] BYREF
  std::_Ref_count_base *v224; // [rsp+290h] [rbp-248h]
  __int128 v225; // [rsp+298h] [rbp-240h]
  __int64 v226; // [rsp+2A8h] [rbp-230h] BYREF
  int v227; // [rsp+2B0h] [rbp-228h] BYREF
  HSTRING_HEADER v228; // [rsp+2B8h] [rbp-220h] BYREF
  HSTRING v229; // [rsp+2D0h] [rbp-208h] BYREF
  struct IUwpWindowWrapperInternal *v230; // [rsp+2D8h] [rbp-200h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+2E8h] [rbp-1F0h] BYREF
  HSTRING v232; // [rsp+300h] [rbp-1D8h] BYREF
  HSTRING_HEADER v233; // [rsp+308h] [rbp-1D0h] BYREF
  HSTRING v234; // [rsp+320h] [rbp-1B8h] BYREF
  void **v235; // [rsp+330h] [rbp-1A8h] BYREF
  char v236[272]; // [rsp+338h] [rbp-1A0h] BYREF
  volatile signed __int32 *v237; // [rsp+448h] [rbp-90h] BYREF
  char v238[48]; // [rsp+450h] [rbp-88h] BYREF
  char v239[32]; // [rsp+480h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+0h]

  v4 = this;
  v167 = this;
  v157 = 0;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v235,
    (__int64)"WindowEventDispatcher_AppViewActivating");
  v235 = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating::`vftable';
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating::StartActivity((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating *)&v235);
  try
  {
    if ( !*((_BYTE *)v4 + 496) )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        &v235,
        2150039860LL);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating::~WindowEventDispatcher_AppViewActivating((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating *)&v235);
      return 0LL;
    }
    v5 = *(_QWORD *)a2;
    v169 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *, __int64 **))(v5 + 48))(
           a2,
           &v169);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3CB,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        (int)v152);
    v7 = *(_QWORD *)a2;
    v168 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *, __int64 *))(v7 + 56))(
           a2,
           &v168);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3CE,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        (int)v152);
    v159 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v168 + 56LL))(v168, &v159);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3D1,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        (int)v152);
    v177 = 0LL;
    if ( v159 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 38) + 48LL))(*((_QWORD *)v4 + 38), &v217);
      v11 = *(_QWORD *)v10;
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(**(_QWORD **)v10 + 80LL);
      v13 = v177;
      v177 = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
      v14 = v12(v11, v159, &v177);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3D6,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v14,
          (int)v152);
      if ( v217 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v217 + 16LL))(v217);
    }
    string = 0LL;
    v15 = v169;
    v16 = *(__int64 (__fastcall **)(__int64 *, HSTRING *))(*v169 + 56);
    WindowsDeleteString(0LL);
    string = 0LL;
    v17 = v16(v15, &string);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3DA,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        (int)v152);
    StringRawBuffer = (CallerIdentity *)WindowsGetStringRawBuffer(string, 0LL);
    v21 = IsLegacyApp(StringRawBuffer, v19, v20);
    v22 = !v21;
    LODWORD(v187) = !v21;
    v172 = (int)v187;
    v158 = 0;
    v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v168 + 48LL))(v168, &v158);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E0,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v23,
        (int)v152);
    v163 = 0LL;
    v24 = *v169;
    v163 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Foundation::Collections::IPropertySet **))(v24 + 88))(
            v169,
            &v163);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E3,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v25,
        (int)v152);
    v162 = v163;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v162);
    v193 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v169 + 48))(v169, &v193);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E7,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v26,
        (int)v152);
    v225 = 0LL;
    v226 = 0LL;
    v227 = 0;
    v180 = 0;
    v232 = 0LL;
    v29 = -1LL;
    v30 = -1LL;
    do
      ++v30;
    while ( aViewsizeprefer_1[v30] );
    if ( v30 > 0xFFFFFFFF )
      goto LABEL_80;
    v31 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v30);
    v32 = v31 - 1;
    if ( (unsigned int)v30 < v31 )
      v32 = v30;
    v33 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v32, &hstringHeader, &v232);
    if ( v33 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33, v34, v35);
    }
    else
    {
      v157 = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v162, v232, v35, &v180) < 0 )
      {
LABEL_23:
        v38 = 1;
LABEL_24:
        v156 = 0;
        v157 = 0;
        if ( v38 )
        {
          v170 = 0;
          v96 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v169 + 72))(v169, &v170);
          if ( v96 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x3F3,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v96,
              (int)v152);
          if ( v170 )
          {
            v188 = 0LL;
            Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)v4 - 16, &v219);
            v98 = *Uwlm;
            v99 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*Uwlm + 112LL);
            wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v188);
            v100 = v99(v98, v170, &v188);
            if ( v100 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3F7,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)(unsigned int)v100,
                (int)v152);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v219);
            if ( !v188 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3F8,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)0x80070057LL,
                (int)v152);
            v181 = 0;
            v148 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v188 + 48LL))(v188, &v181);
            if ( v148 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3FB,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)(unsigned int)v148,
                (int)v152);
            Microsoft::WRL::Wrappers::SRWLock::LockShared(v220, (char *)v4 + 472);
            UwpWindowEventDispatcher::GetCachedView((char *)v4 - 16, &v183, v181);
            if ( v183 )
            {
              (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v183 + 256LL))(v183);
              v149 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v239, &off_18070BE58);
              v150 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                       (Windows::Internal::ShellHelpers::PropertySetHelper *)&v162,
                       *(HSTRING *)(v149 + 24));
              if ( v150 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x404,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v150,
                  (int)v152);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v183);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v220);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v188);
          }
        }
        v154 = 0;
        v155[0] = 0;
        v2 = 0LL;
        v160 = 0LL;
        *(_OWORD *)v166 = 0LL;
        v185 = 0LL;
        v186 = 0LL;
        v229 = 0LL;
        v30 = -1LL;
        do
          ++v30;
        while ( aAllowwindowreu[v30] );
        if ( v30 <= 0xFFFFFFFF )
        {
          v39 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v30);
          v40 = v39 - 1;
          if ( (unsigned int)v30 < v39 )
            v40 = v30;
          v41 = WindowsCreateStringReference(L"AllowWindowReuse", v40, &v228, &v229);
          if ( v41 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41, v42, v43);
            __debugbreak();
          }
          v153 = 0;
          if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v162, v229, v43, &v153) < 0 )
          {
            v45 = 1;
            v153 = 1;
            goto LABEL_33;
          }
LABEL_81:
          v45 = v153;
LABEL_33:
          if ( !v45 )
          {
            if ( v163 )
            {
              v151 = Windows::Internal::Shell::Desktop::ViewManagerInterop::SetAppActivationPolicy(
                       (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v162,
                       0LL,
                       v44);
              if ( v151 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x466,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v151,
                  (int)v152);
            }
            v51 = v156;
            goto LABEL_87;
          }
          v200 = 0LL;
          v46 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v168 + 80LL))(v168, &v200);
          if ( v46 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x412,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v46,
              (int)v152);
          v22 = (unsigned __int64)v4 + 472;
          AcquireSRWLockShared((PSRWLOCK)v4 + 59);
          v215 = (RTL_SRWLOCK *)((char *)v4 + 472);
          v178 = (UwpWindowEventDispatcher *)((char *)v4 - 16);
          v30 = v158;
          v47 = 0LL;
          v230 = 0LL;
          v156 = 4;
          v157 = 4;
          v48 = (struct IUwpWindowWrapperInternal **)*((_QWORD *)v4 + 46);
          v49 = (struct IUwpWindowWrapperInternal **)*((_QWORD *)v4 + 47);
          while ( v48 != v49 )
          {
            if ( *(_DWORD *)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, char *))(*(_QWORD *)*v48
                                                                                                  + 288LL))(
                              *v48,
                              v191) == (_DWORD)v30 )
            {
              v50 = *v48;
              v47 = v50;
              v230 = *v48;
              if ( v50 )
                (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v50 + 8LL))(v50);
              break;
            }
            ++v48;
          }
          v51 = v156 & 0xFFFFFFF9 | 2;
          v156 = v51;
          v157 = v51;
          v2 = v47;
          v160 = v47;
          v52 = v47 == 0LL;
          v29 = (unsigned __int64)v178;
          if ( !v52 )
            goto LABEL_42;
          TombstonedView = (struct IUwpWindowWrapperInternal **)UwpWindowEventDispatcher::GetTombstonedView(
                                                                  v178,
                                                                  &v179,
                                                                  v200);
          v2 = *TombstonedView;
          *TombstonedView = 0LL;
          v160 = v2;
          if ( v179 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v179 + 16LL))(v179);
          if ( v2 )
          {
LABEL_42:
            v53 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, std::_Ref_count_base **))(*(_QWORD *)v2 + 264LL))(
                    v2,
                    v201);
            v54 = *(std::_Ref_count_base **)v53;
            v55 = *(std::_Ref_count_base **)(v53 + 8);
            *(_QWORD *)v53 = 0LL;
            *(_QWORD *)(v53 + 8) = 0LL;
            v166[0] = v54;
            v166[1] = v55;
            if ( v201[1] )
              std::_Ref_count_base::_Decref(v201[1]);
          }
          if ( v22 )
            ReleaseSRWLockShared((PSRWLOCK)v22);
          if ( !v2 )
            goto LABEL_86;
          *(_QWORD *)v161 = 0LL;
          (**(void (__fastcall ***)(struct IUwpWindowWrapperInternal *, GUID *, int *))v2)(
            v2,
            &GUID_1a76217a_c369_4ceb_89e4_23b1ae9b6271,
            v161);
          v59 = *(_QWORD *)v161;
          if ( *(_QWORD *)v161 )
          {
            (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v161 + 24LL))(*(_QWORD *)v161, &v192);
            v82 = v192;
            if ( v192 )
            {
              v95 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v192 + 320LL))(v192, v155);
              if ( v95 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x429,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v95,
                  (int)v152);
              v82 = v192;
            }
            if ( v82 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
            v59 = *(_QWORD *)v161;
          }
          if ( v59 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          if ( v155[0] )
          {
            LOBYTE(v57) = 1;
            Windows::Internal::Shell::Desktop::ViewManagerInterop::SetAppActivationPolicy(
              (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v162,
              v57,
              v58);
          }
          v60 = v163;
          v61 = 0LL;
          v185 = 0LL;
          v186 = 0LL;
          v62 = (ViewEventArgsBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
          v63 = (__int64)v62;
          if ( v62 )
          {
            Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>(v62);
            *(_QWORD *)v63 = &ViewEventArgsForSelectTargetView::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
            *(_QWORD *)(v63 + 8) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
            *(_QWORD *)(v63 + 64) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `IWeakReferenceSource'};
            *(_QWORD *)(v63 + 72) = &ViewEventArgsForSelectTargetView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>'};
            *(_BYTE *)(v63 + 96) = 0;
            *(_QWORD *)(v63 + 100) = 0LL;
            *(_DWORD *)(v63 + 48) = 1;
            if ( *(struct Windows::Foundation::Collections::IPropertySet **)(v63 + 56) != v60 )
            {
              if ( v60 )
                (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v60 + 8LL))(v60);
              v65 = *(_QWORD *)(v63 + 56);
              *(_QWORD *)(v63 + 56) = v60;
              if ( v65 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
            }
            v66 = *(_QWORD *)(v63 + 88);
            while ( v66 >= 0 )
            {
              if ( (_DWORD)v66 != 0x7FFFFFFF )
              {
                v67 = v66;
                v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(v63 + 88), v66 + 1, v66);
                if ( v67 != v66 )
                  continue;
              }
              goto LABEL_65;
            }
            Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v66 + 16), v64);
LABEL_65:
            v61 = (RTL_SRWLOCK *)v63;
            v185 = v63;
            v186 = v63;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v63);
            v68 = 0LL;
            LODWORD(v187) = v172;
            v2 = v160;
            v51 = v157;
          }
          else
          {
            v68 = 2147942414LL;
            v51 = v156;
          }
          if ( (int)v68 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x432,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)v68,
              (int)v152);
          wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
            &v160,
            &v196);
          v173 = 0LL;
          v30 = (unsigned __int64)v166[0];
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v173);
          if ( *(_QWORD *)(v30 + 24) )
          {
            v173 = 0LL;
            v69 = *(_QWORD *)(v30 + 24);
            if ( v69 )
              v70 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v69 + 24LL))(
                      v69,
                      &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
                      &v173);
            else
              v70 = 0;
            if ( v70 >= 0 )
              goto LABEL_204;
          }
          else
          {
            v173 = 0LL;
          }
          while ( 1 )
          {
            AcquireSRWLockShared((PSRWLOCK)v22);
            v222 = v22;
            v160 = 0LL;
            if ( v2 )
              (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 16LL))(v2);
            v166[0] = 0LL;
            v72 = v166[1];
            v166[1] = 0LL;
            if ( v72 )
              std::_Ref_count_base::_Decref(v72);
            LOBYTE(v30) = 1;
            v2 = 0LL;
            v178 = 0LL;
            Ptr_high = HIDWORD(v61[12].Ptr);
            if ( !LOBYTE(v61[12].Ptr) )
              goto LABEL_76;
            if ( !(_DWORD)Ptr_high )
              break;
            CachedView = UwpWindowEventDispatcher::GetCachedView(v29, &v204, Ptr_high);
            wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=(&v178, CachedView);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v204);
            v2 = v178;
            if ( !v178 )
              goto LABEL_76;
LABEL_97:
            v160 = v2;
            if ( v2 )
            {
              (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64, __int64))(*(_QWORD *)v2 + 8LL))(
                v2,
                v71,
                Ptr_high);
              (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64, __int64))(*(_QWORD *)v2 + 16LL))(
                v2,
                v84,
                v85);
            }
            if ( v22 )
              ReleaseSRWLockShared((PSRWLOCK)v22);
            v75 = v173;
            if ( v173 )
            {
              v173 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
            }
            if ( v196 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
LABEL_86:
            v29 = -1LL;
            v22 = (unsigned int)v187;
            v4 = v167;
LABEL_87:
            v61 = (RTL_SRWLOCK *)((char *)v4 + 472);
            AcquireSRWLockExclusive(v61);
            v187 = v61;
            if ( v2 )
            {
              v184 = 0LL;
              v78 = *(_QWORD *)v2;
              v184 = 0LL;
              v79 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64 *))(v78 + 232))(v2, &v184);
              if ( v79 < 0 )
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x484,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v79,
                  (int)v152);
                v80 = v184;
LABEL_90:
                v81 = v167;
              }
              else
              {
                v80 = v184;
                if ( v184 )
                  goto LABEL_90;
                (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64))(*(_QWORD *)v2 + 240LL))(v2, v168);
                v81 = v167;
                wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
                  &v199,
                  *((_QWORD *)v167 + 38));
                v30 = v199;
                v104 = *(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v199 + 64LL);
                v105 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 456LL))(v2);
                v104(v30, v158, v105);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v199);
                v80 = v184;
              }
              if ( v80 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
              v92 = (UwpWindowEventDispatcher *)((char *)v81 - 16);
              v103 = v154;
              goto LABEL_130;
            }
            v210 = 0LL;
            v234 = 0LL;
            v30 = (unsigned __int64)L"ExperienceId";
            do
              ++v29;
            while ( aExperienceid[v29] );
            if ( v29 <= 0xFFFFFFFF )
            {
              v86 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v29);
              v87 = v86 - 1;
              if ( (unsigned int)v29 < v86 )
                v87 = v29;
              v88 = WindowsCreateStringReference(L"ExperienceId", v87, &v233, &v234);
              if ( v88 < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v88, v89, v90);
                __debugbreak();
              }
              v91 = v234;
              v165 = 0LL;
              v157 = v51 | 0x10;
              WindowsDeleteString(0LL);
              v165 = 0LL;
              if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v162,
                          v91) < 0 )
              {
                WindowsDeleteString(v165);
                v165 = 0LL;
                WindowsCreateString(L"Windows.Internal.ShellExperience.TopLevelApplication", 0x34u, &v165);
              }
              v30 = (unsigned __int64)v165;
              v165 = 0LL;
              WindowsDeleteString(0LL);
              v210 = v30;
              WindowsDeleteString(v165);
              if ( (_DWORD)v22 )
              {
                v92 = (UwpWindowEventDispatcher *)((char *)v167 - 16);
                v171 = 0;
                v211 = WindowsGetStringRawBuffer((HSTRING)v30, 0LL);
                v218 = v177;
                v212 = string;
                v213 = v168;
                v194 = v92;
                v101 = (__int64 *)wil::MakeOrThrow<UwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind const &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType,unsigned __int64 &>(
                                    (unsigned int)&v198,
                                    (unsigned int)&v194,
                                    (unsigned int)&v213,
                                    (unsigned int)&v212,
                                    (__int64)&v172,
                                    (__int64)&v158,
                                    (__int64)&v218,
                                    (__int64)&v159,
                                    (__int64)&v211,
                                    (__int64)&v171,
                                    (__int64)&v193);
                v102 = *v101;
                *v101 = 0LL;
                v2 = (struct IUwpWindowWrapperInternal *)((v102 + 24) & -(__int64)(v102 != 0));
                v160 = v2;
                if ( v198 )
                {
                  v198 = 0LL;
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release();
                }
              }
              else
              {
                v92 = (UwpWindowEventDispatcher *)((char *)v167 - 16);
                v156 = 0;
                v206 = WindowsGetStringRawBuffer((HSTRING)v30, 0LL);
                v207 = v177;
                v208 = string;
                v209 = v168;
                v214 = v92;
                v93 = (__int64 *)wil::MakeOrThrow<LegacyUwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind const &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType,unsigned __int64 &>(
                                   (unsigned int)&v197,
                                   (unsigned int)&v214,
                                   (unsigned int)&v209,
                                   (unsigned int)&v208,
                                   (__int64)&v172,
                                   (__int64)&v158,
                                   (__int64)&v207,
                                   (__int64)&v159,
                                   (__int64)&v206,
                                   (__int64)&v156,
                                   (__int64)&v193);
                v94 = *v93;
                *v93 = 0LL;
                v2 = (struct IUwpWindowWrapperInternal *)((v94 + 24) & -(__int64)(v94 != 0));
                v160 = v2;
                if ( v197 )
                {
                  v197 = 0LL;
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::Release();
                }
              }
              v103 = 1;
              v154 = 1;
              if ( v30 )
                WindowsDeleteString((HSTRING)v30);
LABEL_130:
              LODWORD(v226) = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 256LL))(v2);
              v106 = *(_QWORD *)v2;
              if ( v103 )
              {
                v107 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(v106 + 280))(v2);
                v108 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 272LL))(v2);
                EventRegistration = UwpWindowEventDispatcher::GetEventRegistration(v92, v223, v108, v107);
                v111 = *(std::_Ref_count_base **)EventRegistration;
                v112 = *(volatile signed __int32 **)(EventRegistration + 8);
                *(_QWORD *)EventRegistration = 0LL;
                *(_QWORD *)(EventRegistration + 8) = 0LL;
                v113 = v111;
                v166[0] = v111;
                v114 = v166[1];
                v166[1] = (std::_Ref_count_base *)v112;
                if ( v114 )
                  std::_Ref_count_base::_Decref(v114);
                if ( v224 )
                  std::_Ref_count_base::_Decref(v224);
                *(_OWORD *)v190 = 0LL;
                if ( v112 )
                {
                  _InterlockedIncrement(v112 + 2);
                  v2 = v160;
                  v112 = (volatile signed __int32 *)v166[1];
                  v113 = v166[0];
                  v185 = v186;
                }
                v190[0] = v111;
                v115 = (std::_Ref_count_base *)v112;
                v190[1] = (std::_Ref_count_base *)v112;
                v216 = v190;
                v116 = v2;
                v164 = v2;
                if ( v2 )
                {
                  (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 8LL))(v2);
                  v115 = v190[1];
                  v111 = v190[0];
                  v116 = v164;
                }
                v221 = (__int64 *)&v164;
                if ( !v111 )
                  wil::details::in1diag3::_Throw_NullAlloc(
                    retaddr,
                    (void *)0xB91,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    v110);
                v117 = *(_QWORD *)v116;
                v195 = 0LL;
                if ( v115 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)v115 + 2);
                  v2 = v160;
                  v112 = (volatile signed __int32 *)v166[1];
                  v113 = v166[0];
                  v185 = v186;
                }
                v195 = *(_OWORD *)v190;
                (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, __int128 *, _QWORD))(v117 + 304))(
                  v116,
                  &v195,
                  0LL);
                v118 = v167;
                if ( *((_QWORD *)v167 + 47) == *((_QWORD *)v167 + 48) )
                {
                  std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy> const &>(
                    (__int64 **)v167 + 46,
                    *((_QWORD **)v167 + 47),
                    (__int64 *)&v164);
                }
                else
                {
                  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                    *((_QWORD *)v167 + 47),
                    &v164);
                  *((_QWORD *)v118 + 47) += 8LL;
                }
                v30 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, char *))(*(_QWORD *)v164 + 288LL))(
                        v164,
                        v191);
                v179 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v164 + 272LL))(v164);
                ViewManagerInteropTraceLogging::WindowEventDispatcher_CachedView<unsigned short const *,unsigned int>(
                  (const WCHAR **)&v179,
                  (_DWORD *)v30);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v164);
                v119 = v190[1];
              }
              else
              {
                v142 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, std::_Ref_count_base **))(v106 + 264))(
                         v2,
                         v201);
                v113 = *(std::_Ref_count_base **)v142;
                v112 = *(volatile signed __int32 **)(v142 + 8);
                *(_QWORD *)v142 = 0LL;
                *(_QWORD *)(v142 + 8) = 0LL;
                v166[0] = v113;
                v143 = v166[1];
                v166[1] = (std::_Ref_count_base *)v112;
                if ( v143 )
                  std::_Ref_count_base::_Decref(v143);
                v119 = v201[1];
              }
              if ( v119 )
                std::_Ref_count_base::_Decref(v119);
              v194 = v92;
              UwpWindowEventDispatcher::AddPendingActivationResumeWithLock(v92, v2, v159);
              if ( v61 )
                ReleaseSRWLockExclusive(v61);
              wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                &v160,
                &v189);
              v182 = 0;
              v229 = 0LL;
              v120 = WindowsCreateStringReference(L"AAMShim.ActivateOptionsInternal", 0x1Fu, &v228, &v229);
              if ( v120 < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v120, v121, v122);
              }
              else
              {
                if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                            &v162,
                            v229,
                            v122,
                            &v182) >= 0
                  && (v182 & 0x200000) != 0 )
                {
                  v144 = *((_QWORD *)v113 + 3);
                  v183 = v144;
                  if ( v144 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v144 + 8LL))(v144);
                  UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed(v92, v189, &v183);
                }
                (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 360LL))(v2);
                if ( v154 )
                {
                  v123 = *((_QWORD *)v113 + 3);
                  *(_QWORD *)v161 = v123;
                  if ( v123 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v123 + 8LL))(v123);
                  v152 = v161;
                  UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(v92, v189, 0LL);
                }
                AcquireSRWLockShared(v61);
                v215 = v61;
                v225 = *(_OWORD *)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, struct IUwpWindowWrapperInternal **))(*(_QWORD *)v2 + 416LL))(
                                    v2,
                                    &v230);
                if ( v61 )
                  ReleaseSRWLockShared(v61);
                v124 = v163;
                v30 = 0LL;
                *(_QWORD *)v161 = 0LL;
                v125 = (ViewEventArgsForNavigationRequest *)operator new(
                                                              0x68uLL,
                                                              (const struct std::nothrow_t *)&std::nothrow);
                v179 = (__int64)v125;
                if ( v125 )
                {
                  v126 = ViewEventArgsForNavigationRequest::ViewEventArgsForNavigationRequest(v125);
                  *((_DWORD *)v126 + 12) = 2;
                  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v126 + 7, (__int64)v124);
                  v127 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>>(
                           v126,
                           &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
                           v161);
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::Release((__int64)v126);
                  v30 = *(_QWORD *)v161;
                  goto LABEL_159;
                }
              }
              Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v179);
              v127 = -2147024882;
LABEL_159:
              if ( v127 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x4C2,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v127,
                  (int)v152);
              v174 = 0LL;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v174);
              if ( *((_QWORD *)v113 + 3) )
              {
                v174 = 0LL;
                v128 = *((_QWORD *)v113 + 3);
                if ( v128 )
                  v129 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v128 + 24LL))(
                           v128,
                           &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
                           &v174);
                else
                  v129 = 0;
                v130 = v174;
              }
              else
              {
                v130 = 0LL;
                v174 = 0LL;
                v129 = -2147024809;
              }
              if ( v129 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x4C7,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v129,
                  (int)v152);
              v131 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v130 + 24LL))(
                       v130,
                       v189,
                       v30);
              if ( v131 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x4C9,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v131,
                  (int)v152);
              v132 = v174;
              if ( v174 )
              {
                v174 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v132 + 16LL))(v132);
              }
              v133 = v185;
              v176 = 0LL;
              v134 = **(int (__fastcall ***)(unsigned __int64, GUID *, __int64 *))v30;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v176);
              if ( v134(v30, &GUID_a8d2a90c_a403_4593_95ff_012516ae9351, &v176) >= 0 )
              {
                v146 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v176 + 48LL))(v176, (char *)&v226 + 4);
                if ( v146 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x4D1,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    (const char *)(unsigned int)v146,
                    (int)v152);
                v147 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v176 + 64LL))(v176, &v227);
                if ( v147 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x4D2,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    (const char *)(unsigned int)v147,
                    (int)v152);
              }
              if ( v155[0] )
                UwpWindowEventDispatcher::QueuePendingActivation(v92, v2, v163, 1);
              v135 = *v169;
              *(_OWORD *)v201 = v225;
              v202 = v226;
              v203 = v227;
              v136 = (*(__int64 (__fastcall **)(__int64 *, std::_Ref_count_base **))(v135 + 136))(v169, v201);
              if ( v136 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x4DC,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v136,
                  (int)v152);
              (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 368LL))(v2);
              LOBYTE(v137) = 1;
              v138 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v169 + 152))(v169, v137);
              if ( v138 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x4DF,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v138,
                  (int)v152);
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
                &v235,
                0LL);
              v139 = v176;
              if ( v176 )
              {
                v176 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v139 + 16LL))(v139);
              }
              if ( v30 )
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v30 + 16LL))(v30);
              if ( v189 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v189 + 16LL))(v189);
              if ( v133 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v133);
              if ( v112 )
                std::_Ref_count_base::_Decref((std::_Ref_count_base *)v112);
              if ( v2 )
                (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v2 + 16LL))(v2);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v162);
              if ( v163 )
                (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v163 + 16LL))(v163);
              WindowsDeleteString(string);
              string = 0LL;
              if ( v177 )
                (*(void (__fastcall **)(_QWORD *))(*v177 + 16LL))(v177);
              if ( v168 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v168 + 16LL))(v168);
              if ( v169 )
                (*(void (__fastcall **)(__int64 *))(*v169 + 16))(v169);
              v235 = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating::`vftable';
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v235);
              wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v238);
              wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v237);
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v236);
              return 0LL;
            }
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v76, v77);
LABEL_204:
            v145 = (*(__int64 (__fastcall **)(__int64, __int64, RTL_SRWLOCK *))(*(_QWORD *)v173 + 24LL))(
                     v173,
                     v196,
                     v61);
            if ( v145 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x438,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)(unsigned int)v145,
                (int)v152);
          }
          LOBYTE(v30) = 0;
LABEL_76:
          if ( (_BYTE)v30 )
          {
            v74 = (struct IUwpWindowWrapperInternal **)UwpWindowEventDispatcher::GetCachedView(v29, &v205, v158);
            v2 = *v74;
            *v74 = 0LL;
            v178 = v2;
            if ( v205 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v205 + 16LL))(v205);
          }
          goto LABEL_97;
        }
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v36, v37);
LABEL_80:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v27, v28);
        goto LABEL_81;
      }
    }
    v38 = 0;
    if ( v180 )
      goto LABEL_24;
    goto LABEL_23;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E5,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v140);
  }
  return result;
}
