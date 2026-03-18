/*
 * XREFs of ?SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C6E0
 * Callers:
 *     ?SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BA10 (-SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BA50 (-SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextObjectMarshaler *this)
{
  _DWORD *v1; // rdx
  bool result; // al

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  *v1 |= 0x40u;
  result = 1;
  *v1 |= 0x80u;
  return result;
}
