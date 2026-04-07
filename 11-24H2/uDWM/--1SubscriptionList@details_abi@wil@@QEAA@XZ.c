/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800984C4
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180089C78 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x18009E01C (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180098F70 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  LockSemaphore = this[1].LockSemaphore;
  this[1].LockSemaphore = 0LL;
  if ( LockSemaphore )
    MemoryFree(LockSemaphore);
  DeleteCriticalSection(this);
}
