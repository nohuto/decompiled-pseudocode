/*
 * XREFs of ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C013E51C
 * Callers:
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C013E5F4 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C02746E4 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
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
