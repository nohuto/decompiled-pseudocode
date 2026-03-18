/*
 * XREFs of ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD138
 * Callers:
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402AD36C (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall _ShouldFrostCrashedWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *(_QWORD **)(v1 + 464);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && IsTopLevelWindow((__int64)a1)
    && *(_QWORD *)(v1 + 496) == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19200)
    && !IsGhostWindowClass(a1, v7)
    && (*(_DWORD *)(*(_QWORD *)(v1 + 464) + 12LL) & 0x8000000) == 0
    && *v4 != *(_QWORD *)(W32GetUserGdiSessionState(v8) + 40)
    && !(unsigned int)IsProcessDwm(*v4)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 464))
    && (*(_DWORD *)(v1 + 672) > 0x9900u || (*(_DWORD *)(v1 + 688) & 0x80000) == 0)
    && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
    return 1;
  }
  return v3;
}
