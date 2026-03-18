/*
 * XREFs of ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180263E30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A2FA0 (-AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800A3230 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??1?$unique_ptr@VCRectanglesShape@@U?$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ @ 0x180227EE4 (--1-$unique_ptr@VCRectanglesShape@@U-$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::GetUnOccludedWorldShape(__int64 a1, const __m128i *a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // edi
  CRectanglesShape *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v13; // rcx
  CRectanglesShape *v15; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+38h] [rbp-41h]
  int v17; // [rsp+3Ch] [rbp-3Dh]
  struct D2D_RECT_F v18; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-21h]
  _DWORD *v21; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h]
  int v23; // [rsp+70h] [rbp-9h]
  __int128 v24; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  *a4 = 0LL;
  v9 = (CRectanglesShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
  v10 = (__int64)v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 1) = 0LL;
    v15 = v9;
    *(_QWORD *)v9 = &CRectanglesShape::`vftable';
    *((_QWORD *)v9 + 2) = (char *)v9 + 40;
    *((_QWORD *)v9 + 3) = (char *)v9 + 40;
    *((_QWORD *)v9 + 4) = (char *)v9 + 56;
    *((_QWORD *)v9 + 7) = 0LL;
    FastRegion::CRegion::BeginIterator((int **)(a1 + 16), (__int64)v19);
    while ( (unsigned __int64)v21 < v20 )
    {
      HIDWORD(v15) = *v21;
      v17 = v21[2];
      v11 = 2 * v23;
      v24 = 0LL;
      LODWORD(v15) = *(_DWORD *)(v22 + 4 * v11);
      v16 = *(_DWORD *)(v22 + 4 * v11 + 4);
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v18.left + i) = (float)*(int *)((char *)&v15 + i);
      CMILMatrix::Transform2DBoundsHelper<0>(a3, &v18, (float *)&v24);
      CRectanglesShape::AddRectWithPartialOcclusion(v10, (float *)&v24, a2);
      FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v19);
    }
    v15 = 0LL;
    *a4 = v10;
  }
  else
  {
    v15 = 0LL;
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x97u, 0LL);
  }
  std::unique_ptr<CRectanglesShape>::~unique_ptr<CRectanglesShape>(&v15);
  return v4;
}
