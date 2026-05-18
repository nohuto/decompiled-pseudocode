/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000BA50
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18000D8B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180005D24 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000905C (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebp
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  int v7; // edx
  int v8; // ebx
  int v9; // eax
  char v10; // cl
  int v11; // eax
  signed __int32 v12; // edx
  int v13; // ebx
  bool v14; // zf
  signed __int32 v15; // ecx
  signed __int32 v16; // eax
  int v17; // eax
  int v19; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)Feature_Standalone_Future__descriptor;
  *(_DWORD *)a2 = *(_DWORD *)Feature_Standalone_Future__descriptor;
  if ( (v3 & 6) == 6 )
    return a2;
  v4 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  v19 = 0;
  v5 = v4;
  v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v7 = v6(49453572LL, 3LL, &v19);
  }
  else
  {
    v7 = 0;
  }
  v8 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
  if ( (v7 & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( (v7 & 0xFFFFFF3F) == 2 )
      v9 = 64;
    v8 |= v9;
  }
  v10 = 0;
  if ( (v8 & 0xC00) == 0xC00 )
  {
    v10 = 1;
  }
  else if ( (v8 & 0x40) != 0 )
  {
    goto LABEL_16;
  }
  if ( (v8 & 0x40) == 0 || !v10 )
  {
    v11 = 0;
    goto LABEL_17;
  }
LABEL_16:
  v11 = 1;
LABEL_17:
  v12 = *(_DWORD *)a2;
  v13 = v11 | v8;
  while ( 1 )
  {
    v14 = v19 == 0;
    v15 = v12;
    *(_DWORD *)a2 = v12;
    if ( !v14 && (v12 & 2) == 0 )
    {
      v15 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v13) & 0x180 ^ (v13 ^ v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v13) & 0x180) & 0x40 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v12 ^ (v12 ^ v13) & 0x80 ^ (v13 ^ v12 ^ (v12 ^ v13) & 0x80) & 0x40)) & 1 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v12 ^ (v12 ^ v13) & 0x180 ^ (v13 ^ v12 ^ (v12 ^ v13) & 0x180) & 0x40 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v12 ^ (v12 ^ v13) & 0x80 ^ (v13 ^ v12 ^ (v12 ^ v13) & 0x80) & 0x40)) & 1)) & 0x800 | 2;
      *(_DWORD *)a2 = v15;
    }
    if ( (v12 & 4) == 0 )
    {
      v15 = ((unsigned __int16)v15 ^ (unsigned __int16)v13) & 0x400 ^ v15 | 4;
      *(_DWORD *)a2 = v15;
    }
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)Feature_Standalone_Future__descriptor, v15, v12);
    if ( v12 == v16 )
      break;
    v12 = v16;
  }
  if ( (v12 & 4) == 0 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges(
      (volatile signed __int32 *)Feature_Standalone_Future__descriptor,
      3,
      v5);
  if ( (*(_BYTE *)a2 & 2) == 0 )
  {
    v17 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v13) & 0x180;
    *(_DWORD *)a2 = v17 ^ (v17 ^ v13) & 0x40 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v17 ^ (v17 ^ v13) & 0x40)) & 1 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v17 ^ (v17 ^ v13) & 0x40 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v17 ^ (v17 ^ v13) & 0x40)) & 1)) & 0x800;
  }
  return a2;
}
