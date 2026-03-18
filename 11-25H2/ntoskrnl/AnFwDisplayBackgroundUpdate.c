/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140BA1E44
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140BA05EC (BgDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x140BA1724 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     BgpClearScreen @ 0x14068CAD8 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140A7F040 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BA008C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140BA26EC (BgpGxDrawBitmapImage.c)
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
  if ( (dword_140EEFD90 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140EEF832 )
    return -1073741823;
  v2 = off_140E00A30();
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6;
    if ( qword_140EEFE30 + v3 < v3 )
      return -1073741675;
    v4 = v3 + qword_140EEFE30;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
    if ( (unsigned __int64)qword_140EEFE30 < 0x64 )
    {
      BgpClearScreen(HIDWORD(qword_140EEFF10));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
      result = BgpGxDrawBitmapImage(qword_140EEFDD8, &qword_140EEFDEC);
      if ( result >= 0 )
        return result;
      return BgpClearScreen(HIDWORD(qword_140EEFF10));
    }
    qword_140EEFE30 = v4;
    KeInitializeTimer(&stru_140E64C80);
    KeInitializeDpc(&stru_140E64D40, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140E64C80, 0LL, 0x64u, 0, &stru_140E64D40) )
    {
      KeCancelTimer(&stru_140E64C80);
      byte_140EEF832 = 0;
      return BgpClearScreen(HIDWORD(qword_140EEFF10));
    }
    byte_140EEF832 = 1;
    return 0;
  }
  return result;
}
