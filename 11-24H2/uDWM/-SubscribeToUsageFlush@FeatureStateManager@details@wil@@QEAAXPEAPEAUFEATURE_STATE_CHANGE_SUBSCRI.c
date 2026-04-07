/*
 * XREFs of ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180073D70
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800A0560 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?Subscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z2@Z @ 0x180073E54 (-Subscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180073EC8 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180074098 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180099B8C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToUsageFlush(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *))
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **v6; // r8
  RTL_SRWLOCK *Ptr; // rdx

  *a2 = 0LL;
  if ( LOBYTE(this->Ptr)
    && !wil::ProcessShutdownInProgress((wil *)this)
    && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)this) )
  {
    AcquireSRWLockExclusive(this + 4);
    v6 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&this[28];
    if ( !this[28].Ptr )
    {
      Ptr = (RTL_SRWLOCK *)this[3].Ptr;
      if ( Ptr )
      {
        *v6 = 0LL;
        wil::details_abi::SubscriptionList::Subscribe(
          (wil::details_abi::SubscriptionList *)&Ptr[25],
          Ptr,
          v6,
          (void (*)(void *))_lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
          this);
      }
    }
    wil::details_abi::SubscriptionList::SubscribeUnderLock((wil::details_abi::SubscriptionList *)&this[19], a2, a3, 0LL);
    if ( *a2 )
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*a2 | 0x80000000);
    if ( this != (RTL_SRWLOCK *)-32LL )
      ReleaseSRWLockExclusive(this + 4);
  }
}
