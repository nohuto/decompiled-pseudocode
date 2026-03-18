/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140BA21B0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpClearScreen @ 0x14068CAD8 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140A7F040 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BA008C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140BA26EC (BgpGxDrawBitmapImage.c)
 *     AnFwpDisableProgressTimer @ 0x140BA3CB4 (AnFwpDisableProgressTimer.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONGLONG v4; // rax
  ULONGLONG v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  pullResult = 0LL;
  v9 = 0LL;
  v4 = off_140E00A30();
  if ( RtlULongLongMult(v4, 0x3E8uLL, &pullResult) >= 0 )
  {
    v5 = pullResult / v9;
    BgpFwAcquireLock();
    if ( v5 >= qword_140EEFE30 )
    {
      if ( byte_140EEF832 )
      {
        AnFwpDisableProgressTimer();
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
        if ( qword_140EEFDD8 )
        {
          BgpClearScreen(HIDWORD(qword_140EEFF10));
          if ( (int)BgpGxDrawBitmapImage(qword_140EEFDD8, &qword_140EEFDEC) < 0 )
            BgpClearScreen(HIDWORD(qword_140EEFF10));
        }
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock(v7, v6);
  }
}
