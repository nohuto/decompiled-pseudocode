/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_08_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A224
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000A4D8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000955C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9F0 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_08_NonSec>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 (__fastcall *v7)(__int64, __int64, int *); // rax
  int v8; // edx
  int v9; // edi
  int v10; // edi
  int v11; // eax
  signed __int32 i; // r8d
  bool v13; // zf
  signed __int32 v14; // edx
  signed __int32 v15; // eax
  int v16; // eax
  int v18; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v18 = 0;
    v6 = v5;
    v7 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState
      || (v7 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
    {
      v8 = v7(45036787LL, 3LL, &v18);
    }
    else
    {
      v8 = 0;
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
    for ( i = *(_DWORD *)a2; ; i = v15 )
    {
      v13 = v18 == 0;
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
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v6);
    if ( (*(_BYTE *)a2 & 2) == 0 )
    {
      v16 = *(_DWORD *)a2 ^ ((unsigned __int16)v10 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180;
      *(_DWORD *)a2 = (v16 ^ (v16 ^ v10) & 0x40 | 1) ^ ((unsigned __int16)v10 ^ ((unsigned __int16)(v16 ^ (v16 ^ v10) & 0x40) | 1)) & 0x800;
    }
  }
  return a2;
}
