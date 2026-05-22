/*
 * XREFs of ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x180079690
 * Callers:
 *     ?Release@BamoDockableDeviceStub@@W7EAAKXZ @ 0x1800AB520 (-Release@BamoDockableDeviceStub@@W7EAAKXZ.c)
 *     ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180132D90 (-Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?Release@GestureServices@@WDI@EAAKXZ @ 0x180134010 (-Release@GestureServices@@WDI@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180134020 (-Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WIA@EAAKXZ @ 0x1801364D0 (-Release@ShellGesturesClientProxy@@WIA@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WII@EAAKXZ @ 0x1801364F0 (-Release@ShellGesturesClientProxy@@WII@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18015B0F0 (-Release@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSystemPrincipal::Release(BamoInputSystemPrincipal *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
