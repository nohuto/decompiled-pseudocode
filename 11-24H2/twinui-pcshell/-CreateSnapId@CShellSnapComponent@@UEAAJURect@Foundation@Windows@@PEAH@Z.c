/*
 * XREFs of ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18059DE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18008B368 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EC0F4 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$emplace@AEAHAEAURect@Foundation@Windows@@@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAHAEAURect@Foundation@Windows@@@Z @ 0x18059B358 (--$emplace@AEAHAEAURect@Foundation@Windows@@@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@.c)
 *     ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059D05C (--1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x1805A10C4 (-StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?Stop@CreateSnapId@CSnapComponentTelemetry@@QEAAXH@Z @ 0x1805A15E8 (-Stop@CreateSnapId@CSnapComponentTelemetry@@QEAAXH@Z.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A2A30 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CShellSnapComponent::CreateSnapId(__int64 a1, __int64 a2, _DWORD *a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  LONG v8; // ecx
  HMONITOR v9; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HMONITOR, SnapRectHelpers **); // rbx
  int v12; // eax
  int v13; // ecx
  SnapRectHelpers *v15; // [rsp+20h] [rbp-1B8h] BYREF
  RTL_SRWLOCK *v16; // [rsp+28h] [rbp-1B0h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-1A8h] BYREF
  RECT rc; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v19[42]; // [rsp+50h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  *a3 = -1;
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"CreateSnapId");
  v19[0] = &CSnapComponentTelemetry::CreateSnapId::`vftable';
  CSnapComponentTelemetry::CreateSnapId::StartActivity(
    (CSnapComponentTelemetry::CreateSnapId *)v19,
    (const struct Windows::Foundation::Rect *)a2);
  v6 = *(float *)(a2 + 4) + *(float *)(a2 + 12);
  v7 = *(float *)a2 + *(float *)(a2 + 8);
  v8 = (int)*(float *)(a2 + 4);
  rc.left = (int)*(float *)a2;
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v6;
  v9 = MonitorFromRect(&rc, 0);
  if ( !v9 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x383,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)0x80070057LL,
      (int)v15);
  v15 = 0LL;
  v10 = *(_QWORD *)(a1 + 88);
  v11 = *(__int64 (__fastcall **)(__int64, HMONITOR, SnapRectHelpers **))(*(_QWORD *)v10 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v15);
  v12 = v11(v10, v9, &v15);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x386,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v12,
      (int)v15);
  if ( !(unsigned int)SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)&rc, v15) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x389,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)0x80070057LL,
      (int)v15);
  wil::AcquireSRWLockExclusive(&v16, (RTL_SRWLOCK *)(a1 + 1408));
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::emplace<int &,Windows::Foundation::Rect &>(
    (float *)(a1 + 1424),
    (__int64)v17,
    (_DWORD *)(a1 + 1416),
    (_OWORD *)a2);
  CShellSnapComponent::UpdateLaunchSnappedBehavior(a1 - 128);
  v13 = *(_DWORD *)(a1 + 1416);
  *(_DWORD *)(a1 + 1416) = v13 + 1;
  *a3 = v13;
  CSnapComponentTelemetry::CreateSnapId::Stop((CSnapComponentTelemetry::CreateSnapId *)v19, *(_DWORD *)(a1 + 1416));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  CSnapComponentTelemetry::CreateSnapId::~CreateSnapId((CSnapComponentTelemetry::CreateSnapId *)v19);
  return 0LL;
}
