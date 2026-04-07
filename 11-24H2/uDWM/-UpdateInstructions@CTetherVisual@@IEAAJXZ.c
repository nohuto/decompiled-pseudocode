/*
 * XREFs of ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18
 * Callers:
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800D9E8C (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800D9F00 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18001174C (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?CreateMeshGeometry2dProxy@CCompositor@@QEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18001195C (-CreateMeshGeometry2dProxy@CCompositor@@QEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z @ 0x180011968 (-Update@CMeshGeometry2dProxy@@QEAAJHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z.c)
 *     ?CreateGeometry2dGroupProxy@CCompositor@@QEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x1800119CC (-CreateGeometry2dGroupProxy@CCompositor@@QEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x1800119D8 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x180011A9C (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x18007AF9C (--1Mesh2D@@QEAA@XZ.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800D94CC (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTetherVisual::UpdateInstructions(CTetherVisual *this)
{
  CBaseObject *v2; // r15
  struct CMeshGeometry2dProxy **v3; // r14
  CBaseObject *v4; // rcx
  CGeometry2dGroupProxy **v5; // rsi
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  const struct tagRECT *v9; // rdx
  unsigned int v10; // ebx
  int MeshGeometry2dProxy; // eax
  __int64 v12; // rdx
  int v13; // eax
  int Geometry2dGroupProxy; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // rsi
  CBaseObject *v18; // rcx
  struct D2D_POINT_3F *v20[3]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-21h]
  struct D2D_POINT_2F *v22; // [rsp+60h] [rbp-19h]
  unsigned int *v23; // [rsp+80h] [rbp+7h]
  unsigned int v24; // [rsp+98h] [rbp+1Fh]
  CBaseObject *v25; // [rsp+E0h] [rbp+67h] BYREF

  v2 = 0LL;
  v25 = 0LL;
  v3 = (struct CMeshGeometry2dProxy **)((char *)this + 344);
  v4 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *v3 = 0LL;
  }
  v5 = (CGeometry2dGroupProxy **)((char *)this + 328);
  v6 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *v5 = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 42) = 0LL;
  }
  v8 = CRenderDataVisual::ClearInstructions(this);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xD7u, 0LL);
    goto LABEL_24;
  }
  if ( *((_QWORD *)this + 45) )
    return v10;
  Mesh2D::Mesh2D((Mesh2D *)v20, v9);
  CTetherVisual::GenerateMesh(this, (struct Mesh2D *)v20);
  MeshGeometry2dProxy = CCompositor::CreateMeshGeometry2dProxy(
                          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                          v3);
  v10 = MeshGeometry2dProxy;
  if ( MeshGeometry2dProxy < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MeshGeometry2dProxy, 0xDEu, 0LL);
    goto LABEL_22;
  }
  v13 = CMeshGeometry2dProxy::Update(*v3, v12, v20[0], v22, v21, v23, v24);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xE5u, 0LL);
    goto LABEL_22;
  }
  Geometry2dGroupProxy = CCompositor::CreateGeometry2dGroupProxy(
                           *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                           (struct CGeometry2dGroupProxy **)this + 41);
  v10 = Geometry2dGroupProxy;
  if ( Geometry2dGroupProxy < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Geometry2dGroupProxy, 0xE7u, 0LL);
    goto LABEL_22;
  }
  v15 = CGeometry2dGroupProxy::Update(*v5, *v3);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xE8u, 0LL);
LABEL_22:
    Mesh2D::~Mesh2D((void **)v20);
    goto LABEL_24;
  }
  v16 = CDrawMesh2DInstruction::Create(*v5, *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 38) + 16LL), &v25);
  v10 = v16;
  if ( v16 >= 0 )
  {
    v17 = v25;
    CRenderDataVisual::AddInstruction(this, v25);
    if ( v17 )
      CBaseObject::Release(v17);
    Mesh2D::~Mesh2D((void **)v20);
    return v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xE9u, 0LL);
  Mesh2D::~Mesh2D((void **)v20);
  v2 = v25;
LABEL_24:
  if ( *v3 )
  {
    CBaseObject::Release(*v3);
    *v3 = 0LL;
  }
  if ( *v5 )
  {
    CBaseObject::Release(*v5);
    *v5 = 0LL;
  }
  v18 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *((_QWORD *)this + 42) = 0LL;
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return v10;
}
