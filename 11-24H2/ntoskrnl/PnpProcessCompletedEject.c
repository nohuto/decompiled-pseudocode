/*
 * XREFs of PnpProcessCompletedEject @ 0x140721780
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpSetDeviceRemovalSafe @ 0x14072BE64 (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x1407342CC (IopWarmEjectDevice.c)
 *     IopFreeRelationList @ 0x1409BAF04 (IopFreeRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1409BCC04 (PnpInvalidateRelationsInList.c)
 *     PnpCompleteDeviceEvent @ 0x1409ED2C0 (PnpCompleteDeviceEvent.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409ED83C (PnpDisableAndFreeEventWatchdog.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AAF690 (PnpTrackQueryRemoveDevices.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *i; // rax
  void *v10; // rdi

  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v2 = *((_QWORD *)P + 12);
  if ( v2 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 8), 1LL);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL), v3);
  }
  PpDevNodeLockTree(1LL);
  v5 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = *((_QWORD *)P + 7);
  if ( v7 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
  else
    v8 = 0LL;
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
    LOBYTE(v4) = 1;
    PnpInvalidateRelationsInList(*((_QWORD *)P + 8), 4LL, 0LL, v4);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
    IopFreeRelationList(*((PVOID *)P + 8));
    *(_QWORD *)(v8 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1LL);
  v10 = (void *)*((_QWORD *)P + 6);
  if ( v10 )
  {
    PnpDisableAndFreeEventWatchdog(*((_QWORD *)P + 6));
    PnpCompleteDeviceEvent(v10);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
