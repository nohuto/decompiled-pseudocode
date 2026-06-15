/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18004BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18001D3DC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18001E728 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18001F530 (--1-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::~ProcessLocalStorage<wil::details_abi::FeatureStateData>((__int64)&off_180063090);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
