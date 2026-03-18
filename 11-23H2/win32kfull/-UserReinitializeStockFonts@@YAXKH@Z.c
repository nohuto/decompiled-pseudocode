/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C001B600
 * Callers:
 *     UserOnGreTextReady @ 0x1C001A438 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C001B770 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GetCharDimensions @ 0x1C00CD400 (GetCharDimensions.c)
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rbx
  __int64 SystemFont; // rax
  __int64 SessionDpiServerInfo; // rbx
  __int64 v3; // rax

  GreReinitializeStockFonts();
  v0 = Get96DpiServerInfo();
  SystemFont = GreGetSystemFont(0LL);
  *(_QWORD *)(v0 + 24) = SystemFont;
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), SystemFont, 1LL);
  *(_DWORD *)(v0 + 32) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 64LL), v0 + 40, v0 + 36);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v3 = GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v3;
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), v3, 1LL);
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(SessionDpiServerInfo + 24), 1LL);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(_QWORD *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             SessionDpiServerInfo + 36);
  UpdateDpiMetricsCacheDPISERVERINFO();
}
