/*
 * XREFs of ?SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C022AB50
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5D90 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectCompositio.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0007DD0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 4 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( *((float *)this + 28) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 28) = a3;
    *a4 = 1;
  }
  return result;
}
