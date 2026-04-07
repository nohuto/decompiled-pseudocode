/*
 * XREFs of ?Subscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z2@Z @ 0x180073E54
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180073D70 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180073EC8 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 */

void __fastcall wil::details_abi::SubscriptionList::Subscribe(
        wil::details_abi::SubscriptionList *this,
        PSRWLOCK SRWLock,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a3,
        void (*a4)(void *),
        void *a5)
{
  AcquireSRWLockExclusive(SRWLock);
  wil::details_abi::SubscriptionList::SubscribeUnderLock(this, a3, a4, a5);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
