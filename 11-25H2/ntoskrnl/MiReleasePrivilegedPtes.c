/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1407D8544
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404B4A34 (KeReservePrivilegedPages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
