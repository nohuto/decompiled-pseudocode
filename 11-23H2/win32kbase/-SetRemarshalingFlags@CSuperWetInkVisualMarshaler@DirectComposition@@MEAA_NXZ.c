/*
 * XREFs of ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0220250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0214400 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSuperWetInkVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSuperWetInkVisualMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 384);
  if ( *((_QWORD *)this + 47) )
    *v2 |= 2u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*v2 & 2) != 0 )
    return 1;
  return v1;
}
