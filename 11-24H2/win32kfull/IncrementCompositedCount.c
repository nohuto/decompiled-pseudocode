/*
 * XREFs of IncrementCompositedCount @ 0x14002FE3C
 * Callers:
 *     IncCompositedVisWindows @ 0x14002FE18 (IncCompositedVisWindows.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 * Callees:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edi
  int v2; // ebx
  __int64 UserSessionState; // rax
  __int64 v4; // rax
  __int64 v5; // rbx

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    v2 = *(_DWORD *)(W32GetUserSessionState() + 43320);
    UserSessionState = W32GetUserSessionState();
    ++*(_DWORD *)(UserSessionState + 43320);
    if ( !v2 )
    {
      v4 = W32GetUserSessionState();
      v5 = *(_QWORD *)(v4 + 68728);
      if ( v5 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v4 + 68728)) + 25) & 1) == 0 )
          InternalSetTimer(v5, 65525, 100, (unsigned int)xxxSystemTimerProc, 0, 66);
      }
    }
    return 1;
  }
  return v1;
}
