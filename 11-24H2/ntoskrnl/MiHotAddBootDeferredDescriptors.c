/*
 * XREFs of MiHotAddBootDeferredDescriptors @ 0x1407E8540
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C51764 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 */

LONG MiHotAddBootDeferredDescriptors()
{
  MiHotAddBootDeferredDescriptorsDiscardable();
  return KeSetEvent(&stru_140E2FEA8, 0, 0);
}
