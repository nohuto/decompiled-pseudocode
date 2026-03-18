/*
 * XREFs of ?SetRemarshalingFlags@CWindowNodeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C830
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DAC0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CWindowNodeMarshaler *this)
{
  char v1; // bl
  int v2; // eax
  int v4; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 92) | 0x1F;
  if ( *((_QWORD *)this + 56) )
    v2 = *((_DWORD *)this + 92) | 0x3F;
  if ( *((_QWORD *)this + 57) )
    v2 |= 0x40u;
  if ( *((_BYTE *)this + 464) )
    v2 |= 0x80u;
  if ( *((_BYTE *)this + 465) )
    v2 |= 0x100u;
  if ( *((_BYTE *)this + 466) )
    v2 |= 0x200u;
  if ( *((_BYTE *)this + 467) )
    v2 |= 0x400u;
  v4 = v2 | 0x3800;
  if ( *((_QWORD *)this + 65) )
    v4 |= 0x4000u;
  if ( *((_QWORD *)this + 66) )
    v4 |= 0x8000u;
  *((_DWORD *)this + 92) = v4 | 0x30000;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 92) & 0x3FFFF) != 0 )
    return 1;
  return v1;
}
