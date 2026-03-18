/*
 * XREFs of MiReservePrivilegedPtes @ 0x140A5B774
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404B4A34 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
