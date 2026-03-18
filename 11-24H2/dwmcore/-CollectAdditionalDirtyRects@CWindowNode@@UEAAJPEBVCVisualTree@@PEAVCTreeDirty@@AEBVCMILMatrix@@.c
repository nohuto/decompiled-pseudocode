/*
 * XREFs of ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039C40
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039D50 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0E64 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1802034D0 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRects(
        __int64 a1,
        CDesktopTree *a2,
        __int64 a3,
        const struct CMILMatrix *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  const struct CShape *v14; // r8
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = CVisual::CollectAdditionalDirtyRects(a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB7u, 0LL);
  }
  else if ( *(_BYTE *)(a1 + 753) )
  {
    v10 = *(_BYTE *)(a1 + 896);
    if ( (v10 & 2) == 0
      && (v10 & 8) != 0
      && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      v11 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a1 + 832, 0LL);
      LOBYTE(v12) = 1;
      CGdiSpriteBitmap::GetAccumShape(v11, v15, v12);
      if ( v15[0] )
      {
        v13 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a1 + 832, 0LL);
        if ( (int)CDesktopTree::AddNewComposeTopContent(
                    a2,
                    (struct IBitmapResource *)((v13 + 104) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)),
                    v14,
                    a4) >= 0 )
          *(_BYTE *)(a1 + 896) |= 2u;
      }
      CShapePtr::~CShapePtr((CShapePtr *)v15);
    }
  }
  return v8;
}
