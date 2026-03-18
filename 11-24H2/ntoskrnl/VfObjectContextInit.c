/*
 * XREFs of VfObjectContextInit @ 0x140B84844
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140C3B240 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 */

__int64 VfObjectContextInit()
{
  ExInitializeNPagedLookasideListInternal(
    (__int64)&ViObjectContextTableLookaside,
    0LL,
    (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
    512,
    24,
    1666147926,
    0,
    VfInitializedWithoutReboot);
  return (unsigned int)_InterlockedExchange(&ViObjectContextInitialized, 1);
}
