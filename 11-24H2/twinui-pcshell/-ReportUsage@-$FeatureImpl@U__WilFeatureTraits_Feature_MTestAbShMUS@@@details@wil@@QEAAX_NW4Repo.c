/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180286550
 * Callers:
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18004E988 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_MapReportingKind @ 0x18028670C (wil_details_MapReportingKind.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18028EC18 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShMUS>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // esi
  struct wil_details_FeatureReportingCache *v7; // rbp
  unsigned int v8; // r14d
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // rdx
  __m128i v17[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v18; // [rsp+70h] [rbp-58h]
  _BYTE v19[80]; // [rsp+78h] [rbp-50h] BYREF
  int v20; // [rsp+D0h] [rbp+8h] BYREF
  __int16 v21; // [rsp+D4h] [rbp+Ch]
  int v22; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+20h]

  v23 = a4;
  LOBYTE(v22) = a3;
  v4 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v23 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShMUS>::GetCachedFeatureEnabledState(
                       a1,
                       v17);
    LOWORD(v4) = v23;
  }
  v7 = (struct wil_details_FeatureReportingCache *)(a1 + 2);
  v20 = 0;
  v8 = v6;
  v21 = 3;
  v22 = 3;
  v9 = wil_details_MapReportingKind(3LL, v6);
  v10 = a1 + 2;
  v11 = v9;
  v12 = wil_details_FeatureReporting_RecordUsageInCache(v19, v10, v9, 0LL);
  v13 = *(__m128i *)v12;
  v18 = *(_QWORD *)(v12 + 16);
  v17[0] = v13;
  if ( g_wil_details_RecordSRUMFeatureUsage && (v11 - 100 <= 0x31 || !v11) )
  {
    g_wil_details_RecordSRUMFeatureUsage(45582738LL, v11, 1LL);
    v13 = v17[0];
  }
  if ( _mm_cvtsi128_si32(v13) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      45582738,
      v7);
    v13 = v17[0];
  }
  v14 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
  if ( (_DWORD)v14 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x2B78992,
      (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 8)),
      v14);
  v15 = v18;
  if ( !(_DWORD)v18 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v4 & 0x400) != 0 )
  {
    v16 = v11;
    if ( (v4 & 0x800) != 0 )
      LODWORD(v16) = v11 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x2B78992, v16, 0LL);
  }
  if ( !v15 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v14) = 3;
      g_wil_details_realtimeFeatureUsageHook(45582738LL, v11, v14);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(45582738LL, &v20, 0LL, v8, &v22, 0LL, 0, 1LL);
  }
}
