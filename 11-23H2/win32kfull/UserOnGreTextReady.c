/*
 * XREFs of UserOnGreTextReady @ 0x1C001A438
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001A310 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     xxxLW_LoadFonts @ 0x1C001A550 (xxxLW_LoadFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C001B600 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00D1D50 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00D1EA0 (xxxSetWindowNCMetrics.c)
 */

_BOOL8 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOL v9; // ebx
  struct _UNICODE_STRING *v10; // rsi
  BOOL v11; // edi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(1LL, 0LL);
  LogPixels = DrvGetLogPixels(v1, v0, v2);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0LL);
  v4 = (struct _UNICODE_STRING *)CreateProfileUserName(&v13);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v11 = xxxSetWindowNCMetrics(v4, 0LL) != 0;
    SetMinMetrics(v10);
    v9 = (unsigned int)SetIconMetrics(v10) != 0 && v11;
    FreeProfileUserName(v10, &v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
