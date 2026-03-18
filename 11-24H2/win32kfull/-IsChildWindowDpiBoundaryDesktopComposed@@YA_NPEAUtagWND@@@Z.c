/*
 * XREFs of ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1400756D0
 * Callers:
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x140031868 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  char v2; // bl

  v2 = 0;
  if ( IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
