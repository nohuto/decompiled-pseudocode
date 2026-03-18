/*
 * XREFs of ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140231510
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DAC0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CLayerVisualMarshaler *this)
{
  char v1; // bl
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  char v4; // cl

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 388);
  if ( *((_QWORD *)this + 46) )
    *v2 |= 1u;
  if ( *((_QWORD *)this + 47) )
    *v2 |= 2u;
  v3 = (_DWORD *)((char *)this + 388);
  if ( *((_BYTE *)this + 384) )
    *v2 |= 4u;
  else
    v3 = (_DWORD *)((char *)this + 388);
  if ( *((_BYTE *)this + 385) )
    *v2 |= 8u;
  v4 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*v3 & 0xF) != 0 || v4 )
    return 1;
  return v1;
}
