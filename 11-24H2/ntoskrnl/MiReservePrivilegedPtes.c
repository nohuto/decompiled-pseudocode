/*
 * XREFs of MiReservePrivilegedPtes @ 0x140A55814
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404AEBCC (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
