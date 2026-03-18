/*
 * XREFs of ?IsCurrent@CDisplayManager@@QEBA_N_N@Z @ 0x1801DB768
 * Callers:
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x180157830 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDisplayManager::IsCurrent(CDisplayManager *this, char a2)
{
  int v3; // eax

  if ( !qword_1803FAB38 )
    return 0;
  if ( !(_BYTE)word_1803FAB60 && !a2 )
    return 1;
  v3 = (*(__int64 (**)(void))(*(_QWORD *)qword_1803FAB38 + 104LL))();
  LOBYTE(word_1803FAB60) = v3 == 0;
  return v3 != 0;
}
