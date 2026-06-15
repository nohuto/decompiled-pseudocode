/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x140057DB8
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x14004DF88 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x140076EEC (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14005CE00 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this, void *a2)
{
  wil::details *LockSemaphore; // rcx

  LockSemaphore = (wil::details *)this[1].LockSemaphore;
  this[1].LockSemaphore = 0LL;
  if ( LockSemaphore )
    wil::details::FreeProcessHeap(LockSemaphore, a2);
  DeleteCriticalSection(this);
}
