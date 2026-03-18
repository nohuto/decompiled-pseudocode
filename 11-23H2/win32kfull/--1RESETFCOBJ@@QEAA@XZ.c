/*
 * XREFs of ??1RESETFCOBJ@@QEAA@XZ @ 0x1C00D3F64
 * Callers:
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00D3538 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C006E66C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00C889C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RESETFCOBJ::~RESETFCOBJ(RFONTOBJ **this)
{
  if ( *(_DWORD *)this )
  {
    if ( !*((_DWORD *)this + 1) )
    {
      RFONTOBJ::vReleaseCache(this[1]);
      RFONTOBJ::vMakeInactive(this[1]);
    }
  }
}
