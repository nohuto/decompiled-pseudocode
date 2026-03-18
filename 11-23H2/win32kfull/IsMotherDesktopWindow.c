/*
 * XREFs of IsMotherDesktopWindow @ 0x1C002149C
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01BBF08 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 == gTermIO[1] || a1 == qword_1C035E748 )
    return 1;
  return v1;
}
