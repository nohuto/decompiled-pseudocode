/*
 * XREFs of _SysCtxGetTransaction @ 0x1408208F8
 * Callers:
 *     _PnpCtxRegisterMachineNode @ 0x1408180DC (_PnpCtxRegisterMachineNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SysCtxGetTransaction(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 8);
  *a2 = v3;
  if ( !v3 )
    return 3222863875LL;
  return result;
}
