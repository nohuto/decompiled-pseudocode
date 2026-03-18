/*
 * XREFs of ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x180209490
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CRenderDataBounds::PushTransform(CRenderDataBounds *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  char v5; // al

  if ( ++*((_DWORD *)this + 23) == 1 )
  {
    if ( a2 )
    {
      Matrix = CTransform3D::GetMatrix(a2, 0LL);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)Matrix;
      *(_OWORD *)((char *)this + 40) = *((_OWORD *)Matrix + 1);
      *(_OWORD *)((char *)this + 56) = *((_OWORD *)Matrix + 2);
      *(_OWORD *)((char *)this + 72) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)this + 22) = *((_DWORD *)Matrix + 16);
    }
    else
    {
      *(_QWORD *)((char *)this + 84) = 1065353216LL;
      *((_QWORD *)this + 3) = 1065353216LL;
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 10) = 0;
      *(_QWORD *)((char *)this + 44) = 1065353216LL;
      *(_QWORD *)((char *)this + 52) = 0LL;
      *((_DWORD *)this + 15) = 0;
      *((_QWORD *)this + 8) = 1065353216LL;
      *((_QWORD *)this + 9) = 0LL;
      *((_DWORD *)this + 20) = 0;
      v5 = *((_BYTE *)this + 89) & 0xE9;
      *((_BYTE *)this + 88) = -86;
      *((_BYTE *)this + 89) = v5 | 0x29;
    }
  }
  return 0LL;
}
