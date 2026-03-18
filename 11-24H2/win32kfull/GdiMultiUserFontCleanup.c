/*
 * XREFs of GdiMultiUserFontCleanup @ 0x140145B00
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanUpEUDC@@YAXXZ @ 0x140145B74 (-CleanUpEUDC@@YAXXZ.c)
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x140145CAC (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 *     ?vCleanUpFntCache@@YAXXZ @ 0x14026C8EC (-vCleanUpFntCache@@YAXXZ.c)
 *     ?vCleanupPrintKViewList@@YAXXZ @ 0x14030E600 (-vCleanupPrintKViewList@@YAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx

  CleanUpEUDC();
  v3 = *(_QWORD *)(W32GetSessionState(v1, v0, v2) + 96);
  if ( *(_QWORD *)(v3 + 20408) )
    bCleanupFontTable((struct PFT **)(v3 + 20408));
  if ( *(_QWORD *)(v3 + 20416) )
    bCleanupFontTable((struct PFT **)(v3 + 20416));
  if ( *(_QWORD *)(v3 + 20424) )
    bCleanupFontTable((struct PFT **)(v3 + 20424));
  if ( *(_QWORD *)(v3 + 24032) )
    vCleanupPrintKViewList();
  vCleanUpFntCache();
}
