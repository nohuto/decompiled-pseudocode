/*
 * XREFs of AcpiAllocateGsivForSecondaryInterrupt @ 0x14009D1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 AcpiAllocateGsivForSecondaryInterrupt()
{
  return ((__int64 (*)(void))HalPrivateDispatchTable[63])();
}
