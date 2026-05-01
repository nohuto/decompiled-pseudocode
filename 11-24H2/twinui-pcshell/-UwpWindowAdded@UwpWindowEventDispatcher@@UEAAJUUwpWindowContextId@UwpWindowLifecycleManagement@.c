/*
 * XREFs of ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001D870
 * Callers:
 *     <none>
 * Callees:
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x18001C1A4 (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18001CF2C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18001D58C (-CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18001E50C (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18001F88C (--$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@.c)
 *     ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x1800208B0 (--1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18002387C (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180049054 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperB.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIUwpWindowWrapperUniversalInternal@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FF820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpW_ea_1800FF820.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetEventRegistration@UwpWindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x1801951C0 (-GetEventRegistration@UwpWindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std.c)
 *     ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801C9310 (-CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrappe.c)
 *     ?CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801DE778 (-CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowW.c)
 *     ??$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@H@wil@@YA?AV?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@$$QEAH@Z @ 0x1801E2154 (--$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowConte_ea_1801E2154.c)
 *     ??$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@H@wil@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@$$QEAH@Z @ 0x1802A1850 (--$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindo_ea_1802A1850.c)
 *     ??$com_query@UINtUserViewWrapper@@AEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UINtUserViewWrapper@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@0@@Z @ 0x1804173E4 (--$com_query@UINtUserViewWrapper@@AEAV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=36
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowAdded(RTL_SRWLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  RTL_SRWLOCK *v6; // rcx
  __int64 Uwlm; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, HSTRING *); // rsi
  int v10; // eax
  const char *v11; // r9
  int v12; // eax
  __int64 result; // rax
  PVOID Ptr; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // r14
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r14
  RTL_SRWLOCK *v24; // rsi
  struct IUwpWindowWrapperInternal *v25; // rbx
  struct IUwpWindowWrapperInternal **v26; // r15
  struct IUwpWindowWrapperInternal **v27; // r12
  struct IUwpWindowWrapperInternal *v28; // rcx
  _BOOL8 v29; // rbx
  int v30; // eax
  int v31; // eax
  struct UwpWindowEventDispatcher *v32; // r12
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rcx
  struct IUwpWindowWrapperInternal *v35; // rdi
  volatile signed __int32 *v36; // r15
  char v37; // di
  bool v38; // si
  int v39; // eax
  unsigned int v40; // r9d
  __int64 v41; // r12
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 EventRegistration; // rax
  std::_Ref_count_base *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 (__fastcall *v50)(__int64, _QWORD, HSTRING *); // rsi
  HSTRING v51; // rcx
  int v52; // eax
  _QWORD *v53; // rax
  int v54; // edi
  unsigned __int64 *v55; // rax
  unsigned __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdi
  __int64 (__fastcall *v59)(__int64, _QWORD, _QWORD); // rsi
  unsigned int *v60; // rax
  int v61; // eax
  int v62; // [rsp+20h] [rbp-1B8h]
  int v63; // [rsp+20h] [rbp-1B8h]
  unsigned int v64; // [rsp+60h] [rbp-178h] BYREF
  struct IUwpWindowWrapperInternal *v65; // [rsp+68h] [rbp-170h] BYREF
  HSTRING v66; // [rsp+70h] [rbp-168h] BYREF
  HSTRING v67; // [rsp+78h] [rbp-160h] BYREF
  __int64 v68; // [rsp+80h] [rbp-158h] BYREF
  int v69; // [rsp+88h] [rbp-150h] BYREF
  int v70; // [rsp+8Ch] [rbp-14Ch] BYREF
  int v71; // [rsp+90h] [rbp-148h] BYREF
  int v72; // [rsp+94h] [rbp-144h] BYREF
  __int64 v73; // [rsp+98h] [rbp-140h] BYREF
  HSTRING v74; // [rsp+A0h] [rbp-138h] BYREF
  struct UwpWindowEventDispatcher *v75; // [rsp+A8h] [rbp-130h] BYREF
  struct UwpWindowEventDispatcher *v76; // [rsp+B0h] [rbp-128h]
  char v77[8]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-110h] BYREF
  struct UwpWindowEventDispatcher *v80; // [rsp+D0h] [rbp-108h] BYREF
  HSTRING v81; // [rsp+D8h] [rbp-100h] BYREF
  RTL_SRWLOCK *v82; // [rsp+E0h] [rbp-F8h] BYREF
  RTL_SRWLOCK *v83; // [rsp+E8h] [rbp-F0h] BYREF
  std::_Ref_count_base *v84[2]; // [rsp+F0h] [rbp-E8h]
  __int64 v85; // [rsp+100h] [rbp-D8h]
  HSTRING string; // [rsp+108h] [rbp-D0h] BYREF
  __int128 v87; // [rsp+110h] [rbp-C8h] BYREF
  char v88[8]; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+128h] [rbp-B0h]
  __int64 v90; // [rsp+130h] [rbp-A8h]
  int v91; // [rsp+138h] [rbp-A0h]
  char v92; // [rsp+13Ch] [rbp-9Ch]
  int v93; // [rsp+140h] [rbp-98h]
  char v94; // [rsp+144h] [rbp-94h]
  int v95; // [rsp+148h] [rbp-90h]
  char v96; // [rsp+14Ch] [rbp-8Ch]
  int v97; // [rsp+150h] [rbp-88h]
  char v98; // [rsp+154h] [rbp-84h]
  int v99; // [rsp+158h] [rbp-80h]
  char v100; // [rsp+15Ch] [rbp-7Ch]
  __int64 v101; // [rsp+160h] [rbp-78h] BYREF
  __int64 v102; // [rsp+168h] [rbp-70h] BYREF
  struct IUwpWindowWrapperInternal *v103; // [rsp+170h] [rbp-68h]
  PVOID v104; // [rsp+180h] [rbp-58h]
  char v105[8]; // [rsp+188h] [rbp-50h] BYREF
  std::_Ref_count_base *v106; // [rsp+190h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]
  __int64 v108; // [rsp+1E0h] [rbp+8h] BYREF
  unsigned int v109; // [rsp+1E8h] [rbp+10h] BYREF
  unsigned int v110; // [rsp+1F0h] [rbp+18h]
  __int64 v111; // [rsp+1F8h] [rbp+20h] BYREF

  v110 = a3;
  v109 = a2;
  v108 = (__int64)a1;
  v3 = a3;
  v72 = 0;
  v66 = 0LL;
  v76 = (struct UwpWindowEventDispatcher *)&a1[-2];
  v6 = a1 - 2;
  try
  {
    Uwlm = UwpWindowEventDispatcher::GetUwlm(v6, &v101);
    v8 = *(_QWORD *)Uwlm;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(**(_QWORD **)Uwlm + 104LL);
    v66 = 0LL;
    v10 = v9(v8, a2, &v66);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v62);
    if ( v101 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
    if ( !v66 )
      return 0LL;
    v64 = 0;
    v12 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v66 + 56LL))(v66, &v64);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x274,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v62);
    if ( !v64 )
    {
      if ( v66 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v66 + 16LL))(v66);
      return 0LL;
    }
    v68 = 0LL;
    Ptr = a1[38].Ptr;
    v104 = Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v15 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 48LL))(Ptr, &v102);
    v16 = *(_QWORD *)v15;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v15 + 80LL);
    v18 = (_QWORD *)v68;
    v68 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v18 + 16LL))(v18, *v18);
    v19 = v17(v16, v64, &v68);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27D,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v19,
        v62);
    if ( v102 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v85 = 0LL;
    v20 = *(_QWORD *)v68;
    v78 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v20 + 48))(v68, &v78);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C6,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v21,
        v62);
    v69 = 0;
    v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v78 + 56LL))(v78, &v69);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1CC,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v22,
        v62);
    v70 = v69;
    v23 = v78;
    v85 = v78;
    *(_OWORD *)v84 = 0LL;
    v88[0] = 0;
    v89 = 0LL;
    v90 = 0LL;
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 6;
    v96 = 0;
    v97 = 0;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    LOBYTE(v111) = 0;
    v65 = 0LL;
    v83 = a1 + 59;
    AcquireSRWLockExclusive(a1 + 59);
    v24 = a1 + 59;
    v82 = a1 + 59;
    v25 = 0LL;
    v103 = 0LL;
    v72 = 4;
    v26 = (struct IUwpWindowWrapperInternal **)a1[46].Ptr;
    v27 = (struct IUwpWindowWrapperInternal **)a1[47].Ptr;
    while ( v26 != v27 )
    {
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, char *))(*(_QWORD *)*v26 + 288LL))(
                        *v26,
                        v77) == a2 )
      {
        v28 = *v26;
        v25 = v28;
        v103 = *v26;
        if ( v28 )
          (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v28 + 8LL))(v28);
        break;
      }
      ++v26;
    }
    v65 = v25;
    if ( v25 )
    {
      v36 = (volatile signed __int32 *)v84[1];
      v37 = v111;
LABEL_40:
      if ( v24 )
        ReleaseSRWLockExclusive(v24);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &v65,
        &v79);
      v38 = 0;
      v71 = 0;
      v39 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v79 + 352LL))(v79, &v71);
      if ( v39 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2B4,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v39,
          v62);
      if ( v71 )
      {
        if ( !v37 )
        {
          wil::AcquireSRWLockExclusive(&v83, v83);
          UwpWindowEventDispatcher::WindowIdChangedEventHelper::CollectOriginalValues(
            (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v88,
            v25);
          v57 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 200LL))(
                  v25,
                  v68,
                  v64,
                  v3);
          if ( v57 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x2C2,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v57,
              v62);
          UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
            (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v88,
            v25);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v83);
        }
        v41 = v108;
      }
      else
      {
        v67 = 0LL;
        v41 = v108;
        v48 = (*(__int64 (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(v108 + 304) + 48LL))(
                *(_QWORD *)(v108 + 304),
                &v82);
        v49 = *(_QWORD *)v48;
        v50 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(**(_QWORD **)v48 + 56LL);
        v51 = v67;
        v67 = 0LL;
        if ( v51 )
          (*(void (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v51 + 16LL))(v51, *(_QWORD *)v51);
        v52 = v50(v49, v64, &v67);
        v38 = 0;
        if ( v52 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2BA,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v52,
            v62);
        if ( v82 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v82->Ptr + 2))(v82);
        if ( v67 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v67 + 16LL))(v67);
        v37 = v111;
      }
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          LODWORD(v111) = 0;
          SHRegGetBOOLWithREGSAM(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
            L"DisableAppRecoveryAfterShellRestart",
            v40,
            (int *)&v111);
          if ( v37 )
          {
            LODWORD(v108) = 0;
            v53 = (_QWORD *)wil::com_query<INtUserViewWrapper,wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> &>(
                              &v75,
                              &v65);
            v54 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(*(_QWORD *)*v53 + 88LL))(
                    *v53,
                    L"ExperienceId",
                    &v108);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v75);
            if ( v54 >= 0 )
              v38 = (_DWORD)v108 != 0;
            wil::AcquireSRWLockExclusive(&v74, v41 + 472);
            if ( (_DWORD)v111 || !v38 )
            {
              v58 = *(_QWORD *)(v41 + 304);
              v59 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v58 + 64LL);
              v60 = (unsigned int *)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, char *))(*(_QWORD *)v25 + 288LL))(
                                      v25,
                                      v77);
              v61 = v59(v58, *v60, 0LL);
              if ( v61 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x2E8,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v61,
                  v63);
            }
            else if ( *(_QWORD *)(v41 + 400) == *(_QWORD *)(v41 + 408) )
            {
              std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy> const &>(
                (__int64 **)(v41 + 392),
                *(_QWORD **)(v41 + 400),
                (__int64 *)&v65);
              v25 = v65;
            }
            else
            {
              wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                *(_QWORD *)(v41 + 400),
                &v65);
              *(_QWORD *)(v41 + 400) += 8LL;
            }
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v74);
          }
        }
      }
      else if ( v37 )
      {
        v42 = *((_QWORD *)v84[0] + 3);
        v108 = v42;
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
        UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(v76, v79, 0LL);
      }
      else if ( v88[0] )
      {
        UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents(
          (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v88,
          v76,
          (__int64 (__fastcall ***)(struct IUwpWindowWrapperInternal *, GUID *, __int64 *))v25);
      }
      v43 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, int *))(*(_QWORD *)v25 + 288LL))(v25, &v72);
      v108 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v25 + 272LL))(v25);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowAdded<unsigned short const *,unsigned int>(
        &v108,
        v43);
      if ( v79 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
      if ( v25 )
        (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v25 + 16LL))(v25);
      UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper((UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v88);
      if ( v36 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v36);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v68 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
      if ( v66 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v66 + 16LL))(v66);
      return 0LL;
    }
    v29 = v69 == 0;
    v67 = 0LL;
    v30 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v23 + 48LL))(v23, &v67);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x294,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v30,
        v62);
    string = 0LL;
    v31 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v66 + 64LL))(v66, &string);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x297,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v31,
        v62);
    LODWORD(v111) = 0;
    v32 = v76;
    if ( v29 )
    {
      v80 = (struct UwpWindowEventDispatcher *)v68;
      v81 = v67;
      v74 = v66;
      v75 = v76;
      v55 = (unsigned __int64 *)wil::MakeOrThrow<LegacyUwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &,int>(
                                  (unsigned int)&v73,
                                  (unsigned int)&v75,
                                  (unsigned int)&v74,
                                  (unsigned int)&v81,
                                  (__int64)&v70,
                                  (__int64)&v109,
                                  (__int64)&v80,
                                  (__int64)&v64);
      v56 = *v55;
      *v55 = 0LL;
      v25 = (struct IUwpWindowWrapperInternal *)((v56 + 24) & ((unsigned __int128)-(__int128)v56 >> 64));
      v65 = v25;
      if ( v73 )
      {
        v73 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::Release();
      }
    }
    else
    {
      v75 = (struct UwpWindowEventDispatcher *)v68;
      v74 = v67;
      v81 = v66;
      v80 = v76;
      v33 = (unsigned __int64 *)wil::MakeOrThrow<UwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &,int>(
                                  (unsigned int)&v73,
                                  (unsigned int)&v80,
                                  (unsigned int)&v81,
                                  (unsigned int)&v74,
                                  (__int64)&v70,
                                  (__int64)&v109,
                                  (__int64)&v75,
                                  (__int64)&v64);
      v34 = *v33;
      *v33 = 0LL;
      v25 = (struct IUwpWindowWrapperInternal *)((v34 + 24) & ((unsigned __int128)-(__int128)v34 >> 64));
      v65 = v25;
      v35 = v25;
      if ( !v73 )
      {
LABEL_34:
        v3 = v110;
        if ( v110 )
        {
          v36 = (volatile signed __int32 *)v84[1];
        }
        else
        {
          v44 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v35 + 280LL))(v35);
          v45 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v35 + 272LL))(v35);
          EventRegistration = UwpWindowEventDispatcher::GetEventRegistration(v32, v105, v45, v44);
          v47 = *(std::_Ref_count_base **)EventRegistration;
          v36 = *(volatile signed __int32 **)(EventRegistration + 8);
          *(_QWORD *)EventRegistration = 0LL;
          *(_QWORD *)(EventRegistration + 8) = 0LL;
          v84[0] = v47;
          v84[1] = (std::_Ref_count_base *)v36;
          if ( v106 )
            std::_Ref_count_base::_Decref(v106);
          v87 = 0LL;
          if ( v36 )
          {
            _InterlockedIncrement(v36 + 2);
            v3 = v110;
            v23 = v85;
            v36 = (volatile signed __int32 *)v84[1];
            v25 = v65;
            v24 = v82;
          }
          *(_QWORD *)&v87 = v47;
          *((_QWORD *)&v87 + 1) = v36;
          wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
            &v111,
            v25);
          UwpWindowEventDispatcher::CacheWindowWrapper((__int64)v32, &v111, &v87, 0LL);
        }
        v37 = 1;
        LOBYTE(v111) = 1;
        if ( string )
          WindowsDeleteString(string);
        if ( v67 )
          WindowsDeleteString(v67);
        goto LABEL_40;
      }
      v73 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release();
    }
    v35 = v25;
    goto LABEL_34;
  }
  catch ( ... )
  {
    LODWORD(v108) = wil::details::in1diag3::Return_CaughtException(
                      retaddr,
                      (void *)0x2F5,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      v11);
    return (unsigned int)v108;
  }
  return result;
}
