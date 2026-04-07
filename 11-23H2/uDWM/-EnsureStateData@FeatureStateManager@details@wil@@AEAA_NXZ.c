/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180024990
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800025C4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x1800248DC (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18009B0DC (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180024D44 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009A48C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009A9A0 (--1last_error_context@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall wil::details::FeatureStateManager::EnsureStateData(RTL_SRWLOCK *this)
{
  __int64 v2; // rsi
  void *v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !this[3].Ptr )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    if ( this[3].Ptr )
    {
      v2 = 0LL;
    }
    else
    {
      if ( !this[2].Ptr )
      {
        v4 = 0LL;
        if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                    this[1].Ptr,
                    &v4) >= 0
          && !this[2].Ptr )
        {
          this[2].Ptr = v4;
        }
      }
      v2 = ((__int64)this[2].Ptr + 32) & -(__int64)(this[2].Ptr != 0LL);
    }
    AcquireSRWLockExclusive(this + 4);
    if ( !this[3].Ptr )
      this[3].Ptr = (PVOID)v2;
    if ( this != (RTL_SRWLOCK *)-32LL )
      ReleaseSRWLockExclusive(this + 4);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  return this[3].Ptr != 0LL;
}
