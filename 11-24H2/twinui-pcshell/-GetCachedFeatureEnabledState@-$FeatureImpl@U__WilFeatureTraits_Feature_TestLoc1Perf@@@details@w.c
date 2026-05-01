/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180362C28
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18036417C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180364F4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAA_.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007F17C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800D2CCC (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803631C4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int32 i; // r8d
  bool v8; // zf
  unsigned int v9; // edx
  __int16 v10; // ax
  signed __int32 v11; // eax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v14; // [rsp+28h] [rbp-28h] BYREF
  _DWORD Src[2]; // [rsp+30h] [rbp-20h] BYREF
  wil::details *v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+40h] [rbp-10h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v17 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::GetCurrentFeatureEnabledState(v6, &v13, &v17);
    for ( i = *(_DWORD *)a2; ; i = v11 )
    {
      v8 = v17 == 0;
      v9 = i;
      v10 = v13;
      *(_DWORD *)a2 = i;
      if ( !v8 && (i & 2) == 0 )
      {
        v9 = v10 & 0x9C1 | i & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v9;
      }
      if ( (i & 4) == 0 )
      {
        v9 = v10 & 0x400 | v9 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v9;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v9, i);
      if ( i == v11 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(&v14, (RTL_SRWLOCK *)&unk_1808CCD30);
      if ( !v5
        || v5 != dword_1808CCD44
        || (Src[1] = 0,
            Src[0] = 3,
            v16 = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_1808CCD78, Src, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFB);
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    }
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v13 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
