/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140BB3E44
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140BB25EC (BgDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140A7B900 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB208C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140BB46EC (BgpGxDrawBitmapImage.c)
 */

NTSTATUS __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  NTSTATUS result; // eax
  ULONGLONG v2; // rax
  ULONGLONG v3; // rdi
  __int64 v4; // rsi
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h]

  pullResult = 0LL;
  v6 = 0LL;
  if ( (dword_140EF0270 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140EEFD22 )
    return -1073741823;
  v2 = off_140E00A30();
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6;
    if ( qword_140EF0310 + v3 < v3 )
      return -1073741675;
    v4 = v3 + qword_140EF0310;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
    if ( (unsigned __int64)qword_140EF0310 < 0x64 )
    {
      BgpClearScreen(HIDWORD(qword_140EF03F0));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
      result = BgpGxDrawBitmapImage(qword_140EF02B8, &qword_140EF02CC);
      if ( result >= 0 )
        return result;
      return BgpClearScreen(HIDWORD(qword_140EF03F0));
    }
    qword_140EF0310 = v4;
    KeInitializeTimer(&stru_140E65040);
    KeInitializeDpc(&stru_140E65100, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140E65040, 0LL, 0x64u, 0, &stru_140E65100) )
    {
      KeCancelTimer(&stru_140E65040);
      byte_140EEFD22 = 0;
      return BgpClearScreen(HIDWORD(qword_140EF03F0));
    }
    byte_140EEFD22 = 1;
    return 0;
  }
  return result;
}
