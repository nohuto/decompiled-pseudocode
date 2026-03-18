/*
 * XREFs of ApiSetGetUndimSourceInputTypeMask @ 0x1402224A0
 * Callers:
 *     ?InitDimAndWakeSources@CInputGlobals@@AEAAXXZ @ 0x140145E64 (-InitDimAndWakeSources@CInputGlobals@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetUndimSourceInputTypeMask(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  result = 0LL;
  if ( *(_QWORD *)(v2 + 7336) )
    return (*(__int64 (**)(void))(v2 + 7336))();
  return result;
}
