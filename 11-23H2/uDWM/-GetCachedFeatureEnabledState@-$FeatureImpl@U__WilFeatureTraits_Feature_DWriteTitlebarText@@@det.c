/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005B538
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001E8C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_N.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001A190 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180024A60 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005B660 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@de.c)
 */

// Hidden C++ exception states: #wind=1
signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWriteTitlebarText>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v4; // eax
  int v6; // esi
  int v7; // eax
  signed __int32 v8; // edx
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int v11; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 6) != 6 )
  {
    v6 = dword_1801485FC;
    if ( !dword_1801485FC )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWriteTitlebarText>::GetCurrentFeatureEnabledState(
      a1,
      &v14,
      &v13);
    v7 = v6 != 0 ? v13 : 0;
    v13 = v7;
    v8 = *a2;
    while ( 1 )
    {
      *a2 = v8;
      v9 = v8;
      if ( v7 && (v8 & 2) == 0 )
      {
        v9 = v8 ^ ((unsigned __int16)v14 ^ (unsigned __int16)v8) & 0x9C1 | 2;
        *a2 = v9;
      }
      if ( (v8 & 4) == 0 )
      {
        v9 = ((unsigned __int16)v14 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, v8);
      if ( v8 == v10 )
        break;
      v8 = v10;
      v7 = v13;
    }
    if ( (v8 & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v6
        || v6 != dword_1801485FC
        || (v11 = 0, v12 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_180148630, &v11, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFF7C1);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v14 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
