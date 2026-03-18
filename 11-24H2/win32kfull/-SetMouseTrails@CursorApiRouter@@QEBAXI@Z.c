/*
 * XREFs of ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DAEC8
 * Callers:
 *     SetMouseTrails @ 0x140239574 (SetMouseTrails.c)
 * Callees:
 *     SetPointer @ 0x140131500 (SetPointer.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402D9D08 (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402D9E74 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x1402DA5E0 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 */

void __fastcall CursorApiRouter::SetMouseTrails(CursorApiRouter *this, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  CursorApiRouter *v7; // rcx
  __int64 v8; // rdx
  CursorApiRouter *v9; // rcx
  __int64 v10; // r8

  SetPointer(0LL);
  v5 = a2 - 1;
  if ( !a2 )
    v5 = 0;
  *(_DWORD *)(W32GetUserSessionState(v4, v3) + 16296) = v5;
  SetPointer(1LL);
  if ( CursorApiRouter::IsGreTrailsTimerNeeded(v7, v6) )
    CursorApiRouter::EnsureGreTrailsTimer(v9, v8);
  else
    CursorApiRouter::DestroyGreTrailsTimerIfExists(v9, v8, v10);
}
