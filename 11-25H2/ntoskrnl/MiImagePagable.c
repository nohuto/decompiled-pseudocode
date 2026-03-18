/*
 * XREFs of MiImagePagable @ 0x1407D7EB0
 * Callers:
 *     MiEnablePagingOfDriver @ 0x140C3D810 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140C4A60C (MiLockPagableSections.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  if ( (dword_140FC41E4 & 1) != 0 )
    return 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  return a1;
}
