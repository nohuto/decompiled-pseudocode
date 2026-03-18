/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800C865C
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18023EBE0 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18023F210 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800C8C00 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800C8F00 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801EDC00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@det.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18020BB0C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211C0C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18021ECD0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18022DAEC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180234C5C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180234FBC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180289720 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@de.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(
        __int64 a1)
{
  signed __int32 v1; // ebx
  signed __int32 v3; // esi
  unsigned __int8 v4; // bl
  unsigned int v5; // r14d
  __m128i *v6; // rax
  unsigned int v7; // r9d
  __m128i v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // r8
  int v11; // edi
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rcx
  signed __int32 i; // edx
  signed __int32 v18; // eax
  const char *v19; // [rsp+20h] [rbp-69h]
  enum wil_VariantReportingKind *v20; // [rsp+30h] [rbp-59h]
  unsigned __int64 v21; // [rsp+40h] [rbp-49h]
  RTL_SRWLOCK *v22; // [rsp+50h] [rbp-39h] BYREF
  __m128i v23; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+78h] [rbp-11h]
  char v25[96]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v27; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v28; // [rsp+100h] [rbp+77h] BYREF
  __int16 v29; // [rsp+104h] [rbp+7Bh]
  __int64 v30; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_DWORD *)a1;
  if ( (*(_BYTE *)a1 & 6) != 6 )
  {
    v14 = wil::details::EnsureSubscribedToFeatureConfigurationChanges((wil::details *)a1);
    LODWORD(v26) = 0;
    v15 = v14;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetCurrentFeatureEnabledState(
      v16,
      &v30,
      &v26);
    if ( !v15 )
      LODWORD(v26) = 0;
    for ( i = v1; ; i = v18 )
    {
      v1 = i;
      if ( (_DWORD)v26 && (i & 2) == 0 )
        v1 = v30 & 0x9C1 | i & 0xFFFFF63E | 2;
      if ( (i & 4) == 0 )
        v1 = v1 & 0xFFFFFBFF | v30 & 0x400 | 4;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v1, i);
      if ( i == v18 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_180405850);
      v22 = &stru_180405850;
      if ( !v15
        || v15 != dword_180405864
        || (v23.m128i_i64[0] = 0LL,
            v23.m128i_i64[1] = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_180405898, &v23, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFF7C1);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v22);
    }
    if ( (v1 & 2) == 0 )
      LOBYTE(v1) = v1 & 0x3E | v30 & 0xC1;
  }
  v3 = *(_DWORD *)a1;
  v4 = v1 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v26 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetCachedFeatureEnabledState(
                       a1,
                       &v27);
    LOWORD(v3) = v26;
  }
  v28 = 0;
  v29 = 2;
  LODWORD(v27) = 3;
  v5 = 4 * (v4 ^ 1) + 2;
  v6 = (__m128i *)wil_details_FeatureReporting_RecordUsageInCache(v25, a1 + 8, v5);
  v8 = *v6;
  v9 = v6[1].m128i_i64[0];
  LODWORD(v6) = _mm_cvtsi128_si32(*v6);
  v23 = v8;
  v24 = v9;
  if ( (_DWORD)v6 )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      0x2FBB714u,
      (struct wil_details_FeatureReportingCache *)(a1 + 8));
    v8 = v23;
  }
  v10 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  if ( (_DWORD)v10 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x2FBB714,
      _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)),
      v10,
      v7,
      v19);
  v11 = v24;
  if ( !(_DWORD)v24 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v3 & 0x400) != 0 )
  {
    v13 = 4 * (v4 ^ 1) + 2;
    if ( (v3 & 0x800) != 0 )
      v13 = v5 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x2FBB714, v13, 0, v7, v19);
  }
  if ( !v11 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v10) = 2;
      g_wil_details_realtimeFeatureUsageHook(50050836LL, v5, v10);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v20) = 0;
      if ( (char *)g_wil_details_pfnFeatureLoggingHook == (char *)wil::details::FeatureLoggingHook )
        wil::details::FeatureLoggingHook(
          (wil::details *)0x2FBB714,
          (unsigned int)&v28,
          0LL,
          (const struct FEATURE_ERROR *)v4,
          (__int64)&v27,
          0LL,
          v20,
          1u,
          v21);
      else
        g_wil_details_pfnFeatureLoggingHook(50050836LL, &v28, 0LL, v4, &v27, 0LL, 0, 1LL);
    }
  }
  return v4;
}
