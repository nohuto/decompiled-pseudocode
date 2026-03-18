/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801251D0
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010310 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x180010880 (-CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDra.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18011A380 (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18011A3A0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180126AE0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180126C54 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CNineGridBrush::CreateLayoutGeometryDrawListBrush(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  int LayoutGeometryDrawListBrush; // eax
  int v8; // ebx
  __int64 v10; // rax
  float *v11; // rdx
  float v12; // xmm0_4
  int v13; // r9d
  void *v14; // rcx
  FLOAT width; // xmm1_4
  _DWORD *v16; // rax
  FLOAT height; // xmm0_4
  __int64 v18; // rcx
  CNineGridDrawListBrush *v19; // rdx
  struct CDrawListBrush *v20; // [rsp+30h] [rbp-50h] BYREF
  struct CGeometryOnlyDrawListBrush *v21[2]; // [rsp+38h] [rbp-48h] BYREF
  char v22; // [rsp+48h] [rbp-38h]
  float v23[4]; // [rsp+50h] [rbp-30h] BYREF
  CNineGridDrawListBrush **v24; // [rsp+60h] [rbp-20h]
  CNineGridDrawListBrush *v25; // [rsp+68h] [rbp-18h] BYREF
  char v26; // [rsp+70h] [rbp-10h]
  LPVOID lpMem; // [rsp+A0h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 96) && *((_BYTE *)this + 168) )
  {
    v10 = 0LL;
    v11 = (float *)((char *)this + 116);
    do
    {
      v12 = *(v11 - 1) * *v11;
      v11 += 2;
      v23[v10++] = v12;
    }
    while ( v10 < 4 );
    lpMem = 0LL;
    v21[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
    v21[1] = 0LL;
    v22 = 1;
    v8 = CGeometryOnlyDrawListBrush::Create(&v21[1]);
    if ( v22 )
    {
      v14 = *(void **)v21[0];
      *(_QWORD *)v21[0] = v21[1];
      if ( v14 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v14);
    }
    if ( v8 >= 0 )
    {
      width = a3->width;
      v16 = lpMem;
      height = a3->height;
      v21[0] = 0LL;
      *((_BYTE *)lpMem + 52) = 1;
      v16[12] = 50529027;
      v21[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v25 = 0LL;
      v26 = 1;
      *((_OWORD *)v16 + 2) = *(_OWORD *)v21;
      LOBYTE(v13) = *((_BYTE *)this + 168);
      v24 = &v20;
      v21[0] = (struct CGeometryOnlyDrawListBrush *)lpMem;
      v20 = 0LL;
      lpMem = 0LL;
      v8 = CNineGridDrawListBrush::Create((unsigned int)v21, (unsigned int)v23, (unsigned int)v23, v13, (__int64)&v25);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v21);
      if ( v26 )
      {
        v18 = (__int64)v24;
        v19 = *v24;
        *v24 = v25;
        if ( v19 )
          std::default_delete<CNineGridDrawListBrush>::operator()(v18, v19);
      }
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x206u, 0LL);
        std::unique_ptr<CNineGridDrawListBrush>::~unique_ptr<CNineGridDrawListBrush>(&v20);
        std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&lpMem);
        return (unsigned int)v8;
      }
      *a4 = v20;
      v20 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1FDu, 0LL);
    }
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  }
  else
  {
    LayoutGeometryDrawListBrush = CBrush::CreateLayoutGeometryDrawListBrush(this, a2, a3, a4);
    v8 = LayoutGeometryDrawListBrush;
    if ( LayoutGeometryDrawListBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LayoutGeometryDrawListBrush, 0x20Cu, 0LL);
  }
  return (unsigned int)v8;
}
