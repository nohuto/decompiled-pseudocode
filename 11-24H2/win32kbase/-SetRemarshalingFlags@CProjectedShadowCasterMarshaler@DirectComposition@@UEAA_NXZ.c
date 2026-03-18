/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238430
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012E030 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  _DWORD *v2; // rdx
  int *v3; // rcx

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v2 |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *v2 |= 0x200u;
  v3 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x100u;
  else
    v3 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 12) )
    *v3 = *v2 | 0x400;
  return 1;
}
