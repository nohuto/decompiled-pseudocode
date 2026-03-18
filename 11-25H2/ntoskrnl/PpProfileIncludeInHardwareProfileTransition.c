/*
 * XREFs of PpProfileIncludeInHardwareProfileTransition @ 0x1407218EC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase1 @ 0x1409A0E70 (PipProcessStartPhase1.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PnpIrpQueryID @ 0x1408338E8 (PnpIrpQueryID.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PpProfileIncludeInHardwareProfileTransition(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  if ( a2 == 2 )
  {
    v4 = (__int64 *)(a1 + 576);
    if ( (__int64 *)*v4 == v4 )
    {
      ExAcquireFastMutex(&PiProfileDeviceListLock);
      v5 = PiProfileDeviceListHead;
      if ( *(__int64 **)(PiProfileDeviceListHead + 8) != &PiProfileDeviceListHead )
        __fastfail(3u);
      v4[1] = (__int64)&PiProfileDeviceListHead;
      *v4 = v5;
      *(_QWORD *)(v5 + 8) = v4;
      ++PiProfileDeviceCount;
      PiProfileDeviceListHead = (__int64)v4;
      KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    }
    if ( (int)PnpIrpQueryID(*(_QWORD *)(a1 + 32), 4LL, &P) >= 0 && P )
      ExFreePoolWithTag(P, 0);
  }
  _InterlockedIncrement(&PiProfileDevicesInTransition);
  *(_DWORD *)(a1 + 568) = a2;
}
