/*
 * XREFs of ?SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14014BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14014BB0C (-SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CContainerShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CContainerShapeMarshaler *this)
{
  bool result; // al

  result = DirectComposition::CShapeMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    result = 1;
    *((_DWORD *)this + 19) = 0;
  }
  return result;
}
