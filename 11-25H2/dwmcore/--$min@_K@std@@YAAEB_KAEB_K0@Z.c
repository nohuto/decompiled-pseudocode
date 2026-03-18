/*
 * XREFs of ??$min@_K@std@@YAAEB_KAEB_K0@Z @ 0x1801BF010
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::min<unsigned __int64>(_QWORD *a1, _QWORD *a2)
{
  if ( *a2 >= *a1 )
    return a1;
  return a2;
}
