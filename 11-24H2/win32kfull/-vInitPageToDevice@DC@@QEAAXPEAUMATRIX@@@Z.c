/*
 * XREFs of ?vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z @ 0x1401791FC
 * Callers:
 *     NtGdiGetTransform @ 0x1401790C0 (NtGdiGetTransform.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     ?flComputeWtoDAccelFlags@EXFORMOBJ@@SAKPEBUMATRIX@@@Z @ 0x14017927C (-flComputeWtoDAccelFlags@EXFORMOBJ@@SAKPEBUMATRIX@@@Z.c)
 */

void __fastcall DC::vInitPageToDevice(DC *this, struct MATRIX *a2)
{
  int v2; // xmm0_4
  unsigned int v4; // r8d

  v2 = *((_DWORD *)this + 107);
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *(_DWORD *)a2 = v2;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 108);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 109);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 110);
  bFToL(COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a2 + 4)), (int *)a2 + 6, 6u);
  bFToL(COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a2 + 5)), (int *)a2 + 7, v4);
  *((_DWORD *)a2 + 8) = EXFORMOBJ::flComputeWtoDAccelFlags(a2);
}
