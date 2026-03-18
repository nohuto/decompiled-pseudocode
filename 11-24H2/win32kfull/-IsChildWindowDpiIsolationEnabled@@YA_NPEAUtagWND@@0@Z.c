/*
 * XREFs of ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401BC7BC
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 * Callees:
 *     <none>
 */

char __fastcall IsChildWindowDpiIsolationEnabled(struct tagWND *a1, struct tagWND *a2)
{
  char v4; // bl
  __int64 v5; // rcx
  int v7; // eax

  v4 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 120LL)
    && a2
    && *(_DWORD *)(*((_QWORD *)a2 + 5) + 292LL) == 1 )
  {
    if ( a1 )
      v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
    else
      LOBYTE(v7) = W32GetCurrentThreadDpiAwarenessContext(v5);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) & 0xF) == 2 || (v7 & 0xF) != 2 )
      return 1;
  }
  return v4;
}
