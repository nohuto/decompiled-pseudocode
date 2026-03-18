/*
 * XREFs of ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1401C14B8 (SetDisplayAffinity.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1400756D0 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  void *v12; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v4)
    || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v5 = ComposeWindow(a1, a2 != 0 ? 13 : 5);
    DirtyVisRgnTrackers(a1, v7);
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
  return v5;
}
