/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000DAB4
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000ED88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180005864 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180009950 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // ebp
  __int64 (__fastcall *v7)(__int64, _QWORD, int *); // rax
  int v8; // edx
  int v9; // edi
  int v10; // edi
  int v11; // eax
  signed __int32 i; // r8d
  bool v13; // zf
  signed __int32 v14; // edx
  signed __int32 v15; // eax
  int v17; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v17 = 0;
    v6 = v5;
    v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *))g_wil_details_internalGetFeatureEnabledState;
    v8 = 0;
    if ( g_wil_details_internalGetFeatureEnabledState
      || (v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
    {
      v8 = v7(11973136LL, 0LL, &v17);
    }
    v9 = 8 * (v8 & 0x80 | (4 * (v8 & 0x40 | (4 * (v8 & 3)))));
    if ( (v8 & 0xFFFFFF3F) != 0 )
    {
      v11 = 0;
      if ( (v8 & 0xFFFFFF3F) == 2 )
        v11 = 64;
      v10 = v11 | v9;
    }
    else
    {
      v10 = v9 | 0x40;
    }
    if ( !v6 )
      v17 = 0;
    for ( i = *(_DWORD *)a2; ; i = v15 )
    {
      v13 = v17 == 0;
      v14 = i;
      *(_DWORD *)a2 = i;
      if ( !v13 && (i & 2) == 0 )
      {
        v14 = (i ^ ((unsigned __int16)v10 ^ (unsigned __int16)i) & 0x180 ^ (v10 ^ i ^ ((unsigned __int16)v10 ^ (unsigned __int16)i) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v10 ^ ((unsigned __int16)(i ^ (v10 ^ i) & 0x180 ^ (v10 ^ i ^ (v10 ^ i) & 0x180) & 0x40) | 1)) & 0x800 | 2;
        *(_DWORD *)a2 = v14;
      }
      if ( (i & 4) == 0 )
      {
        v14 = ((unsigned __int16)v14 ^ (unsigned __int16)v10) & 0x400 ^ v14 | 4;
        *(_DWORD *)a2 = v14;
      }
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v14, i);
      if ( i == v15 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v6);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *(_DWORD *)a2 = (*(_DWORD *)a2 ^ ((unsigned __int16)v10 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ (v10 ^ *(_DWORD *)a2 ^ ((unsigned __int16)v10 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v10 ^ (*(_WORD *)a2 ^ ((unsigned __int16)v10 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ ((unsigned __int16)v10 ^ *(_WORD *)a2 ^ ((unsigned __int16)v10 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1)) & 0x800;
  }
  return a2;
}
