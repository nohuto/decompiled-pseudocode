/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800369DC
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x180036F4C (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037464 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x18003899C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180005864 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180009890 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  int v5; // eax
  int v6; // esi
  __int64 (__fastcall *v7)(__int64, _QWORD, int *, int *, int *); // rax
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // edx
  int v12; // r10d
  signed __int64 i; // rcx
  int v14; // edx
  int v15; // eax
  signed __int64 v16; // rax
  int v18; // [rsp+50h] [rbp+20h] BYREF
  int v19; // [rsp+58h] [rbp+28h] BYREF
  int v20; // [rsp+60h] [rbp+30h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v18 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v19 = 0;
    v6 = v5;
    v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_internalGetFeatureVariant;
    v8 = 0;
    v20 = 0;
    if ( g_wil_details_internalGetFeatureVariant
      || (v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_apiGetFeatureVariant) != 0LL )
    {
      v8 = v7(11015710LL, 0LL, &v20, &v19, &v18);
    }
    v9 = v8 & 0x100;
    v10 = (v19 != 0 ? 0x400 : 0) | (16 * (v8 & 0x80));
    v11 = v8 & 0xFFFFFE7F;
    if ( v11 && (v10 ^= (v11 & 0x3F) << 12, v9) )
      v12 = v20;
    else
      v12 = 0;
    if ( !v6 )
      v18 = 0;
    for ( i = *(_QWORD *)a2; ; i = v16 )
    {
      v14 = i;
      *(_QWORD *)a2 = i;
      if ( (i & 8) == 0 )
      {
        v15 = v18;
        *(_DWORD *)(a2 + 4) = v12;
        v14 = ((v15 != 0 ? 8 : 0) | (i ^ (v10 ^ i) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v10 ^ ((v15 != 0 ? 8 : 0) | ((unsigned __int16)i ^ ((unsigned __int16)v10 ^ (unsigned __int16)i) & 0xF000) & 0xFFF7)) & 0x800;
        *(_DWORD *)a2 = v14;
      }
      if ( (i & 4) == 0 )
        *(_DWORD *)a2 = v14 ^ (v14 ^ v10) & 0x400 | 4;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, i);
      if ( i == v16 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v6);
  }
  return a2;
}
