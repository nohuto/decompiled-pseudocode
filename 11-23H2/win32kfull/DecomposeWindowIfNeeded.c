/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C00243EC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1C0026348 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C00B2EA8 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  void *v3; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed() || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1);
    DirtyVisRgnTrackers(a1);
    v3 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v3);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
