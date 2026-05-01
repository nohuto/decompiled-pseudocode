/*
 * XREFs of ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180403228
 * Callers:
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x180402280 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804027C0 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1800CDBC8 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180105ECC (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180185150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1803FDA90 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_KPEBG@TaskFlowDataEngineTelemetry@@SAXAEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_K$$QEAPEBG@Z @ 0x1804012A0 (--$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ??$find@PEAUIApplicationView@@UApplicationViewComparator@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@$0A@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@1@AEBQEAUIApplicationView@@@Z @ 0x180401884 (--$find@PEAUIApplicationView@@UApplicationViewComparator@AppViewInfoCache@DataEngine@TaskFlow@Sh.c)
 *     ??$try_emplace@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804018DC (--$try_emplace@$$V@-$map@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppVi.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x180401CA8 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@@Z @ 0x180402A80 (-Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x180403978 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x180403B40 (-TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?get_system_time@filetime@wil@@YA?AU_FILETIME@@XZ @ 0x180403E78 (-get_system_time@filetime@wil@@YA-AU_FILETIME@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 **v8; // r13
  struct IApplicationView *v9; // rdx
  __int64 v11; // rcx
  HWND WindowForView; // r12
  __int64 (__fastcall **v13)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v14; // ebx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v15; // rcx
  char v16; // bl
  unsigned int ProcessIdForApplicationView; // eax
  unsigned __int64 v18; // r9
  unsigned int v19; // edx
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  int v22; // r15d
  __int64 AppIdInfoForApplicationView; // rbx
  int v24; // r12d
  unsigned __int64 v25; // r9
  __int64 v26; // rbx
  wil::filetime *v27; // rcx
  RTL_SRWLOCK *system_time; // rbx
  int v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // r14
  __int64 v32; // rcx
  HSTRING_HEADER *v33; // rax
  PVOID Reserved1; // rcx
  int v35; // eax
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-138h]
  int v38; // [rsp+20h] [rbp-138h]
  _WORD v39[2]; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-F4h]
  __int64 (__fastcall ***v41)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+68h] [rbp-F0h] BYREF
  LPCWSTR pszPath; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+78h] [rbp-E0h] BYREF
  bool v44[8]; // [rsp+80h] [rbp-D8h] BYREF
  int v45; // [rsp+88h] [rbp-D0h]
  RTL_SRWLOCK *v46; // [rsp+90h] [rbp-C8h] BYREF
  int v47; // [rsp+98h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+9Ch] [rbp-BCh]
  LPCWSTR v49; // [rsp+A0h] [rbp-B8h] BYREF
  void *Src; // [rsp+A8h] [rbp-B0h] BYREF
  void *v51; // [rsp+B0h] [rbp-A8h] BYREF
  HWND v52[2]; // [rsp+B8h] [rbp-A0h] BYREF
  int v53; // [rsp+C8h] [rbp-90h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-78h]
  __int64 *v56; // [rsp+E8h] [rbp-70h]
  HSTRING_HEADER v57; // [rsp+F0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v48 = a3;
  v49 = (LPCWSTR)a1;
  v56 = a2;
  v53 = a3;
  v45 = 0;
  v43 = 0LL;
  v39[0] = 0;
  v40 = 0;
  pszPath = 0LL;
  wil::AcquireSRWLockExclusive(&v46, (RTL_SRWLOCK *)(a1 + 248));
  v8 = (__int64 **)(a1 + 256);
  v52[0] = (HWND)a4;
  v9 = (struct IApplicationView *)std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>,0>>::find<IApplicationView *,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,0>(
                                    (__int64 **)(a1 + 256),
                                    &Src,
                                    v52);
  if ( *(_QWORD *)v9 == *(_QWORD *)(a1 + 256) )
  {
    *(_DWORD *)v44 = 0;
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), bool *))(*a4)[27])(
      a4,
      v44);
    if ( *(_DWORD *)v44 != 1 )
    {
      LOBYTE(v39[0]) = 1;
      *a2 = 0LL;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v39);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
      return a2;
    }
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a4, v9);
  v52[0] = WindowForView;
  if ( !WindowForView )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(v11);
    HIBYTE(v39[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)(a1 + 256),
      (struct IApplicationView *)a4);
    *a2 = 0LL;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v39);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
    return a2;
  }
  v13 = *a4;
  *(_QWORD *)v44 = 0LL;
  v14 = (*v13)((ApplicationViewHelpers *)a4, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, (__int64 *)v44);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v44);
  *(_DWORD *)v44 = v14 >= 0;
  v41 = a4;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>,0>>::find<IApplicationView *,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,0>(
    v8,
    &Src,
    &v41);
  if ( Src == *v8 )
  {
    v16 = 0;
  }
  else
  {
    *(_QWORD *)&v54 = *((unsigned int *)Src + 10);
    *((_QWORD *)&v54 + 1) = (char *)Src + 48;
    ProcessIdForApplicationView = *((_DWORD *)Src + 20);
    v55 = ProcessIdForApplicationView;
    v15 = 0LL;
    *(_OWORD *)&v57.Reserved.Reserved1 = v54;
    *(_QWORD *)&v57.Reserved.Reserved2[16] = ProcessIdForApplicationView;
    v16 = 1;
    if ( ProcessIdForApplicationView )
    {
      v40 = ProcessIdForApplicationView;
      goto LABEL_15;
    }
  }
  if ( a3 == 1 )
  {
    ProcessIdForApplicationView = v40;
  }
  else
  {
    ProcessIdForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetProcessIdForApplicationView(
                                    v15,
                                    WindowForView,
                                    (struct IApplicationView *)a4,
                                    v44[0]);
    v40 = ProcessIdForApplicationView;
    if ( ProcessIdForApplicationView )
    {
      wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
        &v41,
        (__int64)a4);
      std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::try_emplace<>(
        (__int64 *)v8,
        (__int64)&Src,
        (__int64 *)&v41,
        v18);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
      v19 = v40;
      *((_DWORD *)Src + 20) = v40;
      ProcessIdForApplicationView = v19;
    }
  }
  if ( !v16 )
  {
    v20 = -1LL;
    goto LABEL_21;
  }
LABEL_15:
  v20 = -1LL;
  if ( LODWORD(v57.Reserved.Reserved1) != -1 )
  {
    v21 = *(_QWORD *)&v57.Reserved.Reserved2[8];
    if ( *(_QWORD *)(*(_QWORD *)&v57.Reserved.Reserved2[8] + 16LL) )
    {
      if ( *(_QWORD *)(*(_QWORD *)&v57.Reserved.Reserved2[8] + 24LL) > 7uLL )
        v21 = **(_QWORD **)&v57.Reserved.Reserved2[8];
      wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v41,
        v21,
        -1LL);
      v22 = 4;
      v45 = 4;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        (void **)&pszPath,
        (void **)&v41);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v41);
      goto LABEL_25;
    }
  }
LABEL_21:
  AppIdInfoForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
                                  v15,
                                  &Src,
                                  a4,
                                  ProcessIdForApplicationView);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    (void **)&pszPath,
    (void **)(AppIdInfoForApplicationView + 8));
  v24 = *(_DWORD *)AppIdInfoForApplicationView;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v51);
  Src = (void *)pszPath;
  if ( !pszPath || v24 == -1 )
  {
    HIBYTE(v39[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v8,
      (struct IApplicationView *)a4);
    *a2 = 0LL;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v39);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
    return a2;
  }
  do
    ++v20;
  while ( pszPath[v20] );
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    &v41,
    (__int64)a4);
  std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::try_emplace<>(
    (__int64 *)v8,
    (__int64)&v54,
    (__int64 *)&v41,
    v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
  v26 = v54;
  std::wstring::assign((void **)(v54 + 48), Src, v20);
  *(_DWORD *)(v26 + 40) = v24;
  v22 = v45;
LABEL_25:
  if ( v48 == 1 )
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v8,
      (struct IApplicationView *)a4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
  system_time = (RTL_SRWLOCK *)wil::filetime::get_system_time(v27);
  v46 = system_time;
  v41 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v52[0];
  v47 = 0;
  v29 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*a4)[43])(
          a4,
          &v47);
  if ( v29 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x128,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v29,
      v37);
  v31 = *((_QWORD *)v49 + 34);
  Src = *(void **)(*(_QWORD *)v31 + 48LL);
  v32 = v43;
  v43 = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( pszPath )
  {
    v49 = pszPath;
    v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, &v49, v30);
    v45 = v22 | 2;
    Reserved1 = v33[1].Reserved.Reserved1;
  }
  else
  {
    LODWORD(Reserved1) = 0;
  }
  v38 = (int)Reserved1;
  v35 = ((__int64 (__fastcall *)(__int64, _QWORD, RTL_SRWLOCK *, HWND))Src)(v31, v48, system_time, v52[0]);
  if ( v35 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v35,
      v38);
  v49 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(pszPath);
  TaskFlowDataEngineTelemetry::AppExecutionDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::AppViewExecutionState &,__int64 &,unsigned __int64 &,unsigned short const *>(
    &v53,
    (__int64 *)&v46,
    (__int64 *)&v41,
    (__int64 *)&v49);
  LOBYTE(v39[0]) = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v39);
  v36 = v43;
  v43 = 0LL;
  *a2 = v36;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
  return a2;
}
