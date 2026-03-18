/*
 * XREFs of ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14010CA78
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C900 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14010CDDC (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x14010CBC0 (-doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z.c)
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14010CCFC (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall GroupedFGBoostProp::doImmediateBoostAll(__int64 a1, unsigned int a2)
{
  char result; // al
  __int64 v5; // rcx
  __int64 v6; // rbx

  result = IsForegroundWindow(*(const struct tagWND **)(a1 + 16));
  v6 = 0LL;
  if ( result && *(_DWORD *)(a1 + 24) )
  {
    do
    {
      result = GroupedFGBoostProp::doBoost(v5, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6), a2);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
