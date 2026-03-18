/*
 * XREFs of WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C005F890
 * Callers:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C005E8D8 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x1C005F7F8 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C006006C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 * Callees:
 *     ??$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C005F958 (--$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginPr.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C00EC204 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

__int64 __fastcall WindowMargins::_anonymous_namespace_::GetWindowMargins(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  char v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !(unsigned int)IsTopLevelWindow(a1)
    || !(unsigned int)CWindowProp::GetProp<WindowMargins::CWindowMarginProp>(v4, &v8) )
  {
    return 0LL;
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_DWORD *)(v5 + 288);
  if ( ((v6 >> 8) & 0x1FF) == 0
    && (*(_BYTE *)(v5 + 233) & 4) != 0
    && !a2
    && (v6 & 0xF) != 3
    && (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
  {
    GetWindowDpiLastNotify(a1);
  }
  return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(v8, &v9, a1);
}
