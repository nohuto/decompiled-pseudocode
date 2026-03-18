/*
 * XREFs of PnpProcessCompletedEject @ 0x140723BF0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpSetDeviceRemovalSafe @ 0x14072DE54 (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x14073639C (IopWarmEjectDevice.c)
 *     PnpCompleteDeviceEvent @ 0x1409EF9F0 (PnpCompleteDeviceEvent.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409EFF6C (PnpDisableAndFreeEventWatchdog.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     IopFreeRelationList @ 0x140A0CB00 (IopFreeRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140A0E800 (PnpInvalidateRelationsInList.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AB4720 (PnpTrackQueryRemoveDevices.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  _QWORD *v10; // rcx
  PVOID *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *i; // rax
  void *v15; // rdi

  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v5 = *((_QWORD *)P + 12);
  if ( v5 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 8), 1LL, a3, a4);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL), v6, v7, v8);
  }
  PpDevNodeLockTree(1LL);
  v10 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v11 = (PVOID *)*((_QWORD *)P + 1), *v11 != P) )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = v11;
  v12 = *((_QWORD *)P + 7);
  if ( v12 )
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
  else
    v13 = 0LL;
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
    LOBYTE(v9) = 1;
    PnpInvalidateRelationsInList(*((_QWORD *)P + 8), 4LL, 0LL, v9);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
    IopFreeRelationList(*((PVOID *)P + 8));
    *(_QWORD *)(v13 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1LL);
  v15 = (void *)*((_QWORD *)P + 6);
  if ( v15 )
  {
    PnpDisableAndFreeEventWatchdog(*((_QWORD *)P + 6));
    PnpCompleteDeviceEvent(v15);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
