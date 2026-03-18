/*
 * XREFs of PpProfileCommitTransitioningDock @ 0x14072179C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x140A6C1C8 (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407148F8 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x140721328 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072148C (PnpProfileUpdateHardwareProfile.c)
 *     PnpIrpQueryID @ 0x1408338E8 (PnpIrpQueryID.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall PpProfileCommitTransitioningDock(__int64 a1, int a2)
{
  __int64 v3; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  LONG result; // eax
  char v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 592);
  if ( a2 == 3 )
  {
    if ( v3 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 592), 0);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    ExAcquireFastMutex(&PiProfileDeviceListLock);
    v5 = (_QWORD *)(a1 + 576);
    v6 = *(_QWORD *)(a1 + 576);
    if ( *(_QWORD *)(v6 + 8) != a1 + 576 || (v7 = *(_QWORD **)(a1 + 584), (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(a1 + 584) = a1 + 576;
    *v5 = v5;
    --PiProfileDeviceCount;
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  }
  else if ( !v3 )
  {
    PnpIrpQueryID(*(_QWORD *)(a1 + 32), 4LL, &v10);
    *(_QWORD *)(a1 + 592) = v10;
  }
  *(_DWORD *)(a1 + 568) = 1;
  result = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v9 = 0;
    if ( (a2 != 2 || *(_QWORD *)(a1 + 592)) && (int)PnpProfileUpdateHardwareProfile((__int64)&v9) >= 0 && v9 )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
      PiProfileUpdateDeviceTree();
    }
    else if ( PiProfileChangeCancelRequired )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
    }
    return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
  return result;
}
