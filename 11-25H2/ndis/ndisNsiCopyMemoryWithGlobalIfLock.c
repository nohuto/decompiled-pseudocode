/*
 * XREFs of ndisNsiCopyMemoryWithGlobalIfLock @ 0x1400038EC
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1401768B0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1401770E0 (ndisNsiGetInterfaceRodInformation.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisNsiCopyMemoryWithGlobalIfLock(void *a1, void *Src, size_t Size)
{
  unsigned int v4; // edi
  KIRQL v6; // bl

  v4 = Size;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  memmove(a1, Src, v4);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
}
