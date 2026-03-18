/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C011C7BC
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C0093BC4 (GreRealizeDefaultPalette.c)
 *     ?GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00C6D58 (-GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreRealizePalette @ 0x1C02D0D2C (GreRealizePalette.c)
 *     GreSetSystemPaletteUse @ 0x1C02D1694 (GreSetSystemPaletteUse.c)
 *     NtGdiResizePalette @ 0x1C02D1C70 (NtGdiResizePalette.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C7F4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(this);
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
  }
}
