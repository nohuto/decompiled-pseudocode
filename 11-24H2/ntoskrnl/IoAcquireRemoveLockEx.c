/*
 * XREFs of IoAcquireRemoveLockEx @ 0x14041D6D0
 * Callers:
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404B59F0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404B779C (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxAcpiForwardNotification @ 0x1405D9384 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405D9660 (PopFxAcpiUnregisterDevice.c)
 *     DifIoAcquireRemoveLockExWrapper @ 0x1406237B0 (DifIoAcquireRemoveLockExWrapper.c)
 *     ViFilterDispatchGeneric @ 0x140B9EFE0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140B9F0B0 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140B9F270 (ViFilterDispatchPower.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v11; // r14
  KIRQL v12; // al

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else
  {
    if ( RemlockSize == 120 )
    {
      Pool2 = ExAllocatePool2(0x40uLL, 0x28uLL, (ULONG)RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink);
      v11 = (struct _LIST_ENTRY *)Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = Tag;
        *(_QWORD *)(Pool2 + 24) = File;
        *(_DWORD *)(Pool2 + 32) = Line;
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000320];
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
        v11->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
        RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v11;
        KeReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent, v12);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
      }
    }
    return 0;
  }
}
