/*
 * XREFs of ??1?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1400573AC
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x14004DF88 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x140097130 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14007C1F8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
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
