/*
 * XREFs of ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1401679D8
 * Callers:
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vGuard(CAutoTGO *this, void *a2, void (*a3)(void *))
{
  if ( !*((_DWORD *)this + 8) )
  {
    if ( a3 )
    {
      PushThreadGuardedObject(this, a2, a3);
      *((_DWORD *)this + 8) = 1;
    }
  }
}
