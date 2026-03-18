/*
 * XREFs of ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x140148DBC
 * Callers:
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140148C3C (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140194B60 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064ACC (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall _ShouldGhostWindow(const struct tagWND *a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD **)(v1 + 464);
  return !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
      && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
      && IsTopLevelWindow((__int64)a1)
      && *(_QWORD *)(v1 + 496) == *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19200)
      && !IsGhostWindowClass(a1)
      && !GetFrostProp(a1, v6)
      && (*(_DWORD *)(*(_QWORD *)(v1 + 464) + 12LL) & 0x8000000) == 0
      && *v3 != *(_QWORD *)(W32GetUserGdiSessionState(v7) + 40)
      && !(unsigned int)IsProcessDwm(*v3)
      && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 464))
      && (*(_DWORD *)(v1 + 672) > 0x9900u || (*(_DWORD *)(v1 + 688) & 0x80000) == 0)
      && a1 != (const struct tagWND *)GetDesktopWindow((__int64)a1);
}
