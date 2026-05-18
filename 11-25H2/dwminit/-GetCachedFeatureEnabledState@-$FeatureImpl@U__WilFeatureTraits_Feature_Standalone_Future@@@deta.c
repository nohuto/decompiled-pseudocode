/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000B758
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18000D180 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180005CE4 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180008F5C (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // ebp
  __int64 (__fastcall *v7)(__int64, __int64, int *); // rax
  int v8; // edx
  int v9; // ebx
  int v10; // eax
  char v11; // cl
  int v12; // eax
  signed __int32 v13; // edx
  int v14; // ebx
  bool v15; // zf
  signed __int32 v16; // ecx
  signed __int32 v17; // eax
  int v18; // eax
  int v20; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) == 6 )
    return a2;
  v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  v20 = 0;
  v6 = v5;
  v7 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v7 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v8 = v7(49453572LL, 3LL, &v20);
  }
  else
  {
    v8 = 0;
  }
  v9 = 8 * (v8 & 0x80 | (4 * (v8 & 0x40 | (4 * (v8 & 3)))));
  if ( (v8 & 0xFFFFFF3F) != 0 )
  {
    v10 = 0;
    if ( (v8 & 0xFFFFFF3F) == 2 )
      v10 = 64;
    v9 |= v10;
  }
  v11 = 0;
  if ( (v9 & 0xC00) == 0xC00 )
  {
    v11 = 1;
  }
  else if ( (v9 & 0x40) != 0 )
  {
    goto LABEL_16;
  }
  if ( (v9 & 0x40) == 0 || !v11 )
  {
    v12 = 0;
    goto LABEL_17;
  }
LABEL_16:
  v12 = 1;
LABEL_17:
  v13 = *(_DWORD *)a2;
  v14 = v12 | v9;
  while ( 1 )
  {
    v15 = v20 == 0;
    v16 = v13;
    *(_DWORD *)a2 = v13;
    if ( !v15 && (v13 & 2) == 0 )
    {
      v16 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v14) & 0x180 ^ (v14 ^ v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v14) & 0x180) & 0x40 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(v13 ^ (v13 ^ v14) & 0x80 ^ (v14 ^ v13 ^ (v13 ^ v14) & 0x80) & 0x40)) & 1 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(v13 ^ (v13 ^ v14) & 0x180 ^ (v14 ^ v13 ^ (v13 ^ v14) & 0x180) & 0x40 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(v13 ^ (v13 ^ v14) & 0x80 ^ (v14 ^ v13 ^ (v13 ^ v14) & 0x80) & 0x40)) & 1)) & 0x800 | 2;
      *(_DWORD *)a2 = v16;
    }
    if ( (v13 & 4) == 0 )
    {
      v16 = ((unsigned __int16)v16 ^ (unsigned __int16)v14) & 0x400 ^ v16 | 4;
      *(_DWORD *)a2 = v16;
    }
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v16, v13);
    if ( v13 == v17 )
      break;
    v13 = v17;
  }
  if ( (v13 & 4) == 0 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 3, v6);
  if ( (*(_BYTE *)a2 & 2) == 0 )
  {
    v18 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v14) & 0x180;
    *(_DWORD *)a2 = v18 ^ (v18 ^ v14) & 0x40 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(v18 ^ (v18 ^ v14) & 0x40)) & 1 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(v18 ^ (v18 ^ v14) & 0x40 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(v18 ^ (v18 ^ v14) & 0x40)) & 1)) & 0x800;
  }
  return a2;
}
