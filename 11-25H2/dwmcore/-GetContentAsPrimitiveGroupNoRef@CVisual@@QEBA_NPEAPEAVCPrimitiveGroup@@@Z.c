/*
 * XREFs of ?GetContentAsPrimitiveGroupNoRef@CVisual@@QEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x18012D680
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::GetContentAsPrimitiveGroupNoRef(CVisual *this, struct CPrimitiveGroup **a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v6)(__int64, __int64); // rax

  v4 = *((_QWORD *)this + 32);
  if ( !v4 )
    return 0;
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 64LL);
  if ( !(v6 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v4, 117LL) : (unsigned __int8)v6(v4, 117LL)) )
    return 0;
  *a2 = (struct CPrimitiveGroup *)*((_QWORD *)this + 32);
  return 1;
}
