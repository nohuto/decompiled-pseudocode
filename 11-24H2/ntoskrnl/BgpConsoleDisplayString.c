/*
 * XREFs of BgpConsoleDisplayString @ 0x140BB2E60
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140BB2BC4 (BgpConsoleDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  int v9; // eax

  v4 = (_WORD *)a1;
  BgpFwAcquireLock(a1, a2, a3, a4);
  v6 = qword_140EEFD00;
  if ( qword_140EEFD00 )
  {
    if ( v4 )
    {
      if ( *v4 )
      {
        if ( (*(_DWORD *)(qword_140EEFD00 + 8) & 0x10000) != 0 )
        {
          AnFwFadeCompletion();
          v6 = qword_140EEFD00;
          *(_DWORD *)(qword_140EEFD00 + 8) &= ~0x10000u;
        }
        v5 = (unsigned __int16)*v4;
        v7 = 0;
        if ( (_WORD)v5 )
        {
          while ( 1 )
          {
            v9 = BgpConsoleDisplayCharacterEx(
                   v5,
                   *(_DWORD *)(v6 + 68),
                   *(_DWORD *)(v6 + 72),
                   *(_DWORD *)(v6 + 12),
                   *(_DWORD *)(v6 + 16));
            if ( v9 < 0 && v7 >= 0 )
              v7 = v9;
            v5 = (unsigned __int16)*++v4;
            if ( !(_WORD)v5 )
              break;
            v6 = qword_140EEFD00;
          }
        }
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock(v5, v6);
  return (unsigned int)v7;
}
