/*
 * XREFs of _InitPwSB @ 0x1C00E1C98
 * Callers:
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C007B730 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     CalcSBStuff @ 0x1C00E1B78 (CalcSBStuff.c)
 *     xxxSetScrollBar @ 0x1C00E2528 (xxxSetScrollBar.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxShowScrollBar @ 0x1C0231730 (xxxShowScrollBar.c)
 * Callees:
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C0098DF4 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 *     DesktopAlloc @ 0x1C00E42F0 (DesktopAlloc.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 152);
  result = *(_QWORD *)(a1 + 152);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 36LL, 6LL);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v1, v3);
    if ( *v1 )
    {
      *(_DWORD *)(*v1 + 24LL) = 100;
      *(_DWORD *)(*v1 + 8LL) = 100;
    }
    return *v1;
  }
  return result;
}
