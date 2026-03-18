/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1407E8404
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404B4380 (KeReservePrivilegedPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiReleasePrivilegedPtes(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v4; // eax

  if ( (MiFlags & 0x4000) != 0 )
  {
    v4 = KeReservePrivilegedPages();
    if ( v4 < 0 )
      KeBugCheckEx(0x1Au, 0x51516uLL, BugCheckParameter2, BugCheckParameter3, v4);
  }
}
