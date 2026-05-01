/*
 * XREFs of ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180485CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x18014E648 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18017FED4 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801DAB34 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ShouldSaveLastFloatingPosition @ 0x1801F52C0 (ShouldSaveLastFloatingPosition.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x18047A200 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?GetMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x18047A238 (-GetMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@XZ.c)
 *     ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x18047A280 (-GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA-AW4DEVICE_SCALE_FACTOR@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEBU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@1AEBU123@$$QEAI3@Z @ 0x180484574 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEBU123@II@TouchKeyboardExperienceTe.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804872D4 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x180487790 (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDragEnded(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v9; // rsi
  RTL_SRWLOCK *v10; // rdi
  __m128i v11; // xmm7
  __m128i v12; // xmm6
  HMONITOR CurrentMonitor; // rsi
  _BYTE *v14; // r14
  RTL_SRWLOCK *v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  __m128i *MonitorRect; // rax
  __int32 ScaleFactor; // ecx
  __int64 v21; // [rsp+38h] [rbp-B1h] BYREF
  _DWORD *v22; // [rsp+40h] [rbp-A9h] BYREF
  RTL_SRWLOCK *v23; // [rsp+48h] [rbp-A1h] BYREF
  _OWORD v24[4]; // [rsp+58h] [rbp-91h] BYREF
  __int64 v25; // [rsp+98h] [rbp-51h]
  unsigned int v26; // [rsp+A0h] [rbp-49h]
  __m128i v27; // [rsp+A8h] [rbp-41h] BYREF
  __m128i v28; // [rsp+B8h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+47h]

  LODWORD(v21) = a2;
  v9 = a7;
  v22 = a7;
  *(_OWORD *)a6 = *a3;
  *a4 = 0;
  *a5 = 0;
  *a7 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v23, (RTL_SRWLOCK *)(a1 + 800));
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    (_QWORD *)(a1 + 736),
    &v27,
    &v21);
  if ( v27.m128i_i64[0] == *(_QWORD *)(a1 + 744) )
  {
    v10 = (RTL_SRWLOCK *)(a1 + 232);
    goto LABEL_25;
  }
  v11 = *(__m128i *)(v27.m128i_i64[0] + 20);
  v24[0] = v11;
  v24[1] = *(_OWORD *)(v27.m128i_i64[0] + 36);
  v24[2] = *(_OWORD *)(v27.m128i_i64[0] + 52);
  v12 = *(__m128i *)(v27.m128i_i64[0] + 68);
  v24[3] = v12;
  v25 = *(_QWORD *)(v27.m128i_i64[0] + 84);
  v26 = *(_DWORD *)(v27.m128i_i64[0] + 92);
  v27 = *(__m128i *)a6;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v26, &v27);
  v10 = (RTL_SRWLOCK *)(a1 + 232);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    if ( KeyboardHosting::MonitorInformation::GetMonitorHandle((RTL_SRWLOCK *)(a1 + 232)) != CurrentMonitor )
      KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 232), CurrentMonitor);
    v14 = (_BYTE *)(a1 + 860);
    if ( !*(_BYTE *)(a1 + 860)
      || KeyboardHosting::MonitorInformation::GetMonitorHandle((RTL_SRWLOCK *)(a1 + 400)) == CurrentMonitor )
    {
      goto LABEL_14;
    }
    v15 = (RTL_SRWLOCK *)(a1 + 400);
  }
  else
  {
    if ( v10->Ptr != CurrentMonitor )
      KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 232), CurrentMonitor);
    v14 = (_BYTE *)(a1 + 860);
    if ( !*(_BYTE *)(a1 + 860) )
      goto LABEL_14;
    v15 = (RTL_SRWLOCK *)(a1 + 400);
    if ( *(HMONITOR *)(a1 + 400) == CurrentMonitor )
      goto LABEL_14;
  }
  KeyboardHosting::MonitorInformation::SetMonitor(v15, CurrentMonitor);
LABEL_14:
  v9 = v22;
  *v22 = 3;
  if ( ShouldSaveLastFloatingPosition((__int64)v24 + 4) )
  {
    v27.m128i_i64[0] = *(_QWORD *)a6;
    v16 = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            (const struct Windows::Foundation::Point *)&v27,
            a2);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_32;
    }
    if ( *v14 )
      KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (const struct Windows::Foundation::Point *)&v27);
    v9 = v22;
  }
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) == 2
    && ((unsigned __int8)_mm_cvtsi128_si32(v12) || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v12, 1))) )
  {
    *(_DWORD *)(a1 + 812) = *(_DWORD *)a6;
    *(_DWORD *)(a1 + 816) = *(_DWORD *)(a6 + 4);
    *(_BYTE *)(a1 + 820) = 1;
    *(_DWORD *)(a1 + 856) = a2;
  }
  *(_BYTE *)(a1 + 808) = 1;
LABEL_25:
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    MonitorRect = (__m128i *)KeyboardHosting::MonitorInformation::GetMonitorRect((__int64)v10, &v28);
  }
  else
  {
    v27 = *(__m128i *)(a1 + 240);
    MonitorRect = &v27;
  }
  v28 = *MonitorRect;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    ScaleFactor = KeyboardHosting::MonitorInformation::GetScaleFactor(v10);
  else
    ScaleFactor = *(_DWORD *)(a1 + 272);
  LODWORD(v22) = *v9;
  v27.m128i_i32[0] = ScaleFactor;
  TouchKeyboardExperienceTelemetryLogger::HandleDragEnded<unsigned int &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect const &,unsigned int,unsigned int>(
    (unsigned int *)&v21,
    (const struct Windows::Foundation::Rect *)a6,
    (const struct Windows::Foundation::Rect *)(a1 + 176),
    (const struct Windows::Foundation::Rect *)&v28,
    (unsigned int *)&v27,
    (unsigned int *)&v22);
  v17 = 0;
LABEL_32:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
  return v17;
}
