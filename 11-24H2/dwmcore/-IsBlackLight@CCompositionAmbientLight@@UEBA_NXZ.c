/*
 * XREFs of ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x18014B710
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18014AFB0 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x18014B4AC (-GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV-$DynArrayIANoCtor@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionAmbientLight::IsBlackLight(CCompositionAmbientLight *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 68);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(v1 * *((float *)this + 64)) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v1 * *((float *)this + 65)) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v1 * *((float *)this + 66)) & _xmm) < 0.0000011920929;
}
