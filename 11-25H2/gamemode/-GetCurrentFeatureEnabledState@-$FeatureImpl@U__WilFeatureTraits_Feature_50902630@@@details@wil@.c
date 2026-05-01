/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000A398
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180009EE8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A0B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000C564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  char v9; // dl
  unsigned int v10; // r8d
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = a1;
  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v4 = 1;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(50902630LL, 1LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  v6 = 8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  *(_DWORD *)a2 = v6;
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    v7 = 0;
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v7 = 64;
  }
  else
  {
    v7 = 64;
  }
  v8 = v7 | v6;
  *(_DWORD *)a2 = v8;
  v9 = 0;
  if ( (v8 & 0xC00) == 0xC00 || (v8 & 0x40) != 0 )
  {
    v10 = `wil::Feature<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetImpl'::`2'::impl & 4) == 0 )
    {
      v13 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetCachedFeatureEnabledState(
               (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetImpl'::`2'::impl,
               &v14);
      v10 = v13;
    }
    LODWORD(v12) = 0;
    WORD2(v12) = 3;
    wil::details::ReportUsageToService(&unk_180016BB0, 45036777LL, (v10 >> 10) & 1, (v10 >> 11) & 1, &v12, 1, 0);
    v9 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v9 )
    v4 = 0;
  *(_DWORD *)a2 = v4 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
