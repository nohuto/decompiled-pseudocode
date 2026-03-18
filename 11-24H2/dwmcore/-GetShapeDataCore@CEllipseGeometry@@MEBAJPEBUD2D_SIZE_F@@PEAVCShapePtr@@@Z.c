/*
 * XREFs of ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18019D490
 * Callers:
 *     <none>
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18019D570 (--0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x18019DDEC (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CEllipseGeometry::GetShapeDataCore(
        CEllipseGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  float v3; // xmm3_4
  unsigned int v4; // esi
  float v5; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  CRoundedRectangleShape *v9; // rax
  CRoundedRectangleShape *v10; // rbx
  __int64 result; // rax
  float v12[13]; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+64h] [rbp-14h]

  v3 = *((float *)this + 36);
  v4 = 0;
  v5 = *((float *)this + 37);
  v7 = *((float *)this + 35);
  v8 = *((float *)this + 34) - v3;
  v12[12] = 0.0;
  v12[4] = v3;
  v12[5] = v5;
  v13 = 1;
  v12[0] = v8;
  v12[1] = v7 - v5;
  v12[2] = v3 + v3;
  v12[3] = v5 + v5;
  v9 = (CRoundedRectangleShape *)CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc(this, a2);
  if ( !v9 )
  {
    v10 = 0LL;
    goto LABEL_5;
  }
  v10 = CRoundedRectangleShape::CRoundedRectangleShape(v9, (const struct CRoundedRectangleGeometryData *)v12);
  if ( !v10 )
  {
LABEL_5:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x62u, 0LL);
  }
  CShapePtr::~CShapePtr(a3);
  *a3 = v10;
  result = v4;
  *((_BYTE *)a3 + 8) = 1;
  return result;
}
