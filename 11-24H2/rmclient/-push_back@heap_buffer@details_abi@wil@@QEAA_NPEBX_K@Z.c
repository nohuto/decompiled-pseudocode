/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800075A0
 * Callers:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180013030 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800135A4 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180019B14 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupp.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180019C44 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180019D74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@deta.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007650 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

char __fastcall wil::details_abi::heap_buffer::push_back(
        wil::details_abi::heap_buffer *this,
        const void *a2,
        rsize_t a3)
{
  rsize_t v5; // r9
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rbp
  void *v9; // rcx
  rsize_t v10; // rdx

  v5 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a3 + *((_QWORD *)this + 1) - *(_QWORD *)this < v5 )
  {
    v8 = (_QWORD *)((char *)this + 8);
  }
  else
  {
    v7 = a3;
    if ( a3 < 2 * v5 )
      v7 = 2 * v5;
    if ( !wil::details_abi::heap_buffer::reserve(this, v7) )
      return 0;
    v8 = (_QWORD *)((char *)this + 8);
  }
  v9 = (void *)*((_QWORD *)this + 1);
  v10 = 0LL;
  if ( (unsigned __int64)v9 < *((_QWORD *)this + 2) )
    v10 = *((_QWORD *)this + 2) - (_QWORD)v9;
  memcpy_s(v9, v10, a2, a3);
  *v8 += a3;
  return 1;
}
