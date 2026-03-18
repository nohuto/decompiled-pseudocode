/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C00B4A8C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetDisplayAffinity @ 0x1C022C52C (SetDisplayAffinity.c)
 * Callees:
 *     ComposeWindow @ 0x1C0026348 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C00B2EA8 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1, int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  void *v12; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (LOBYTE(v4) = IsDesktopWindow((__int64)a1), v4) && (unsigned int)IsWindowDesktopComposed(v5)
    || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v6 = ComposeWindow(a1, a2 != 0 ? 13 : 5);
    DirtyVisRgnTrackers(a1);
    v8 = *((_QWORD *)a1 + 5);
    v9 = *(_QWORD *)a1;
    v10 = *(_DWORD *)(v8 + 28);
    v12 = (void *)ReferenceDwmApiPort(v8, v11);
    DwmAsyncChildStyleChange(v12, v9, -16, v10);
  }
  else
  {
    return 4063234;
  }
  return v6;
}
