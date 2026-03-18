/*
 * XREFs of ??0?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@QEAA@QEAPEAVCVisual@@_K1@Z @ 0x180219990
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall stdext::checked_array_iterator<CVisual * *>::checked_array_iterator<CVisual * *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  a1[2] = 0LL;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
