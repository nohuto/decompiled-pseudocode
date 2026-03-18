/*
 * XREFs of ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800F4CC0
 * Callers:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180034E40 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800ABD60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800B2F20 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1801396B0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMatrixTransform::GetRealization(
        CMatrixTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v3; // xmm4_4
  int v4; // xmm3_4
  int v5; // xmm2_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  char v8; // al

  v3 = *((_DWORD *)this + 45);
  v4 = *((_DWORD *)this + 44);
  v5 = *((_DWORD *)this + 43);
  v6 = *((_DWORD *)this + 42);
  v7 = *((_DWORD *)this + 41);
  *(_DWORD *)a3 = *((_DWORD *)this + 40);
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  v8 = *((_BYTE *)a3 + 65) & 0xEB;
  *((_DWORD *)a3 + 1) = v7;
  *((_DWORD *)a3 + 4) = v6;
  *((_BYTE *)a3 + 65) = v8 | 0x28;
  *((_DWORD *)a3 + 5) = v5;
  *((_DWORD *)a3 + 12) = v4;
  *((_DWORD *)a3 + 13) = v3;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_BYTE *)a3 + 64) = 8;
}
