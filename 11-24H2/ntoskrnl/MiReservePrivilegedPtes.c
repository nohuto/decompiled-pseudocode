/*
 * XREFs of MiReservePrivilegedPtes @ 0x140A5E748
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404B4380 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
