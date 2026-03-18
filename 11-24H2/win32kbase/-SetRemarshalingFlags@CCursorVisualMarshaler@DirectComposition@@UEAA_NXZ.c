/*
 * XREFs of ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DAC0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CCursorVisualMarshaler *this)
{
  int v2; // eax
  bool v3; // zf
  char v4; // di

  v2 = *((_DWORD *)this + 92) | 3;
  v3 = *((_BYTE *)this + 392) == 1;
  *((_DWORD *)this + 92) = v2;
  if ( !v3 )
  {
    v2 |= 4u;
    *((_DWORD *)this + 92) = v2;
  }
  v4 = 0;
  if ( *((_BYTE *)this + 393) )
    *((_DWORD *)this + 92) = v2 | 8;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 92) & 0xF) != 0 )
    return 1;
  return v4;
}
