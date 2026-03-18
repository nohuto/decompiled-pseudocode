/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1802E8D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180256854 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

__int64 wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  __int64 result; // rax

  if ( lpMem )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release((HANDLE *)lpMem);
  return result;
}
