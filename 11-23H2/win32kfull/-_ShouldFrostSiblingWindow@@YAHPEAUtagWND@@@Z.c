/*
 * XREFs of ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F39F0
 * Callers:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4B48 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 */

__int64 __fastcall _ShouldFrostSiblingWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  _QWORD *v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax

  v1 = 0;
  v2 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD **)(v2 + 424);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0xC0) == 0xC0
    && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(v5 + 31) & 0x10) != 0
    && *(_QWORD *)(v2 + 456) == grpdeskRitInput )
  {
    v7 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != (_WORD)v7
      && !GetProp((__int64)a1, v7, 1LL, v6)
      && !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL, v8)
      && (*(_DWORD *)(*(_QWORD *)(v2 + 424) + 12LL) & 0x8000000) == 0
      && *v4 != gpepCSRSS
      && !(unsigned int)IsProcessDwm(*v4)
      && (*(_DWORD *)(v2 + 632) > 0x9900u || (*(_DWORD *)(v2 + 648) & 0x80000) == 0)
      && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
    {
      v9 = *(_QWORD *)(v2 + 464);
      if ( a1 != *(struct tagWND **)(v9 + 168) && a1 != *(struct tagWND **)(v9 + 184) )
        return 1;
    }
  }
  return v1;
}
