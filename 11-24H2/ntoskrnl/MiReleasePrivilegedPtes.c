/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1407E89D4
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404AEBCC (KeReservePrivilegedPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
