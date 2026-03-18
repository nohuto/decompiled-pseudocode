/*
 * XREFs of PnpProcessCompletedEject @ 0x140717AF0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpSetDeviceRemovalSafe @ 0x140721ED4 (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x14072A10C (IopWarmEjectDevice.c)
 *     IopFreeRelationList @ 0x14082F144 (IopFreeRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1408307A0 (PnpInvalidateRelationsInList.c)
 *     PnpCompleteDeviceEvent @ 0x14096DC54 (PnpCompleteDeviceEvent.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14096E47C (PnpDisableAndFreeEventWatchdog.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AAF730 (PnpTrackQueryRemoveDevices.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *i; // rax
  void *v9; // rdi

  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v2 = *((_QWORD *)P + 12);
  if ( v2 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 8));
    guard_dispatch_icall_no_overrides(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL));
  }
  PpDevNodeLockTree(1LL);
  v4 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  v6 = *((_QWORD *)P + 7);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( *((_QWORD *)P + 8) )
  {
    if ( *((_BYTE *)P + 88) )
    {
      ExAcquireFastMutex(&PiProfileDeviceListLock);
      for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i - 2) != 1 )
          *((_DWORD *)i - 2) = 4;
      }
      KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    }
    LOBYTE(v3) = 1;
    PnpInvalidateRelationsInList(*((_QWORD *)P + 8), 4LL, 0LL, v3);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
    IopFreeRelationList(*((PVOID *)P + 8));
    *(_QWORD *)(v7 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1LL);
  v9 = (void *)*((_QWORD *)P + 6);
  if ( v9 )
  {
    PnpDisableAndFreeEventWatchdog(*((_QWORD *)P + 6));
    PnpCompleteDeviceEvent(v9);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
