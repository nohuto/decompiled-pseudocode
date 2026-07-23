/*
 * XREFs of ResFwBackgroundTransition @ 0x140BB7D28
 * Callers:
 *     BgpFwLibraryEnable @ 0x140699184 (BgpFwLibraryEnable.c)
 *     BgpFwLibraryDestroy @ 0x140BB3678 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 * Callees:
 *     ResFwpDestroyBackground @ 0x140BB3B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140BB3BB0 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140BB3C34 (ResFwpPageOutBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1, __int64 a2)
{
  __int64 v2; // rcx

  if ( a1 )
  {
    v2 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v2 )
    {
      if ( (_DWORD)v2 == 1 )
        ResFwpDestroyBackground(v2, a2);
    }
    else
    {
      ResFwpPageOutBackground(v2, a2);
    }
  }
  else
  {
    ResFwpPageInBackground();
  }
}
