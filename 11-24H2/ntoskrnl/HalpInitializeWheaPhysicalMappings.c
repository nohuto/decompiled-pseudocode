/*
 * XREFs of HalpInitializeWheaPhysicalMappings @ 0x140C167D4
 * Callers:
 *     HalpWheaInitDiscard @ 0x140C11BD4 (HalpWheaInitDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpReserveHalPtes @ 0x140C10408 (HalpReserveHalPtes.c)
 */

unsigned __int64 HalpInitializeWheaPhysicalMappings()
{
  unsigned __int64 result; // rax

  HalpWheaMappingMceReservation = HalpReserveHalPtes();
  if ( !HalpWheaMappingMceReservation )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xB3uLL);
  HalpWheaMappingNmiReservation = HalpReserveHalPtes();
  if ( !HalpWheaMappingNmiReservation )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xBEuLL);
  result = HalpReserveHalPtes();
  HalpWheaMappingReservation = result;
  if ( !result )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xC7uLL);
  HalpWheaMappingMceLock = 0LL;
  HalpWheaMappingNmiLock = 0LL;
  HalpWheaMappingLock = 0LL;
  return result;
}
