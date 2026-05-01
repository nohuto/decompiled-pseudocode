/*
 * XREFs of ?Uninitialize@VirtualDesktopCollection@@UEAAXXZ @ 0x180497A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UninitializeInternal@VirtualDesktopCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180497A5C (-UninitializeInternal@VirtualDesktopCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@.c)
 */

void __fastcall VirtualDesktopCollection::Uninitialize(RTL_SRWLOCK *this)
{
  struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v2; // rdx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v3, this + 38);
  VirtualDesktopCollection::UninitializeInternal((VirtualDesktopCollection *)&this[-3], v2);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v3);
}
