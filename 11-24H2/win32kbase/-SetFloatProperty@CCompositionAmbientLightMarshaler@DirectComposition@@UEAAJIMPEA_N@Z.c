/*
 * XREFs of ?SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1402360A0
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14022D4E0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectCompositio.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( (_DWORD)a2 != 4 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( *((float *)this + 28) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 28) = a3;
    *a4 = 1;
  }
  return result;
}
