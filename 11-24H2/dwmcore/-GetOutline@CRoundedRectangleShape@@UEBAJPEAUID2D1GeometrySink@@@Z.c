/*
 * XREFs of ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801D37F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800407B0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801D38E0 (-GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetOutline(CRoundedRectangleShape *this, struct ID2D1GeometrySink *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  char v4; // r8
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int Outline; // eax

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  v4 = *(_BYTE *)(v2 + 68);
  v5 = *(float *)(v2 + 20);
  v6 = *(float *)(v2 + 16);
  if ( v4 )
  {
    v7 = v6 + *(float *)(v2 + 24);
    v8 = v5 + *(float *)(v2 + 28);
  }
  else
  {
    v7 = *(float *)(v2 + 24);
    v8 = *(float *)(v2 + 28);
  }
  v9 = v7 - v6;
  if ( v4 )
  {
    if ( (float)(*(float *)(v2 + 32) + *(float *)(v2 + 32)) > v9 )
      goto LABEL_11;
    v10 = v8 - v5;
    v11 = *(float *)(v2 + 36) + *(float *)(v2 + 36);
  }
  else
  {
    if ( (float)(*(float *)(v2 + 40) + *(float *)(v2 + 32)) > v9 )
      goto LABEL_11;
    if ( (float)(*(float *)(v2 + 56) + *(float *)(v2 + 48)) > v9 )
      goto LABEL_11;
    v10 = v8 - v5;
    if ( (float)(*(float *)(v2 + 60) + *(float *)(v2 + 36)) > v10 )
      goto LABEL_11;
    v11 = *(float *)(v2 + 52) + *(float *)(v2 + 44);
  }
  if ( v11 <= v10 )
  {
    CRoundedRectangleShape::AddNonIntersectedD2DGeometry(this, a2);
    return v3;
  }
LABEL_11:
  Outline = CShape::GetOutline(this, a2);
  v3 = Outline;
  if ( Outline < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Outline, 0xFBu, 0LL);
  return v3;
}
