/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800F9230
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180074098 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180089C78 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009741C (--1-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::~ProcessLocalStorage<wil::details_abi::FeatureStateData>((__int64)&off_1801251C8);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
