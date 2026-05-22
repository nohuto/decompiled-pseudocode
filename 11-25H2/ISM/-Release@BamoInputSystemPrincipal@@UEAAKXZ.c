/*
 * XREFs of ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x1800799F0
 * Callers:
 *     ?Release@BamoDockableDeviceStub@@W7EAAKXZ @ 0x1800ACA20 (-Release@BamoDockableDeviceStub@@W7EAAKXZ.c)
 *     ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180130570 (-Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?Release@GestureServices@@WDI@EAAKXZ @ 0x180131CB0 (-Release@GestureServices@@WDI@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180131CC0 (-Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WIA@EAAKXZ @ 0x180134300 (-Release@ShellGesturesClientProxy@@WIA@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WII@EAAKXZ @ 0x180134320 (-Release@ShellGesturesClientProxy@@WII@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18015A2C0 (-Release@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSystemPrincipal::Release(BamoInputSystemPrincipal *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
