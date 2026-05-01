/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803BA2E0
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4Variant_55855747@@W4VariantReportingKind@3@_K@Z @ 0x1803BF22C (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4V.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA?AW4Variant_55855747@@W4VariantReportingKind@3@_N@Z @ 0x1803C1A28 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA-AW4.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007F17C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800D2CCC (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803BBAC8 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA-A.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int64 i; // rcx
  int v8; // edx
  int v9; // r9d
  signed __int64 v10; // rax
  _DWORD Src[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details *v13; // [rsp+28h] [rbp-8h]
  int v14; // [rsp+50h] [rbp+20h] BYREF
  int v15; // [rsp+58h] [rbp+28h] BYREF
  int v16; // [rsp+5Ch] [rbp+2Ch]
  RTL_SRWLOCK *v17; // [rsp+60h] [rbp+30h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v14 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCurrentVariantState(v6, &v15, &v14);
    for ( i = *(_QWORD *)a2; ; i = v10 )
    {
      v8 = v15;
      v9 = i;
      *(_QWORD *)a2 = i;
      if ( (i & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v16;
        v9 = v8 & 0x800 | (v14 != 0 ? 8 : 0) | i & 0xFFFC07F7 | v8 & 0x3F000;
        *(_DWORD *)a2 = v9;
      }
      if ( (i & 4) == 0 )
        *(_DWORD *)a2 = v8 & 0x400 | v9 & 0xFFFFFBFF | 4;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(&v17, (RTL_SRWLOCK *)&unk_1808CCD30);
      if ( !v5
        || v5 != dword_1808CCD44
        || (Src[1] = 0,
            Src[0] = 3,
            v13 = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_1808CCD78, Src, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFB);
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
    }
  }
  return a2;
}
