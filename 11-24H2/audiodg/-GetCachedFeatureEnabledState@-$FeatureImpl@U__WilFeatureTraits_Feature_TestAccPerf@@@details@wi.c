/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400825DC
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140084D74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@QEAAX_NW4Repor.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140045738 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1400781FC (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x14007E9C0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140082B98 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@w.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestAccPerf>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int32 i; // r8d
  __int16 v8; // ax
  bool v9; // zf
  signed __int32 v10; // edx
  signed __int32 v11; // eax
  _DWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  void *v14; // [rsp+28h] [rbp-8h]
  int v15; // [rsp+68h] [rbp+38h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v17; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)Feature_TestAccPerf__descriptor;
  *(_DWORD *)a2 = *(_DWORD *)Feature_TestAccPerf__descriptor;
  if ( (v3 & 6) != 6 )
  {
    v4 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v15 = 0;
    v5 = v4;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestAccPerf>::GetCurrentFeatureEnabledState(v6, &v16, &v15);
    for ( i = *(_DWORD *)a2; ; i = v11 )
    {
      v8 = v16;
      v9 = v15 == 0;
      v10 = i | 0x40000;
      *(_DWORD *)a2 = i | 0x40000;
      if ( !v9 && (i & 2) == 0 )
      {
        v10 = v8 & 0x9C1 | i & 0xFFFBF63E | 0x40000 | 2;
        *(_DWORD *)a2 = v10;
      }
      if ( (i & 4) == 0 )
      {
        v10 = v8 & 0x400 | v10 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v10;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)Feature_TestAccPerf__descriptor, v10, i);
      if ( i == v11 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      v17 = &SRWLock;
      if ( !v5
        || v5 != dword_1400C582C
        || (v13[1] = 0,
            v13[0] = 3,
            v14 = Feature_TestAccPerf__descriptor,
            !wil::details_abi::heap_buffer::push_back((void **)&unk_1400C5850, v13, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)Feature_TestAccPerf__descriptor, 0xFFFFFFFB);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    }
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v16 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
