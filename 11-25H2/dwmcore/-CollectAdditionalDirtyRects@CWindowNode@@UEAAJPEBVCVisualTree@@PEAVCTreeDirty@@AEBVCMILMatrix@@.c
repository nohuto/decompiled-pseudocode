/*
 * XREFs of ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109750
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075EAC (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109860 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1801E9644 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRects(
        __int64 a1,
        CDesktopTree *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        __int64 a5)
{
  int v8; // eax
  unsigned int v9; // edi
  char v11; // al
  unsigned __int64 *v12; // rax
  __int64 v13; // r8
  unsigned __int64 *v14; // rax
  const struct CShape *v15; // r8
  CRectanglesShape *v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CVisual::CollectAdditionalDirtyRects(a1, a2, a3, a4, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xB7u, 0LL);
  }
  else if ( *(_BYTE *)(a1 + 745) )
  {
    v11 = *(_BYTE *)(a1 + 888);
    if ( (v11 & 2) == 0
      && (v11 & 8) != 0
      && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      v12 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((__int64 *)(a1 + 824), 0LL);
      LOBYTE(v13) = 1;
      CGdiSpriteBitmap::GetAccumShape(v12, v16, v13);
      if ( v16[0] )
      {
        v14 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((__int64 *)(a1 + 824), 0LL);
        if ( (int)CDesktopTree::AddNewComposeTopContent(
                    a2,
                    (struct IBitmapResource *)((unsigned __int64)(v14 + 13) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64)),
                    v15,
                    a4) >= 0 )
          *(_BYTE *)(a1 + 888) |= 2u;
      }
      CShapePtr::~CShapePtr(v16);
    }
  }
  return v9;
}
