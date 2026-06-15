/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800A0C70
 * Callers:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800A0BD4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800C0630 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 * Callees:
 *     memcpy_s_0 @ 0x1800684AC (memcpy_s_0.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800A0D10 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(wil::details_abi::heap_buffer *this, const void *Source)
{
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rdx
  bool result; // al

  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( *((_QWORD *)this + 1) - *(_QWORD *)this + 16LL < v4 )
  {
    v5 = (_QWORD *)((char *)this + 8);
LABEL_7:
    memcpy_s_0(
      *((void *const *)this + 1),
      (*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) & -(__int64)(*((_QWORD *)this + 1) < *((_QWORD *)this + 2)),
      Source,
      0x10uLL);
    *v5 += 16LL;
    return 1;
  }
  v6 = 16LL;
  if ( 2 * v4 > 0x10 )
    v6 = 2 * v4;
  result = wil::details_abi::heap_buffer::reserve(this, v6);
  if ( result )
  {
    v5 = (_QWORD *)((char *)this + 8);
    goto LABEL_7;
  }
  return result;
}
