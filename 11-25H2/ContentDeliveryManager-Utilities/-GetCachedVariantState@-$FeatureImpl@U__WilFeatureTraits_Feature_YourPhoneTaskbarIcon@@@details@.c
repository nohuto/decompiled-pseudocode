/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030EAC
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x180039C4C (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x18003DD04 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@w.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4E0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18002F10C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180031624 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18003F2E0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int64 i; // rcx
  int v8; // eax
  int v9; // r9d
  signed __int64 v10; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details *v13; // [rsp+28h] [rbp-8h]
  int v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF
  int v16; // [rsp+6Ch] [rbp+3Ch]
  RTL_SRWLOCK *v17; // [rsp+70h] [rbp+40h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v14 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCurrentVariantState(v6, &v15, &v14);
    if ( !v5 )
      v14 = 0;
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
      AcquireSRWLockExclusive(&stru_180178390);
      v17 = &stru_180178390;
      if ( !v5
        || v5 != dword_1801783A4
        || (v12[1] = 0,
            v12[0] = 0,
            v13 = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_1801783D8, v12, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFF7C1);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    }
  }
  return a2;
}
