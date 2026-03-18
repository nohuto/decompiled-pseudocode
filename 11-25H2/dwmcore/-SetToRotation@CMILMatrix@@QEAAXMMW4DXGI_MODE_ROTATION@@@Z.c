/*
 * XREFs of ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1802118DC
 * Callers:
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180170940 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18002C178 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18025AD80 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  char v4; // al
  int v5; // r9d
  CMILMatrix *v6; // rcx
  int v7; // r9d

  *(_QWORD *)this = 1065353216LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  v4 = *((_BYTE *)this + 65) & 0xE9;
  *((_BYTE *)this + 64) = -86;
  *((_BYTE *)this + 65) = v4 | 0x29;
  v5 = a4 - 2;
  if ( !v5 )
  {
    CMILMatrix::Rotate270(this);
    a3 = a2;
    a2 = 0.0;
LABEL_3:
    CMILMatrix::Translate(v6, a2, a3);
    return;
  }
  v7 = v5 - 1;
  if ( !v7 )
  {
    CMILMatrix::Scale(this, -1.0, -1.0, 1.0);
    goto LABEL_3;
  }
  if ( v7 == 1 )
  {
    CMILMatrix::Rotate90(this);
    a2 = a3;
    a3 = 0.0;
    goto LABEL_3;
  }
}
