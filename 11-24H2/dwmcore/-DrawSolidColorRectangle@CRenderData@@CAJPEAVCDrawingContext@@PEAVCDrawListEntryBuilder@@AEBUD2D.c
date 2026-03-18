/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x1802459E8
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18013BB14 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180019E24 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1801F8A5C (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        struct CDrawingContext *a1,
        struct CDrawListEntryBuilder *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4)
{
  __int128 v7; // xmm0
  int v8; // ebx
  _QWORD *v9; // rcx
  _DWORD *v10; // rax
  __int128 v11; // xmm0
  LPVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int DrawList; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v20; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h]
  int v23; // [rsp+B4h] [rbp-54h]
  char v24; // [rsp+B8h] [rbp-50h]
  CDrawingContext *v25[7]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v26; // [rsp+100h] [rbp-8h]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v25, a1);
  v22 = 0;
  v23 = 257;
  *(_OWORD *)&v21[1] = 0LL;
  v24 = 0;
  v7 = *(_OWORD *)&Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(&v20, a4)->r;
  lpMem = 0LL;
  *(_QWORD *)&v20.b = 0LL;
  v26 = v7;
  *(_QWORD *)&v20.r = &lpMem;
  LOBYTE(v21[0]) = 1;
  v8 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v20.b);
  if ( LOBYTE(v21[0]) )
  {
    v9 = **(_QWORD ***)&v20.r;
    **(_QWORD **)&v20.r = *(_QWORD *)&v20.b;
    if ( v9 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v9);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x3C0u, 0LL);
  }
  else
  {
    v10 = lpMem;
    *((_BYTE *)lpMem + 52) = 1;
    v11 = (__int128)*a3;
    v10[12] = 50529027;
    *((_OWORD *)v10 + 2) = v11;
    v12 = lpMem;
    lpMem = 0LL;
    *(_QWORD *)&v20.r = v12;
    CBrushDrawListGenerator::AttachInput((__int64)v25, 0, (__int64 *)&v20);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v20, v13, v14);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v25,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v21[1],
                 a2);
    v8 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x3C4u, 0LL);
  }
  if ( lpMem )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v25, v16, v17);
  return (unsigned int)v8;
}
