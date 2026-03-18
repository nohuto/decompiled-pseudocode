/*
 * XREFs of UserOnGreTextReady @ 0x140151528
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401513A0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     xxxSetWindowNCMetrics @ 0x140112218 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x140112D38 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x14011310C (SetMinMetrics.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxLW_LoadFonts @ 0x140116060 (xxxLW_LoadFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x140152AA8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 */

__int64 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *v3; // rax
  __int64 v4; // rcx
  int v5; // esi
  struct _UNICODE_STRING *v6; // rdi
  __int64 v7; // rdx
  int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-10h]

  v13 = 0LL;
  v15 = 0LL;
  v14 = -1LL;
  EnterCrit(1LL, 0LL);
  LogPixels = DrvGetLogPixels(v1, v0);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0);
  v3 = (struct _UNICODE_STRING *)CreateProfileUserName(&v13);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v9 = xxxSetWindowNCMetrics(v3, 0LL, -1);
    SetMinMetrics(v6, 0LL);
    LOBYTE(v5) = v9 != 0;
    v10 = (unsigned int)SetIconMetrics(v6, 0LL) != 0 ? v5 : 0;
    UserSessionSwitchLeaveCrit(v11);
    if ( v14 != -1 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v13, v12);
    return v10;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v4);
    if ( v14 != -1 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v13, v7);
    return 0LL;
  }
}
