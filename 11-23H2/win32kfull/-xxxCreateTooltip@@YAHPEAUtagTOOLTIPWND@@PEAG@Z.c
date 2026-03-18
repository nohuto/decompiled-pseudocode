/*
 * XREFs of ?xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z @ 0x1C0224EDC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0224D38 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0225218 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxCreateTooltip(struct tagTOOLTIPWND *a1, unsigned __int16 *a2)
{
  struct tagWND *v3; // rcx

  *((_QWORD *)a1 + 6) = a2;
  v3 = *(struct tagWND **)a1;
  if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL) & 0x10) != 0 )
  {
    xxxSetWindowPos(v3, 0LL, 0LL, 0LL, 0, 0, 1175);
    return xxxShowTooltip(a1);
  }
  else
  {
    SetTooltipTimer(a1, 1, *((_DWORD *)a1 + 2));
    return 1LL;
  }
}
