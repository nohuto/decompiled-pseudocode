/*
 * XREFs of ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140151F88
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1400B612C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140151EE0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x14023C244 (-CitpCleanup@@YAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14023C27C (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1)
{
  __int64 v2; // rbx
  struct _CIT_IMPACT_CONTEXT *v3; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  v3 = *(struct _CIT_IMPACT_CONTEXT **)(v2 + 32);
  if ( v3 )
  {
    CitpContextCleanup(v3);
    GreDeleteFastMutex(*(char **)(v2 + 32));
    *(_QWORD *)(v2 + 32) = 0LL;
  }
  *a1 = 0LL;
}
