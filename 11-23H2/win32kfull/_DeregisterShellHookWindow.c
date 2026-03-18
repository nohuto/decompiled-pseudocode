/*
 * XREFs of _DeregisterShellHookWindow @ 0x1C00992E4
 * Callers:
 *     NtUserDeregisterShellHookWindow @ 0x1C0099230 (NtUserDeregisterShellHookWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C0044790 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 */

__int64 __fastcall DeregisterShellHookWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(v5 + 8) + 240LL), a2, a1, a4, 0LL) )
    SetOrClrWF(0LL, a1, 1856LL, 1LL);
  return 1LL;
}
