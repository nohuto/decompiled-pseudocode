/*
 * XREFs of ?GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801FCD34
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801FCCF0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180228300 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800ABD60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTransformGroup::GetRealizationWorker(
        CTransformGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  char v6; // al
  int v7; // eax
  CTransform3D **v8; // rbp
  CTransform3D **i; // rdi
  const struct CMILMatrix *Matrix; // rax

  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  v6 = *((_BYTE *)a3 + 65) & 0xE9;
  *((_BYTE *)a3 + 64) = -86;
  *((_BYTE *)a3 + 65) = v6 | 0x29;
  v7 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 2)) & 6;
  if ( (((unsigned __int8)v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 2)) & 6) & 6) == 2 )
  {
    v8 = (CTransform3D **)*((_QWORD *)this + 21);
    for ( i = (CTransform3D **)*((_QWORD *)this + 20); i != v8; ++i )
    {
      Matrix = CTransform3D::GetMatrix(*i, a2);
      CMILMatrix::Multiply(a3, Matrix);
    }
  }
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (2 * (*((_DWORD *)this + 10) >> 1) - 2)) & 6;
}
