/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x140338ED0
 * Callers:
 *     WmipForwardWmiIrp @ 0x1409CE2C0 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140A41AC4 (IoWMISystemControl.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     WmipDoFindRegEntryByProviderId @ 0x140338F70 (WmipDoFindRegEntryByProviderId.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  __int64 RegEntryByProviderId; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v7; // [rsp+48h] [rbp+10h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  KxReleaseSpinLock((volatile signed __int64 *)&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = v2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(v2);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v7);
  return v4;
}
