/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18024FB5C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1801295D4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1802045CC (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        struct CDrawingContext *a1,
        struct CDrawListEntryBuilder *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4)
{
  __int128 v7; // xmm0
  __int64 v8; // rdx
  int v9; // ebx
  _QWORD *v10; // rcx
  _DWORD *v11; // rax
  __int128 v12; // xmm0
  LPVOID v13; // rax
  int DrawList; // eax
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v17; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+68h] [rbp-A0h]
  int v20; // [rsp+B4h] [rbp-54h]
  char v21; // [rsp+B8h] [rbp-50h]
  CDrawingContext *v22[7]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v23; // [rsp+100h] [rbp-8h]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v22, a1);
  v19 = 0;
  v20 = 257;
  *(_OWORD *)&v18[1] = 0LL;
  v21 = 0;
  v7 = *(_OWORD *)&Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(&v17, a4)->r;
  lpMem = 0LL;
  *(_QWORD *)&v17.b = 0LL;
  v23 = v7;
  *(_QWORD *)&v17.r = &lpMem;
  LOBYTE(v18[0]) = 1;
  v9 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v17.b, v8);
  if ( LOBYTE(v18[0]) )
  {
    v10 = **(_QWORD ***)&v17.r;
    **(_QWORD **)&v17.r = *(_QWORD *)&v17.b;
    if ( v10 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v10);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x3C0u, 0LL);
  }
  else
  {
    v11 = lpMem;
    *((_BYTE *)lpMem + 52) = 1;
    v12 = (__int128)*a3;
    v11[12] = 50529027;
    *((_OWORD *)v11 + 2) = v12;
    v13 = lpMem;
    lpMem = 0LL;
    *(_QWORD *)&v17.r = v13;
    CBrushDrawListGenerator::AttachInput((__int64)v22, 0, (__int64 *)&v17);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v17);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v22,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v18[1],
                 a2);
    v9 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x3C4u, 0LL);
  }
  if ( lpMem )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v22);
  return (unsigned int)v9;
}
