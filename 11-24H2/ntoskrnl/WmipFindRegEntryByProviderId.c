/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1402DDC64
 * Callers:
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140A373A4 (IoWMISystemControl.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1402DDC30 (WmipDoFindRegEntryByProviderId.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

_DWORD *__fastcall WmipFindRegEntryByProviderId(int a1)
{
  unsigned __int64 v2; // rdi
  _DWORD *RegEntryByProviderId; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rdx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement(RegEntryByProviderId + 12);
  KxReleaseSpinLock((volatile signed __int64 *)&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = v2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(v2);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex);
  return v4;
}
