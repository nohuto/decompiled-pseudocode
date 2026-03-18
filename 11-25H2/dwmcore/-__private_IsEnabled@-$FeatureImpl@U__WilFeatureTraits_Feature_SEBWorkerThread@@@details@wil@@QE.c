/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QEAA_NXZ @ 0x18024B7E4
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800C9618 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C9890 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x1801FB8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     ??1CFSVPProvider@@QEAA@XZ @ 0x18024B64C (--1CFSVPProvider@@QEAA@XZ.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800C8C00 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800C8F00 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18020BB0C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211C0C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18021ECD0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18022DAEC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180234C5C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180234FBC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18024B6B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@detail.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18024BA74 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx
  unsigned int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rcx
  signed __int32 i; // edx
  signed __int32 v7; // eax
  volatile signed __int32 v8; // esi
  unsigned __int8 v9; // bl
  unsigned int v10; // r14d
  __m128i *v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rdx
  enum wil_VariantReportingKind *v18; // [rsp+30h] [rbp-59h]
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp-39h] BYREF
  __m128i v20; // [rsp+58h] [rbp-31h] BYREF
  __int64 v21; // [rsp+78h] [rbp-11h]
  char v22[96]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v23; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v25; // [rsp+100h] [rbp+77h] BYREF
  __int16 v26; // [rsp+104h] [rbp+7Bh]
  __int64 v27; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *a1;
  if ( (*(_BYTE *)a1 & 6) != 6 )
  {
    v3 = wil::details::EnsureSubscribedToFeatureConfigurationChanges((wil::details *)a1);
    LODWORD(v23) = 0;
    v4 = v3;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::GetCurrentFeatureEnabledState(v5, &v27, &v23);
    for ( i = v1; ; i = v7 )
    {
      v1 = i;
      if ( (_DWORD)v23 && (i & 2) == 0 )
        v1 = v27 & 0x9C1 | i & 0xFFFFF63E | 2;
      if ( (i & 4) == 0 )
        v1 = v1 & 0xFFFFFBFF | v27 & 0x400 | 4;
      v7 = _InterlockedCompareExchange(a1, v1, i);
      if ( i == v7 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_180405850);
      v19 = &stru_180405850;
      if ( !v4
        || v4 != dword_180405864
        || (v20.m128i_i64[0] = 3LL,
            v20.m128i_i64[1] = (__int64)a1,
            !wil::details_abi::heap_buffer::push_back((void **)&unk_180405898, &v20, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFB);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
    }
    if ( (v1 & 2) == 0 )
      LOBYTE(v1) = v1 & 0x3E | v27 & 0xC1;
  }
  v8 = *a1;
  v9 = v1 & 1;
  if ( (*a1 & 4) == 0 )
  {
    v23 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
             &v24);
    LOWORD(v8) = v23;
  }
  v25 = 0;
  v26 = 2;
  LODWORD(v24) = 3;
  v10 = 4 * (v9 ^ 1) + 2;
  v11 = (__m128i *)wil_details_FeatureReporting_RecordUsageInCache((__int64)v22, a1 + 2, v10);
  v12 = *v11;
  v13 = v11[1].m128i_i64[0];
  LODWORD(v11) = _mm_cvtsi128_si32(*v11);
  v20 = v12;
  v21 = v13;
  if ( (_DWORD)v11 )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      55113933,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v12 = v20;
  }
  v14 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
  if ( (_DWORD)v14 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x348F8CD,
      (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)),
      v14);
  v15 = v21;
  if ( !(_DWORD)v21 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v8 & 0x400) != 0 )
  {
    v16 = v10;
    if ( (v8 & 0x800) != 0 )
      LODWORD(v16) = v10 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x348F8CD, v16, 0LL);
  }
  if ( !v15 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v14) = 2;
      g_wil_details_realtimeFeatureUsageHook(55113933LL, v10, v14);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v18) = 0;
      if ( (char *)g_wil_details_pfnFeatureLoggingHook == (char *)wil::details::FeatureLoggingHook )
        wil::details::FeatureLoggingHook(
          (wil::details *)0x348F8CD,
          (unsigned __int16 *)&v25,
          0LL,
          (const struct FEATURE_ERROR *)v9,
          (int *)&v24,
          0LL,
          v18,
          1LL);
      else
        g_wil_details_pfnFeatureLoggingHook(55113933LL, &v25, 0LL, v9, &v24, 0LL, 0, 1LL);
    }
  }
  return v9;
}
