/*
 * XREFs of WmipFindRegEntryByDevice @ 0x14045A0A4
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140A37640 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140A49C40 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140A49D98 (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x140A49F68 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140A61874 (WmipDeregisterDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipDoFindRegEntryByDevice @ 0x14045A178 (WmipDoFindRegEntryByDevice.c)
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
