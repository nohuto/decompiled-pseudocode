/*
 * XREFs of ??$?0$0?0V?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@_N$0?0@gsl@@QEAA@AEAV?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801EA4B8
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall gsl::span<bool,-1>::span<bool,-1>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  v3 = a2[1] - *a2;
  *a1 = v3;
  if ( v3 == -1 || (a1[1] = v2) == 0LL && v3 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a1;
}
