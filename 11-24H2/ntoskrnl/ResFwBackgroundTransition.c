/*
 * XREFs of ResFwBackgroundTransition @ 0x140BB5D28
 * Callers:
 *     BgpFwLibraryEnable @ 0x140698104 (BgpFwLibraryEnable.c)
 *     BgpFwLibraryDestroy @ 0x140BB1678 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140BB1724 (BgpFwLibraryDisable.c)
 * Callees:
 *     ResFwpDestroyBackground @ 0x140BB1B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140BB1BB0 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140BB1C34 (ResFwpPageOutBackground.c)
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
