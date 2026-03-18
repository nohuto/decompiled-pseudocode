/*
 * XREFs of ?SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BDF4
 * Callers:
 *     ?SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BC7C (-SetRemarshalingFlags@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BCF0 (-SetRemarshalingFlags@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C5B0 (-SetRemarshalingFlags@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLegacyMilBrushMarshaler *this)
{
  int *v1; // rdx
  int *v3; // rcx

  v1 = (int *)((char *)this + 16);
  if ( *((float *)this + 14) != 0.0 )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x40u;
  v3 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x80u;
  else
    v3 = v1;
  if ( *((_QWORD *)this + 10) )
    *v3 = *v1 | 0x100;
  return (*v3 & 0x1E0) != 0;
}
