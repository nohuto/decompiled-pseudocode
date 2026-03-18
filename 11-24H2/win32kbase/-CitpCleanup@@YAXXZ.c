/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x14023C244
 * Callers:
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14023CCE0 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140151F88 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanup(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  CitpCleanupGlobalImpactContext((struct _CIT_IMPACT_CONTEXT **)(v1 + 32));
  *(_WORD *)(v1 + 24) = 0;
  *(_BYTE *)(v1 + 1) = 1;
}
