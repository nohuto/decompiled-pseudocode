/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18000A92C
 * Callers:
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180007260 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180009890 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180009B6C (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18000E680 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000A9D0 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s_0 @ 0x18000AF00 (memcpy_s_0.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(
        wil::details_abi::heap_buffer *this,
        const void *Source,
        rsize_t SourceSize)
{
  rsize_t v6; // rcx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdx
  bool result; // al

  v6 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( SourceSize + *((_QWORD *)this + 1) - *(_QWORD *)this < v6 )
  {
    v7 = (_QWORD *)((char *)this + 8);
LABEL_7:
    memcpy_s_0(
      *((void *const *)this + 1),
      (*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) & -(__int64)(*((_QWORD *)this + 1) < *((_QWORD *)this + 2)),
      Source,
      SourceSize);
    *v7 += SourceSize;
    return 1;
  }
  v8 = SourceSize;
  if ( SourceSize < 2 * v6 )
    v8 = 2 * v6;
  result = wil::details_abi::heap_buffer::reserve(this, v8);
  if ( result )
  {
    v7 = (_QWORD *)((char *)this + 8);
    goto LABEL_7;
  }
  return result;
}
