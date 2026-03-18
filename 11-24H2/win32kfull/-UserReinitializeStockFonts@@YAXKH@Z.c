/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x140152AA8
 * Callers:
 *     UserOnGreTextReady @ 0x140151528 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GetCharDimensions @ 0x1401CDCAC (GetCharDimensions.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1401E28B8 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     InvalidateSecondaryDpiServerInfos @ 0x1402877B4 (InvalidateSecondaryDpiServerInfos.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdi
  HFONT SystemFont; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  HFONT v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  HFONT v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax

  GreReinitializeStockFonts();
  v2 = *(_QWORD *)(W32GetUserSessionState(v1, v0) + 19928);
  SystemFont = (HFONT)GreGetSystemFont(0LL);
  *(_QWORD *)(v2 + 5224) = SystemFont;
  UserSessionState = W32GetUserSessionState(v5, v4);
  GreSelectFont(*(HDC *)(*(_QWORD *)(UserSessionState + 57008) + 72LL), SystemFont);
  v9 = W32GetUserSessionState(v8, v7);
  *(_DWORD *)(v2 + 5232) = GetCharDimensions(*(HDC *)(*(_QWORD *)(v9 + 57008) + 72LL));
  v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928);
  v13 = (HFONT)GreGetSystemFont(1LL);
  *(_QWORD *)(v12 + 5120) = v13;
  v16 = W32GetUserSessionState(v15, v14);
  GreSelectFont(*(HDC *)(*(_QWORD *)(v16 + 57008) + 72LL), v13);
  v17 = *(HFONT *)(v12 + 5120);
  v20 = W32GetUserSessionState(v19, v18);
  GreSelectFont(*(HDC *)(*(_QWORD *)(v20 + 57008) + 80LL), v17);
  v23 = W32GetUserSessionState(v22, v21);
  *(_DWORD *)(v12 + 5128) = GetCharDimensions(*(HDC *)(*(_QWORD *)(v23 + 57008) + 72LL));
  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
    InvalidateSecondaryDpiServerInfos();
  else
    UpdateDpiMetricsCacheDPISERVERINFO();
}
