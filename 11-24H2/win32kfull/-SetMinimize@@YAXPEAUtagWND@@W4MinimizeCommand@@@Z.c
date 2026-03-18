/*
 * XREFs of ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140204128
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002DDA0 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002FD48 (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 */

void __fastcall SetMinimize(struct tagWND *a1, int a2)
{
  char v3; // di

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10;
  if ( a2 == 1 )
  {
    if ( v3 )
      DecVisWindows(a1);
    SetOrClrWF(1, a1, 0xF20u, 1);
  }
  else
  {
    SetOrClrWF(0, a1, 0xF20u, 1);
    if ( v3 )
      IncVisWindows(a1);
  }
  tagWND::ComputeDominantState(a1);
}
