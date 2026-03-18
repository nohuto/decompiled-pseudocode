/*
 * XREFs of ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x140170F7C
 * Callers:
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x140170D90 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 */

struct tagWND *__fastcall GetLastTopMostWindowNoIME(struct tagWND *a1)
{
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWND *v5; // rbp
  struct tagWND *v6; // rdi
  struct tagWND *v7; // rsi
  __int16 *v8; // rbx
  __int16 v9; // bx

  DesktopWindow = GetDesktopWindow((__int64)a1);
  v5 = 0LL;
  if ( !DesktopWindow )
    return 0LL;
  v6 = *(struct tagWND **)(DesktopWindow + 112);
  if ( !v6 )
    return 0LL;
  do
  {
    if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 24LL) & 8) == 0 )
      break;
    v7 = v6;
    v8 = *(__int16 **)(*((_QWORD *)v6 + 17) + 8LL);
    if ( (v8[5] & 1) == 0 )
    {
      v9 = *v8;
      v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19928);
      if ( v9 != *(_WORD *)(v4 + 898) )
        continue;
    }
    while ( v7 )
    {
      if ( a1 == v7 )
        goto LABEL_7;
      v7 = (struct tagWND *)*((_QWORD *)v7 + 15);
    }
    v5 = v6;
LABEL_7:
    v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
  }
  while ( v6 );
  return v5;
}
