/*
 * XREFs of ?AcquireLockShared@WindowEventDispatcher@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180419760
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

RTL_SRWLOCK **__fastcall WindowEventDispatcher::AcquireLockShared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a2, a1 + 57);
  return a2;
}
