/*
 * XREFs of ?IsCurrent@CDisplayManager@@QEBA_N_N@Z @ 0x1801E6BE4
 * Callers:
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x1800FF290 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDisplayManager::IsCurrent(CDisplayManager *this, char a2)
{
  int v3; // eax

  if ( !qword_180406B88 )
    return 0;
  if ( !(_BYTE)word_180406BB0 && !a2 )
    return 1;
  v3 = (*(__int64 (**)(void))(*(_QWORD *)qword_180406B88 + 104LL))();
  LOBYTE(word_180406BB0) = v3 == 0;
  return v3 != 0;
}
