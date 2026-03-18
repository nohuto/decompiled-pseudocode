/*
 * XREFs of IopStartNextPacketByKey @ 0x14039313C
 * Callers:
 *     IopStartNextPacketByKeyEx @ 0x140391714 (IopStartNextPacketByKeyEx.c)
 *     IoStartNextPacketByKey @ 0x140596BF0 (IoStartNextPacketByKey.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140393600 (KeRemoveByKeyDeviceQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopStartNextPacketByKey(__int64 a1, int a2, ULONG a3)
{
  KIRQL v3; // si
  PKDEVICE_QUEUE_ENTRY v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  PKDEVICE_QUEUE_ENTRY v10; // rdi

  v3 = 0;
  if ( a2 )
    v3 = KeAcquireQueuedSpinLock(7uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = KeRemoveByKeyDeviceQueue((PKDEVICE_QUEUE)(a1 + 160), a3);
  if ( v7 )
  {
    v10 = v7 - 5;
    *(_QWORD *)(a1 + 32) = v7 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v10[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v3);
    }
    guard_dispatch_icall_no_overrides(a1, v10, v8, v9);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v3);
  }
}
