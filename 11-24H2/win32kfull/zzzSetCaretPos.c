/*
 * XREFs of zzzSetCaretPos @ 0x1400950F8
 * Callers:
 *     NtUserSetCaretPos @ 0x140095040 (NtUserSetCaretPos.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x140036838 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946B8 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946FC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140095308 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     GreLPtoDP @ 0x1400953BC (GreLPtoDP.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(LONG a1, LONG a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 y; // rdx
  __int64 v7; // rdi
  LONG *v8; // rsi
  __int64 x; // rcx
  int v10; // edx
  int v11; // edx
  HDC DC; // rbx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  __int64 UserSessionState; // rax
  struct tagPOINT v18; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+3Ch] [rbp-3Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v7 = *((_QWORD *)PtiCurrent(v5, v4) + 59);
    v8 = (LONG *)(v7 + 368);
    if ( *(_DWORD *)(v7 + 364) != a1 || *v8 != a2 )
    {
      x = *(_QWORD *)(v7 + 344);
      if ( x )
      {
        y = *(_QWORD *)(*(_QWORD *)(x + 136) + 8LL);
        if ( (*(_DWORD *)(y + 8) & 0x20) != 0 )
        {
          v10 = a1 + *(_DWORD *)(v7 + 376);
          v18.x = a1;
          v19 = v10;
          v11 = a2 + *(_DWORD *)(v7 + 372);
          v18.y = a2;
          v20 = v11;
          DC = (HDC)_GetDC(x);
          GreLPtoDP(DC, &v18);
          _ReleaseDC(DC);
          x = (unsigned int)v18.x;
          y = (unsigned int)v18.y;
          v13 = v19 - v18.x;
          *(_DWORD *)(v7 + 404) = v18.x;
          *(_DWORD *)(v7 + 412) = v13;
          v14 = v20 - y;
          *(_DWORD *)(v7 + 408) = y;
          *(_DWORD *)(v7 + 416) = v14;
        }
      }
      if ( (*(_DWORD *)(v7 + 352) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v7 + 364) = a1;
      *v8 = a2;
      if ( *(_QWORD *)(v7 + 392) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v7 + 344), (struct tagQ *)v7);
        CreateCaretTimer(*(struct tagWND **)(v7 + 344), (struct tagQ *)v7);
      }
      v15 = *(_DWORD *)(v7 + 352) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v7 + 352) = v15;
      if ( !*(_DWORD *)(v7 + 356) )
      {
        *(_DWORD *)(v7 + 352) = v15 | 1;
        UT_InvertCaret();
      }
      UserSessionState = W32GetUserSessionState(x, y);
      xxxWindowEvent(0x800Bu, *(struct tagWND **)(v7 + 344), -8, 0, *(_DWORD *)(UserSessionState + 70856) != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
