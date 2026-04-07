/*
 * XREFs of ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E7A08
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x18006E350 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18006D4F4 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x18006D5BA (--1Mesh2D@@QEAA@XZ.c)
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006DC06 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x1800E7BF0 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTouchDragVisual::UpdateVisual(CTouchDragVisual *this)
{
  struct CMeshGeometry2dProxy **v2; // r14
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax
  const struct tagRECT *v6; // rdx
  unsigned int v7; // ebx
  const struct tagRECT *v8; // rdx
  int v9; // ecx
  int v10; // eax
  int DrawMesh2DInstruction; // eax
  _BYTE v13[32]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v14[32]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[48]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v16[112]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = (struct CMeshGeometry2dProxy **)((char *)this + 440);
  v3 = (CBaseObject *)*((_QWORD *)this + 55);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *v2 = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 54) = 0LL;
  }
  v5 = CRenderDataVisual::ClearInstructions(this);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)this + 96) > 1u )
    {
      Mesh2D::Mesh2D((Mesh2D *)v13, v6);
      Mesh2D::Mesh2D((Mesh2D *)v16, v8);
      v10 = CTouchDragVisualHelper::TriangulatePathGeometry(
              v9,
              (int)this + 360,
              (int)this + 400,
              (unsigned int)v13,
              (__int64)v14,
              (__int64)v15);
      v7 = v10;
      if ( v10 >= 0 )
      {
        DrawMesh2DInstruction = CTouchDragVisual::CreateDrawMesh2DInstruction(
                                  this,
                                  (const struct Mesh2D *)v13,
                                  (struct CGeometry2dGroupProxy **)this + 54,
                                  v2);
        v7 = DrawMesh2DInstruction;
        if ( DrawMesh2DInstruction < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DrawMesh2DInstruction, 0xE5u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xE2u);
      }
      Mesh2D::~Mesh2D((Mesh2D *)v16);
      Mesh2D::~Mesh2D((Mesh2D *)v13);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xD3u);
  }
  return v7;
}
