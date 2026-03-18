/*
 * XREFs of ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180258EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801746A0 (-AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x180175100 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCRectanglesShape@@U?$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ @ 0x18021C4E4 (--1-$unique_ptr@VCRectanglesShape@@U-$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::GetUnOccludedWorldShape(__int64 a1, const __m128i *a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // edi
  CRectanglesShape *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v15; // rcx
  CRectanglesShape *v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+38h] [rbp-41h]
  int v19; // [rsp+3Ch] [rbp-3Dh]
  struct D2D_RECT_F v20; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-21h]
  _DWORD *v23; // [rsp+60h] [rbp-19h]
  __int64 v24; // [rsp+68h] [rbp-11h]
  int v25; // [rsp+70h] [rbp-9h]
  __int128 v26; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  *a4 = 0LL;
  v9 = (CRectanglesShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
  v10 = (__int64)v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 1) = 0LL;
    v17 = v9;
    *(_QWORD *)v9 = &CRectanglesShape::`vftable';
    *((_QWORD *)v9 + 2) = (char *)v9 + 40;
    *((_QWORD *)v9 + 3) = (char *)v9 + 40;
    *((_QWORD *)v9 + 4) = (char *)v9 + 56;
    *((_QWORD *)v9 + 7) = 0LL;
    FastRegion::CRegion::BeginIterator((int **)(a1 + 16), (__int64)v21);
    while ( (unsigned __int64)v23 < v22 )
    {
      HIDWORD(v17) = *v23;
      v19 = v23[2];
      v13 = 2 * v25;
      v26 = 0LL;
      LODWORD(v17) = *(_DWORD *)(v24 + 4 * v13);
      v18 = *(_DWORD *)(v24 + 4 * v13 + 4);
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v20.left + i) = (float)*(int *)((char *)&v17 + i);
      CMILMatrix::Transform2DBoundsHelper<0>(a3, &v20, (float *)&v26);
      CRectanglesShape::AddRectWithPartialOcclusion(v10, (float *)&v26, a2);
      FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)v21);
    }
    v17 = 0LL;
    *a4 = v10;
  }
  else
  {
    v17 = 0LL;
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x97u, 0LL);
  }
  std::unique_ptr<CRectanglesShape>::~unique_ptr<CRectanglesShape>(&v17, v11, v12);
  return v4;
}
