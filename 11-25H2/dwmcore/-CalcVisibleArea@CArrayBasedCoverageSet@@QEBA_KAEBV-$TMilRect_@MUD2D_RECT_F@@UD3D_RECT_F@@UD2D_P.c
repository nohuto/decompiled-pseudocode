/*
 * XREFs of ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18028FD28
 * Callers:
 *     ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180285874 (-CalcVisibleArea@COcclusionContext@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800668C0 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::CalcVisibleArea(__int64 a1, __int64 a2, int a3)
{
  double v3; // xmm2_8
  const struct tagRECT *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  const struct D2D_RECT_F *v10; // rcx
  __int64 v11; // rdx
  char v12; // al
  const struct tagRECT *v13; // rax
  FastRegion::Internal::CRgnData *v14; // rcx
  int v16[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v18; // [rsp+48h] [rbp-C0h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  int v20; // [rsp+58h] [rbp-B0h]
  int *v21[10]; // [rsp+68h] [rbp-A0h] BYREF
  FastRegion::CRegion *v22[10]; // [rsp+B8h] [rbp-50h] BYREF

  v7 = (const struct tagRECT *)PixelAlign(v16, (unsigned int *)a2, v3);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v21, v7);
  v8 = 0LL;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( *(_DWORD *)(*(_QWORD *)a1 + 48LL * v9 + 16) < a3 )
    {
      if ( !IsEmpty((const struct D2D_RECT_F *)(*(_QWORD *)a1 + 48LL * v9)) )
      {
        if ( IsEmpty(v10)
          || IsEmpty((const struct D2D_RECT_F *)a2)
          || *(float *)(v11 + 8) <= *(float *)a2
          || *(float *)(a2 + 8) <= *(float *)v11
          || *(float *)(v11 + 12) <= *(float *)(a2 + 4)
          || (v12 = 1, *(float *)(a2 + 12) <= *(float *)(v11 + 4)) )
        {
          v12 = 0;
        }
        if ( v12 )
        {
          v13 = (const struct tagRECT *)PixelAlign(v16, (unsigned int *)v11, v3);
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v22, v13);
          CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)v21, v22);
          if ( !*v21[0] )
          {
            FastRegion::CRegion::FreeMemory(v22);
            goto LABEL_19;
          }
          FastRegion::CRegion::FreeMemory(v22);
        }
      }
      if ( ++v9 >= *(_DWORD *)(a1 + 24) )
        break;
    }
  }
  FastRegion::CRegion::BeginIterator(v21, (__int64)v17);
  while ( (unsigned __int64)v18 < v17[1] )
  {
    v14 = (FastRegion::Internal::CRgnData *)(2 * v20);
    v8 += (*(_DWORD *)(v19 + 4LL * (_QWORD)v14 + 4) - *(_DWORD *)(v19 + 4LL * (_QWORD)v14)) * (v18[2] - *v18);
    FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v17);
  }
LABEL_19:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v21);
  return v8;
}
