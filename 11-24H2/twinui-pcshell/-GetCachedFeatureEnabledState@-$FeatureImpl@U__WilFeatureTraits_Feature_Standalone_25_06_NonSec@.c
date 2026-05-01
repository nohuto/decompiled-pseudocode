/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_06_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E646C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_06_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EAC50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_06_NonSec@@@details@wil@@QE.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007F17C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800D2CCC (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_06_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802E7B5C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_06_NonSec.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_06_NonSec>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  signed __int32 i; // r8d
  bool v9; // zf
  unsigned int v10; // edx
  __int16 v11; // ax
  signed __int32 v12; // eax
  _DWORD Src[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details *v15; // [rsp+28h] [rbp-8h]
  int v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v16 = 0;
    v6 = v5;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_06_NonSec>::GetCurrentFeatureEnabledState(
      v7,
      &v17,
      &v16);
    for ( i = *(_DWORD *)a2; ; i = v12 )
    {
      v9 = v16 == 0;
      v10 = i;
      v11 = v17;
      *(_DWORD *)a2 = i;
      if ( !v9 && (i & 2) == 0 )
      {
        v10 = v11 & 0x9C1 | i & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v10;
      }
      if ( (i & 4) == 0 )
      {
        v10 = v11 & 0x400 | v10 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v10;
      }
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v10, i);
      if ( i == v12 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(&v18, (RTL_SRWLOCK *)&unk_1808CCD30);
      if ( !v6
        || v6 != dword_1808CCD44
        || (Src[1] = 0,
            Src[0] = 3,
            v15 = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_1808CCD78, Src, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFB);
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
    }
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v17 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
