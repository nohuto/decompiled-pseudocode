/*
 * XREFs of ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18000CF80
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B180 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18011F6A0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushTransform(CDrawingContext *this, struct CTransform *a2)
{
  struct CMILMatrix *v4; // rdi
  void (*v5)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  int v6; // eax
  unsigned int v7; // ebx

  if ( a2 )
  {
    v4 = (struct CTransform *)((char *)a2 + 80);
    if ( (*((_BYTE *)a2 + 40) & 1) != 0 )
    {
      v5 = *(void (**)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)a2 + 200LL);
      if ( v5 == CComponentTransform3D::GetRealization )
      {
        CComponentTransform3D::GetRealization(a2, 0LL, v4);
      }
      else if ( (char *)v5 == (char *)CMatrixTransform::GetRealization )
      {
        CMatrixTransform::GetRealization(a2, 0LL, v4);
      }
      else
      {
        ((void (__fastcall *)(struct CTransform *, _QWORD, struct CMILMatrix *))v5)(a2, 0LL, v4);
      }
      *((_DWORD *)a2 + 10) &= ~1u;
    }
  }
  else
  {
    v4 = (struct CMILMatrix *)&CMILMatrix::Identity;
  }
  v6 = CDrawingContext::PushTransformInternal((CDrawingContext *)((char *)this - 16), 0LL, v4, 1, 1);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xD36u, 0LL);
  return v7;
}
