/*
 * XREFs of PsW32ScreenSaver_Show @ 0x1C02000E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C006E4C4 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x1C01FFFCC (-StartScreenSaver@@YAXH@Z.c)
 */

void PsW32ScreenSaver_Show()
{
  const struct tagTHREADINFO **v0; // rcx

  if ( gpqForeground && (v0 = *(const struct tagTHREADINFO ***)(gpqForeground + 128LL)) != 0LL && !IsHungWindow(v0) )
  {
    if ( (*gpsi & 0x200) != 0 )
      StartScreenSaver(1LL);
    PostMessage(*(struct tagWND **)(gpqForeground + 128LL), 0x112u, 0xF140uLL, (*gpsi >> 9) & 1);
  }
  else
  {
    StartScreenSaver(0LL);
  }
}
