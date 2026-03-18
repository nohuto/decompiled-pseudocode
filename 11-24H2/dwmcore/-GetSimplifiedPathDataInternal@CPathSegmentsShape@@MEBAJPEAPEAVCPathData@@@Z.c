/*
 * XREFs of ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x180222020
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017BF4 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18017E8B8 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802B6440 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetSimplifiedPathDataInternal(CPathSegmentsShape *this, struct CPathData **a2)
{
  CPathData **v2; // rdi
  unsigned int v3; // ebx
  CPathData *v4; // rcx
  struct CPathData *v6; // rcx
  CPathData *v8; // rbx
  int v9; // eax
  struct CPathData *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CPathData **)((char *)this + 16);
  v3 = 0;
  v4 = (CPathData *)*((_QWORD *)this + 2);
  v10 = 0LL;
  if ( CPathData::IsSimpleGeometry(v4) )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=(&v10, v2);
  }
  else
  {
    v8 = *v2;
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v10);
    v9 = CPathData::Simplify(v8, &v10);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x2Fu, 0LL);
      goto LABEL_4;
    }
  }
  v6 = v10;
  v10 = 0LL;
  *a2 = v6;
LABEL_4:
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v10);
  return v3;
}
