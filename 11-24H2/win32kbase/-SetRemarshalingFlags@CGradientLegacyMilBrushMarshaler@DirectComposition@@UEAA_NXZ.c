/*
 * XREFs of ?SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BC7C
 * Callers:
 *     ?SetRemarshalingFlags@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BE50 (-SetRemarshalingFlags@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BDF4 (-SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this)
{
  char v1; // bl
  _DWORD *v2; // rdx
  int *v3; // rdi

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 22) )
    *v2 |= 0x200u;
  if ( *((_DWORD *)this + 23) )
    *v2 |= 0x400u;
  v3 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 24) )
    *v2 |= 0x800u;
  else
    v3 = (int *)((char *)this + 16);
  *((_QWORD *)this + 13) = 0LL;
  if ( *((_QWORD *)this + 15) )
    *v3 = *v2 | 0x1000;
  if ( DirectComposition::CLegacyMilBrushMarshaler::SetRemarshalingFlags(this) || (*v3 & 0x1E00) != 0 )
    return 1;
  return v1;
}
