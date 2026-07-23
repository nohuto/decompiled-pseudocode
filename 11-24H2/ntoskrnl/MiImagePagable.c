/*
 * XREFs of MiImagePagable @ 0x1407E8340
 * Callers:
 *     MiEnablePagingOfDriver @ 0x140C50BD0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140C5DB28 (MiLockPagableSections.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  if ( (dword_140FC51F4 & 1) != 0 )
    return 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  return a1;
}
