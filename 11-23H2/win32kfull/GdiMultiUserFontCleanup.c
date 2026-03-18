/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C001C010
 * Callers:
 *     <none>
 * Callees:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C001B484 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C001BF44 (-CleanUpEUDC@@YAXXZ.c)
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C001C0C0 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vCleanupPrintKViewList@@YAXXZ @ 0x1C02B6AAC (-vCleanupPrintKViewList@@YAXXZ.c)
 */

void __fastcall GdiMultiUserFontCleanup(Gre::Base *a1)
{
  Gre::Base *v1; // rcx
  struct PFT **v2; // rcx
  __int64 v3; // rbx
  struct PFT **v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC(a1);
  v2 = (struct PFT **)((char *)Gre::Base::Globals(v1) + 6368);
  if ( *v2 )
    bCleanupFontTable(v2);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  if ( *(_QWORD *)(v3 + 20272) )
    bCleanupFontTable((struct PFT **)(v3 + 20272));
  v4 = (struct PFT **)(v3 + 20280);
  if ( *(_QWORD *)(v3 + 20280) )
    bCleanupFontTable(v4);
  if ( *(_QWORD *)(v3 + 23392) )
    vCleanupPrintKViewList();
  v5 = Gre::Base::Globals((Gre::Base *)v4);
  v6 = *((_QWORD *)v5 + 8);
  if ( v6 )
  {
    v8 = *((_QWORD *)v5 + 8);
    GreAcquireSemaphore(v6);
    vCleanUpFntCacheInternal(v7);
    SEMOBJ::vUnlock((SEMOBJ *)&v8);
  }
}
