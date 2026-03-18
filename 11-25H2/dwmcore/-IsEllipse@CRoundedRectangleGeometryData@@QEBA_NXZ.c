/*
 * XREFs of ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1801E7E10
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800A3AFC (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CRoundedRectangleGeometryData::IsEllipse(CRoundedRectangleGeometryData *this)
{
  float v1; // xmm4_4
  float v2; // xmm2_4
  unsigned int i; // edx
  float result; // xmm0_4

  v1 = *(float *)this;
  if ( *((_BYTE *)this + 52) )
  {
    v2 = v1 + *((float *)this + 2);
  }
  else
  {
    v2 = *((float *)this + 2);
    for ( i = 1; i < 4; ++i )
    {
      result = *((float *)this + 4);
      if ( result != *((float *)this + 2 * i + 4) )
        return result;
      result = *((float *)this + 5);
      if ( result != *((float *)this + 2 * i + 5) )
        return result;
    }
  }
  result = *((float *)this + 4) + *((float *)this + 4);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v2 - v1) - result) & _xmm) <= 0.0000011920929 )
    return *((float *)this + 5) + *((float *)this + 5);
  return result;
}
