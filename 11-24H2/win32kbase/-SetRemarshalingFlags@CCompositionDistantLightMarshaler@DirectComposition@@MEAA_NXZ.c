/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x140236280
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x140235F80 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  _DWORD *v1; // rdx
  _DWORD *v2; // rax

  if ( *((float *)this + 24) == 1.0 && *((float *)this + 25) == 1.0 && *((float *)this + 26) == 1.0 )
  {
    v1 = (_DWORD *)((char *)this + 16);
  }
  else
  {
    v1 = (_DWORD *)((char *)this + 16);
    *((_DWORD *)this + 4) |= 0x100u;
  }
  if ( *((_QWORD *)this + 14) )
  {
    *v1 |= 0x200u;
    v2 = (_DWORD *)((char *)this + 16);
  }
  else
  {
    v2 = v1;
  }
  if ( *((float *)this + 30) != 0.0 || *((float *)this + 31) != 0.0 || *((float *)this + 32) != -1.0 )
    *v1 |= 0x400u;
  if ( *((float *)this + 33) != 1.0 )
    *v2 |= 0x800u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
