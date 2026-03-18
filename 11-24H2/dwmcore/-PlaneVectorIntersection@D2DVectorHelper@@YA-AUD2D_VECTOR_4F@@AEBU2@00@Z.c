/*
 * XREFs of ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18028C56C
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801ECAC8 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3,
        const struct D2D_VECTOR_4F *a4)
{
  float v4; // xmm3_4
  float y; // xmm2_4
  float z; // xmm9_4
  float w; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm4_4
  struct D2D_VECTOR_4F *result; // rax
  float v11; // xmm12_4
  float v12; // xmm5_4
  float v13; // xmm13_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm2_4

  v4 = a4->x - a3->x;
  y = retstr->y;
  z = retstr->z;
  w = retstr->w;
  v8 = a3->y;
  v9 = a4->y - v8;
  result = this;
  v11 = a3->z;
  v12 = a4->z - v11;
  v13 = a3->w;
  v14 = a4->w - v13;
  v15 = (float)((float)((float)(v4 * retstr->x) + (float)(v9 * y)) + (float)(v12 * z)) + (float)(v14 * w);
  if ( COERCE_FLOAT(LODWORD(v15) & _xmm) < 0.0000011920929 )
  {
    *this = *a3;
  }
  else
  {
    v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(y * v8) + (float)(retstr->x * a3->x)) + (float)(z * v11))
                       + (float)(w * v13)) ^ _xmm)
        / v15;
    this->x = (float)(v4 * v16) + a3->x;
    this->y = (float)(v9 * v16) + v8;
    this->z = (float)(v12 * v16) + v11;
    this->w = (float)(v14 * v16) + v13;
  }
  return result;
}
