/*
 * XREFs of ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C00239AC
 * Callers:
 *     SelectWindowRgn @ 0x1C002387C (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C015190A (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     NtUserGetWindowRgnEx @ 0x1C01D3F10 (NtUserGetWindowRgnEx.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220534 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
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
