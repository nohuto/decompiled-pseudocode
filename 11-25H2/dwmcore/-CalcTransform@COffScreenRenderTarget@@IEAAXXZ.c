/*
 * XREFs of ?CalcTransform@COffScreenRenderTarget@@IEAAXXZ @ 0x1800C4424
 * Callers:
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x1800C4400 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UpdateTransformAndTreeBounds@CVirtualMonitorCaptureRenderTarget@@MEAAXXZ @ 0x18028E770 (-UpdateTransformAndTreeBounds@CVirtualMonitorCaptureRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::CalcTransform(COffScreenRenderTarget *this)
{
  __int64 v1; // rdx
  CTransform3D *v3; // rcx
  CMILMatrix *v4; // rdi
  const struct CMILMatrix *Matrix; // rax

  v1 = *((_QWORD *)this + 14);
  if ( v1 && (v3 = (CTransform3D *)*((_QWORD *)this + 25)) != 0LL )
  {
    v4 = (COffScreenRenderTarget *)((char *)this + 216);
    Matrix = CTransform3D::GetMatrix(v3, (const struct D2D_SIZE_F *)(*(_QWORD *)(v1 + 72) + 144LL));
    *(_OWORD *)((char *)this + 216) = *(_OWORD *)Matrix;
    *(_OWORD *)((char *)this + 232) = *((_OWORD *)Matrix + 1);
    *(_OWORD *)((char *)this + 248) = *((_OWORD *)Matrix + 2);
    *(_OWORD *)((char *)this + 264) = *((_OWORD *)Matrix + 3);
    *((_DWORD *)this + 70) = *((_DWORD *)Matrix + 16);
  }
  else
  {
    v4 = (COffScreenRenderTarget *)((char *)this + 216);
    *((_DWORD *)this + 54) = 1065353216;
    *(_QWORD *)((char *)this + 220) = 0LL;
    *(_QWORD *)((char *)this + 228) = 0LL;
    *(_QWORD *)((char *)this + 236) = 1065353216LL;
    *(_QWORD *)((char *)this + 244) = 0LL;
    *((_DWORD *)this + 63) = 0;
    *((_QWORD *)this + 32) = 1065353216LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_DWORD *)this + 68) = 0;
    *((_DWORD *)this + 69) = 1065353216;
    *((_BYTE *)this + 281) &= 0xE9u;
    *((_BYTE *)this + 281) |= 0x29u;
    *((_BYTE *)this + 280) = -86;
  }
  CMILMatrix::Translate(v4, *((float *)this + 52), *((float *)this + 53));
}
