/*
 * XREFs of ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x18009DC20
 * Callers:
 *     ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x18009E394 (-Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800A0158 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = a2;
  a1[1] = a2 + 80 * a3;
  return a1;
}
