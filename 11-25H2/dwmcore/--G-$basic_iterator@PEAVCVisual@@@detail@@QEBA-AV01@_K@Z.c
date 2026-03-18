/*
 * XREFs of ??G?$basic_iterator@PEAVCVisual@@@detail@@QEBA?AV01@_K@Z @ 0x1801D4EE0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall detail::basic_iterator<CVisual *>::operator-(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *a1 - 8 * a3;
  return result;
}
