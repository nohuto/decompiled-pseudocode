/*
 * XREFs of ?bUMPD@UDCOBJ@@QEBA@XZ @ 0x14018326C
 * Callers:
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UDCOBJ::bUMPD(UDCOBJ *this)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x8000;
}
