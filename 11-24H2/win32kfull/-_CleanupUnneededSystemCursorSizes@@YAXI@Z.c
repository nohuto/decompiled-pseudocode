/*
 * XREFs of ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x140134B50
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x14007AA08 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1401341EC (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 */

void __fastcall _CleanupUnneededSystemCursorSizes(struct tagCURSOR *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4; // rsi
  struct tagCURSOR *DPICursor; // rax
  struct tagCURSOR *v6; // rdi
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax

  v2 = 0LL;
  v3 = (int)a1;
  v4 = 19LL;
  do
  {
    a1 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + v2 + 21936);
    if ( a1 )
    {
      DPICursor = FindDPICursor(a1, v3);
      v6 = DPICursor;
      if ( DPICursor )
      {
        if ( DPICursor != a1 )
        {
          UserGdiSessionState = W32GetUserGdiSessionState(a1);
          ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
          if ( ProcessWin32Process )
            ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
          FixupGlobalCursor(v6, ProcessWin32Process);
          _DestroyCursor(v6, 0LL);
        }
      }
    }
    v2 += 552LL;
    --v4;
  }
  while ( v4 );
}
