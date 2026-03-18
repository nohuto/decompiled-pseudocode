/*
 * XREFs of ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002DDA0
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140204128 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 * Callees:
 *     FVisCountable @ 0x14002DE20 (FVisCountable.c)
 *     ?DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1402D2228 (-DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DecVisWindows(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( (unsigned int)FVisCountable() )
  {
    v2 = *((_QWORD *)a1 + 2);
    --*(_DWORD *)(v2 + 948);
    v3 = *(_QWORD *)(v2 + 464);
    --*(_DWORD *)(v3 + 1016);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x60) != 0 )
      DecCloakWindows((struct tagPROCESSINFO *)v3);
    if ( *(_DWORD *)(v3 + 1016) <= *(_DWORD *)(v3 + 1020) )
      tagPROCESSINFO::UpdateProcessVisibility(v3, 1LL);
  }
}
