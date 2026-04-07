/*
 * XREFs of ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006DC06
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E7A08 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x18006BBDE (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006BD06 (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18006CD76 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x18006CE9C (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z @ 0x1800CCA7C (-Update@CMeshGeometry2dProxy@@QEAAJHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z.c)
 */

__int64 __fastcall CTouchDragVisual::CreateDrawMesh2DInstruction(
        CTouchDragVisual *this,
        const struct Mesh2D *a2,
        struct CGeometry2dGroupProxy **a3,
        struct CMeshGeometry2dProxy **a4)
{
  CBaseObject *v6; // rsi
  int v9; // eax
  int v10; // ebx
  int v11; // r10d
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rdi
  CBaseObject *v18; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  v18 = 0LL;
  v9 = CCompositor::CreateProxy<CMeshGeometry2dProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = v9;
    v12 = 247;
    goto LABEL_11;
  }
  v10 = CMeshGeometry2dProxy::Update(
          *a4,
          *((_QWORD *)a2 + 8),
          *(const struct MilPoint3F **)a2,
          *((const struct MilPoint2D **)a2 + 4),
          *((_DWORD *)a2 + 6),
          *((const unsigned int **)a2 + 8),
          *((_DWORD *)a2 + 22));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 254;
    goto LABEL_11;
  }
  v10 = CCompositor::CreateProxy<CGeometry2dGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 256;
    goto LABEL_11;
  }
  v10 = CGeometry2dGroupProxy::Update(*a3, *a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 257;
    goto LABEL_11;
  }
  v10 = CDrawMesh2DInstruction::Create(*a3, *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 49) + 16LL), &v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    v6 = v18;
    v12 = 258;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v12);
    if ( *a4 )
    {
      CBaseObject::Release(*a4);
      *a4 = 0LL;
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
    if ( v6 )
    {
      v15 = v6;
LABEL_19:
      CBaseObject::Release(v15);
      return (unsigned int)v10;
    }
    return (unsigned int)v10;
  }
  v16 = v18;
  CRenderDataVisual::AddInstruction(this, v18, v13, v14);
  if ( v16 )
  {
    v15 = v16;
    goto LABEL_19;
  }
  return (unsigned int)v10;
}
