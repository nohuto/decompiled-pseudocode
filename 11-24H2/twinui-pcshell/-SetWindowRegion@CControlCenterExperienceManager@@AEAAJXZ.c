/*
 * XREFs of ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B7500
 * Callers:
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E5D14 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1801F57C0 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     _lambda_ca4d82d8000fbdd2cd63e8e98e84d882_::operator() @ 0x1803739F0 (_lambda_ca4d82d8000fbdd2cd63e8e98e84d882_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::IToastCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_806356690b8d9b35a8b472660a9fa926___1_Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke @ 0x180375060 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180375060.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B7678 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6891a98f73bf2e0622c40a147f1ebd9e___ @ 0x180372AFC (Windows--Internal--ComTaskPool--QueueTask__lambda_6891a98f73bf2e0622c40a147f1ebd9e___.c)
 *     _lambda_6891a98f73bf2e0622c40a147f1ebd9e_::_lambda_6891a98f73bf2e0622c40a147f1ebd9e_ @ 0x180372FB0 (_lambda_6891a98f73bf2e0622c40a147f1ebd9e_--_lambda_6891a98f73bf2e0622c40a147f1ebd9e_.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SetWindowRegion(CControlCenterExperienceManager *this)
{
  ExperienceManagerUtils *v2; // rax
  HMONITOR v3; // rdx
  const char *v4; // r9
  int PerMonitorDpi; // eax
  int v7; // eax
  ExperienceManagerUtils *v8; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v9; // rdx
  int IsThreadRTL; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  char v18; // [rsp+40h] [rbp-29h] BYREF
  bool v19; // [rsp+41h] [rbp-28h] BYREF
  POINT pt; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  __int128 v22; // [rsp+58h] [rbp-11h] BYREF
  __int128 v23; // [rsp+68h] [rbp-1h] BYREF
  char v24; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( *((float *)this + 168) <= 0.0 || *((float *)this + 169) <= 0.0 )
    return 0LL;
  pt = 0LL;
  v2 = (ExperienceManagerUtils *)MonitorFromPoint(0LL, 1u);
  if ( v2 == (ExperienceManagerUtils *)-1LL )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x32E,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
             v4);
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi(v2, v3);
  v7 = MulDiv(68, PerMonitorDpi, 96);
  v8 = (ExperienceManagerUtils *)*((_QWORD *)this + 18);
  *((_DWORD *)this + 191) = v7;
  v21 = ExperienceManagerUtils::WindowFromViewWrapper(v8, v9);
  IsThreadRTL = Mirror_IsThreadRTL();
  v11 = *(_OWORD *)((char *)this + 664);
  v12 = *(_OWORD *)((char *)this + 680);
  v18 = *((_BYTE *)this + 445);
  pt.x = *((_DWORD *)this + 191);
  v19 = IsThreadRTL != 0;
  v23 = v11;
  v22 = v12;
  v13 = lambda_6891a98f73bf2e0622c40a147f1ebd9e_::_lambda_6891a98f73bf2e0622c40a147f1ebd9e_(
          (unsigned int)&v24,
          (unsigned int)&v21,
          (unsigned int)&v19,
          (unsigned int)&v23,
          (__int64)&pt,
          (__int64)&v18,
          (__int64)&v22);
  v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_6891a98f73bf2e0622c40a147f1ebd9e___(
          v15,
          v14,
          *((unsigned int *)this + 115),
          v13);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x370,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  return v17;
}
