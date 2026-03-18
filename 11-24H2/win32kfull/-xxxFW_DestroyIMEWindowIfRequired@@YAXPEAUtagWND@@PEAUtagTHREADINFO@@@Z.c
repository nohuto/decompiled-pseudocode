/*
 * XREFs of ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B452C
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E770 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x140170BB0 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1401BF794 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxFW_DestroyIMEWindowIfRequired(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 UserSessionState; // rax
  _WORD *v11; // rcx
  __int64 v12; // rax
  int CanDestroyDefIME; // ebx
  struct tagWND *v14; // rcx
  int v15; // eax
  struct tagWND *v16; // rcx

  v4 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  v7 = *(_DWORD **)(W32GetUserSessionState(v6, v5) + 19928);
  if ( (*v7 & 4) == 0
    || (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) != 0
    || !*((_QWORD *)a2 + 103)
    || (v9 = *((_QWORD *)a1 + 17), (*(_BYTE *)(*(_QWORD *)(v9 + 8) + 10LL) & 1) != 0)
    || (UserSessionState = W32GetUserSessionState(v8, v7),
        v11 = *(_WORD **)(v9 + 8),
        *v11 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19928) + 898LL)) )
  {
    if ( v4 )
      return;
    goto LABEL_15;
  }
  if ( v4 )
    return;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    if ( !*((_QWORD *)a1 + 13) || !(unsigned int)ImeCanDestroyDefIMEforChild(*((struct tagWND ***)a2 + 103), a1) )
      goto LABEL_15;
    v14 = (struct tagWND *)*((_QWORD *)a2 + 103);
  }
  else
  {
    v12 = W32GetUserSessionState(v11, v7);
    ++*(_DWORD *)(v12 + 70856);
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*((struct tagWND ***)a2 + 103), a1);
    zzzEndDeferWinEventNotify();
    if ( !CanDestroyDefIME )
      goto LABEL_15;
    v14 = (struct tagWND *)*((_QWORD *)a2 + 103);
    if ( !v14 )
      goto LABEL_15;
  }
  xxxDestroyWindow(v14, (__int64)v7);
LABEL_15:
  v15 = *((_DWORD *)a1 + 95);
  if ( (v15 & 0x10000000) != 0 )
  {
    *((_DWORD *)a1 + 95) = v15 & 0xEFFFFFFF;
    --*((_DWORD *)a2 + 238);
  }
  v16 = (struct tagWND *)*((_QWORD *)a2 + 103);
  if ( v16 && !*((_DWORD *)a2 + 238) && a1 != v16 )
    xxxDestroyWindow(v16, (__int64)v7);
}
