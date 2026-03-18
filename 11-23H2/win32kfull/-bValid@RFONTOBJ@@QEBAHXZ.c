/*
 * XREFs of ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C011CE4C
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C006E66C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C006E81C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C02A7C00 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bValid(RFONTOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
