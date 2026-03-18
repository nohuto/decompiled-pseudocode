/*
 * XREFs of BgpConsoleSetCursor @ 0x140BB1520
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x140BB0F18 (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rax
  unsigned int v9; // ebx

  BgpFwAcquireLock();
  v8 = (_DWORD *)qword_140EEFAB0;
  v9 = 0;
  if ( qword_140EEFAB0 )
  {
    if ( a1 >= 0x50 || a2 >= *(_DWORD *)(qword_140EEFAB0 + 4) || a3 > 0x64 )
    {
      v9 = -1073741811;
    }
    else if ( *(_DWORD *)(qword_140EEFAB0 + 68) != a1
           || *(_DWORD *)(qword_140EEFAB0 + 72) != a2
           || *(_DWORD *)(qword_140EEFAB0 + 76) != a3 )
    {
      if ( *(_DWORD *)(qword_140EEFAB0 + 76) )
      {
        *(_DWORD *)(qword_140EEFAB0 + 76) = 0;
        BgpConsoleDrawCursor();
        v8 = (_DWORD *)qword_140EEFAB0;
      }
      v8[17] = a1;
      v8[18] = a2;
      v8[19] = a3;
      if ( a3 )
        BgpConsoleDrawCursor();
    }
  }
  else
  {
    v9 = -1073741823;
  }
  BgpFwReleaseLock(v7, v6);
  return v9;
}
