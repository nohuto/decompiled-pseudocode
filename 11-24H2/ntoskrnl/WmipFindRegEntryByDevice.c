/*
 * XREFs of WmipFindRegEntryByDevice @ 0x140463970
 * Callers:
 *     WmipRegisterDevice @ 0x1409D0548 (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x1409D091C (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x1409D0C80 (IoWMIRegistrationControl.c)
 *     WmipQueryWmiDataBlock @ 0x140A41D60 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x140A684C4 (WmipDeregisterDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     WmipDoFindRegEntryByDevice @ 0x140463A38 (WmipDoFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 RegEntryByDevice; // rax
  KIRQL v5; // r8
  __int64 v6; // rbx
  int v8; // [rsp+48h] [rbp+10h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1, v3, v2);
  v6 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v5);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v8);
  return v6;
}
