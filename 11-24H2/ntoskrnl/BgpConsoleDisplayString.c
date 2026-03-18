/*
 * XREFs of BgpConsoleDisplayString @ 0x140BB0E60
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140BB0BC4 (BgpConsoleDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayString(_WORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // ebx
  int v6; // eax

  BgpFwAcquireLock();
  v3 = qword_140EEFAB0;
  if ( qword_140EEFAB0 )
  {
    if ( a1 )
    {
      if ( *a1 )
      {
        if ( (*(_DWORD *)(qword_140EEFAB0 + 8) & 0x10000) != 0 )
        {
          AnFwFadeCompletion();
          v3 = qword_140EEFAB0;
          *(_DWORD *)(qword_140EEFAB0 + 8) &= ~0x10000u;
        }
        v2 = (unsigned __int16)*a1;
        v4 = 0;
        if ( (_WORD)v2 )
        {
          while ( 1 )
          {
            v6 = BgpConsoleDisplayCharacterEx(
                   v2,
                   *(_DWORD *)(v3 + 68),
                   *(_DWORD *)(v3 + 72),
                   *(_DWORD *)(v3 + 12),
                   *(_DWORD *)(v3 + 16));
            if ( v6 < 0 && v4 >= 0 )
              v4 = v6;
            v2 = (unsigned __int16)*++a1;
            if ( !(_WORD)v2 )
              break;
            v3 = qword_140EEFAB0;
          }
        }
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v4 = -1073741823;
  }
  BgpFwReleaseLock(v2, v3);
  return (unsigned int)v4;
}
