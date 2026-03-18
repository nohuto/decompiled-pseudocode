/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x140585ADC
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140585B44 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(
      MemoryMap,
      0x8000u,
      HvlpHibernateScratchPage,
      (unsigned int)(HvlpHibernateScratchPageCount << 12),
      0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
