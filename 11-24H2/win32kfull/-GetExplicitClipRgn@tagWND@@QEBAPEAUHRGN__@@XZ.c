/*
 * XREFs of ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x140031010
 * Callers:
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     OffsetWindow @ 0x140030E80 (OffsetWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1400365E4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E4B00 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserGetWindowRgnEx @ 0x140297EF0 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall tagWND::GetExplicitClipRgn(tagWND *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v1 + 21) & 8) != 0 )
    return 0LL;
  else
    return *(HRGN *)(v1 + 168);
}
