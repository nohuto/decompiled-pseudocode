/*
 * XREFs of ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14010CCFC
 * Callers:
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14010CA78 (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsForegroundWindow(const struct tagWND *a1)
{
  __int64 v2; // rcx

  return *(_QWORD *)(W32GetUserSessionState(a1) + 18944) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL)
      && *(const struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v2) + 18944) + 128LL) == a1;
}
