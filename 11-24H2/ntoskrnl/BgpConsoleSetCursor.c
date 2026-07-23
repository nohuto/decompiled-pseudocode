/*
 * XREFs of BgpConsoleSetCursor @ 0x140BB3520
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x140BB2F18 (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned int v10; // ebx

  v4 = a3;
  v5 = a2;
  v6 = a1;
  BgpFwAcquireLock(a1, a2, a3, a4);
  v9 = (_DWORD *)qword_140EEFD00;
  v10 = 0;
  if ( qword_140EEFD00 )
  {
    if ( v6 >= 0x50 || v5 >= *(_DWORD *)(qword_140EEFD00 + 4) || v4 > 0x64 )
    {
      v10 = -1073741811;
    }
    else if ( *(_DWORD *)(qword_140EEFD00 + 68) != v6
           || *(_DWORD *)(qword_140EEFD00 + 72) != v5
           || *(_DWORD *)(qword_140EEFD00 + 76) != v4 )
    {
      if ( *(_DWORD *)(qword_140EEFD00 + 76) )
      {
        *(_DWORD *)(qword_140EEFD00 + 76) = 0;
        BgpConsoleDrawCursor();
        v9 = (_DWORD *)qword_140EEFD00;
      }
      v9[17] = v6;
      v9[18] = v5;
      v9[19] = v4;
      if ( v4 )
        BgpConsoleDrawCursor();
    }
  }
  else
  {
    v10 = -1073741823;
  }
  BgpFwReleaseLock(v8, v7);
  return v10;
}
