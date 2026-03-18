/*
 * XREFs of PoRunDownDeviceObject @ 0x1402FDBBC
 * Callers:
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1402FDCA0 (PoRegisterDeviceForIdleDetection.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoRunDownDeviceObject(struct _DEVICE_OBJECT *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdi
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rbx
  KIRQL v3; // al
  _LIST_ENTRY *p_Volume; // rcx
  KIRQL v5; // si
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx

  DeviceObjectExtension = a1->DeviceObjectExtension;
  PoRegisterDeviceForIdleDetection(a1, 0, 0, PowerDeviceUnspecified);
  Dope = DeviceObjectExtension->Dope;
  if ( Dope )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    ExAcquireFastMutex(&PopVolumeLock);
    v3 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    p_Volume = &Dope->Volume;
    v5 = v3;
    Flink = Dope->Volume.Flink;
    if ( Flink )
    {
      if ( Flink->Blink != p_Volume || (Blink = Dope->Volume.Blink, Blink->Flink != p_Volume) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      p_Volume->Flink = 0LL;
      Dope->Volume.Blink = 0LL;
    }
    DeviceObjectExtension->Dope = 0LL;
    ExFreePoolWithTag(Dope, 0);
    KeReleaseSpinLock(&PopDopeGlobalLock, v5);
    KeReleaseGuardedMutex(&PopVolumeLock);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
}
