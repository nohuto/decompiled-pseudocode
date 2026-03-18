/*
 * XREFs of ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DAC0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSuperWetInkVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSuperWetInkVisualMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 368);
  if ( *((_QWORD *)this + 47) )
    *v2 |= 1u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*v2 & 1) != 0 )
    return 1;
  return v1;
}
