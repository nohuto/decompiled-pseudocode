/*
 * XREFs of ??1?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009741C
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180089C78 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800F9230 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18009F78C (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::~ProcessLocalStorage<wil::details_abi::FeatureStateData>(
        __int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v1);
  return result;
}
