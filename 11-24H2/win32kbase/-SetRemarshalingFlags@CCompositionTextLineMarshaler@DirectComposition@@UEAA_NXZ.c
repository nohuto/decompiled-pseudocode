/*
 * XREFs of ?SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BA50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C6E0 (-SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompositionTextLineMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionTextLineMarshaler *this)
{
  _DWORD *v1; // rbx
  bool v2; // al
  char v3; // cl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 20) != 0.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 21) != 0.0 )
    *v1 |= 0x200u;
  if ( *((float *)this + 22) != 0.0 )
    *v1 |= 0x400u;
  v2 = DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*v1 & 0x700) != 0 )
    return 1;
  return v3;
}
