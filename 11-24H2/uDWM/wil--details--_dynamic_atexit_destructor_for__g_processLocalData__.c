/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800F92F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18009F700 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  if ( lpMem )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release((__int64)lpMem);
}
