/*
 * XREFs of ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14010CC90
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C900 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x14010CB0C (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14010CDDC (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealGetProp @ 0x140042C50 (RealGetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<GroupedFGBoostProp>(__int64 a1, __int64 *a2)
{
  __int16 v4; // bx
  __int64 Prop; // rax

  v4 = *(_WORD *)(W32GetUserSessionState(a1) + 42316);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144));
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v4, 1);
  *a2 = Prop;
  return Prop != 0;
}
