/*
 * XREFs of ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x14013D250
 * Callers:
 *     ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1400DD8E0 (-SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14022D710 (-SetFloatProperty@-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@Di.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CGeometryMarshaler::SetFloatProperty(
        DirectComposition::CGeometryMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  switch ( (_DWORD)a2 )
  {
    case 2:
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 20) = a3;
      break;
    case 3:
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 21) = a3;
      break;
    case 4:
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 22) = a3;
      break;
    default:
      return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  *a4 = 1;
  return v4;
}
