/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x140159868
 * Callers:
 *     EditionNonDwmSpeedHitTest @ 0x1401597C0 (EditionNonDwmSpeedHitTest.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1401B9D88 (xxxRetrievePointerInputMessage.c)
 *     xxxDoDeferredPointerActivate @ 0x140224E28 (xxxDoDeferredPointerActivate.c)
 *     EditionNonDwmTouchHitTest @ 0x1402A36C0 (EditionNonDwmTouchHitTest.c)
 *     EditionPostDwmSpeedHitTest @ 0x1402A3910 (EditionPostDwmSpeedHitTest.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1402A4390 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402A9390 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  memset_0(a1, 0, 0x70uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
  }
  return a1;
}
