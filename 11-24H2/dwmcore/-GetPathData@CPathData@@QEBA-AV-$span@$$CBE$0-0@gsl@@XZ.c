/*
 * XREFs of ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1801F74C4
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180152FAC (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CPathData::GetPathData(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24) - v2;
  *a2 = v3;
  if ( v3 == -1 || (a2[1] = v2) == 0LL && v3 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a2;
}
