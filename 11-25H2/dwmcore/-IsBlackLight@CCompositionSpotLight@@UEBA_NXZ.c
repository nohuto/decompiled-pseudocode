/*
 * XREFs of ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x180205580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSpotLight::IsBlackLight(CCompositionSpotLight *this)
{
  float v1; // xmm1_4
  bool result; // al
  float v3; // xmm1_4

  v1 = *((float *)this + 99);
  result = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v1 * *((float *)this + 78)) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v1 * *((float *)this + 79)) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v1 * *((float *)this + 80)) & _xmm) < 0.0000011920929 )
  {
    v3 = *((float *)this + 100);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 * *((float *)this + 82)) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 * *((float *)this + 83)) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 * *((float *)this + 84)) & _xmm) < 0.0000011920929 )
    {
      return 1;
    }
  }
  return result;
}
