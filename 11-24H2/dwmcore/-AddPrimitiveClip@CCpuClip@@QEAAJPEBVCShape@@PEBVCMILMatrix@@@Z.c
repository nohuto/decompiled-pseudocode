/*
 * XREFs of ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x180285748
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800D85C0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18024E3E0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 */

__int64 __fastcall CCpuClip::AddPrimitiveClip(CCpuClip *this, const struct CShape *a2, const struct CMILMatrix *a3)
{
  CRectanglesShape **v3; // rsi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  struct CShape *v11; // rbx
  struct CShape *v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CRectanglesShape **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v7 = CCpuClip::ConvertContextDependentClipToLocal(this), v8 = v7, v7 >= 0) )
  {
    v13 = 0LL;
    if ( *v3 )
    {
      v10 = CShape::Combine((__int64)*v3, (__int64)a2, (__int64)a2, (__int64)a3, 1, &v13);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x58u, 0LL);
        return v8;
      }
    }
    else
    {
      v9 = CShape::CopyShape(a2, a3, &v13);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x4Eu, 0LL);
        return v8;
      }
    }
    v11 = v13;
    CShapePtr::~CShapePtr(v3);
    *v3 = v11;
    *((_BYTE *)v3 + 8) = 1;
    *((_BYTE *)this + 108) = 1;
    return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x48u, 0LL);
  return v8;
}
