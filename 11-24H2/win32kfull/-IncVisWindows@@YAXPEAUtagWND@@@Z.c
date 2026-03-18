/*
 * XREFs of ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002FD48
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140204128 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 * Callees:
 *     FVisCountable @ 0x14002DE20 (FVisCountable.c)
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x1400F7DEC (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall IncVisWindows(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  unsigned int *v4; // rdx
  unsigned int v5; // r9d

  if ( (unsigned int)FVisCountable((__int64)a1) )
  {
    v2 = *((_QWORD *)a1 + 2);
    ++*(_DWORD *)(v2 + 948);
    if ( (tagTHREADINFO::GetForegroundActivate(v2) & 0x20) != 0 && IsForegroundWindow(a1) )
      tagTHREADINFO::ClearForegroundActivate(v2, 32LL);
    v3 = *(_QWORD *)(v2 + 464);
    v4 = (unsigned int *)(v3 + 1020);
    v5 = *(_DWORD *)(v3 + 1016) + 1;
    *(_DWORD *)(v3 + 1016) = v5;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x60) != 0 )
      ++*v4;
    if ( v5 > *v4 )
      tagPROCESSINFO::UpdateProcessVisibility(v3, 0LL);
    *(_QWORD *)(v2 + 1360) |= 0x100000000uLL;
    EtwTraceProcessWindowInfo(v2);
  }
}
