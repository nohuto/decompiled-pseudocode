/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140BB1E44
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140BB05EC (BgDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x140BB1724 (BgpFwLibraryDisable.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     RtlULongLongMult @ 0x140437830 (RtlULongLongMult.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     BgpClearScreen @ 0x140697E28 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140A80EA0 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB008C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140BB26EC (BgpGxDrawBitmapImage.c)
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
  if ( (dword_140EF0050 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140EEFAC9 )
    return -1073741823;
  v2 = off_140E00A30();
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6;
    if ( qword_140EF00F0 + v3 < v3 )
      return -1073741675;
    v4 = v3 + qword_140EF00F0;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
    if ( (unsigned __int64)qword_140EF00F0 < 0x64 )
    {
      BgpClearScreen(HIDWORD(qword_140EF01D0));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
      result = BgpGxDrawBitmapImage(qword_140EF0098, &qword_140EF00AC);
      if ( result >= 0 )
        return result;
      return BgpClearScreen(HIDWORD(qword_140EF01D0));
    }
    qword_140EF00F0 = v4;
    KeInitializeTimer(&stru_140E64EC0);
    KeInitializeDpc(&stru_140E64F80, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140E64EC0, 0LL, 0x64u, 0, &stru_140E64F80) )
    {
      KeCancelTimer(&stru_140E64EC0);
      byte_140EEFAC9 = 0;
      return BgpClearScreen(HIDWORD(qword_140EF01D0));
    }
    byte_140EEFAC9 = 1;
    return 0;
  }
  return result;
}
