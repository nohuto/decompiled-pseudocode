/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140BB21B0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     RtlULongLongMult @ 0x140437830 (RtlULongLongMult.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpClearScreen @ 0x140697E28 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140A80EA0 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB008C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140BB26EC (BgpGxDrawBitmapImage.c)
 *     AnFwpDisableProgressTimer @ 0x140BB3CB4 (AnFwpDisableProgressTimer.c)
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
    if ( v5 >= qword_140EF00F0 )
    {
      if ( byte_140EEFAC9 )
      {
        AnFwpDisableProgressTimer();
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
        if ( qword_140EF0098 )
        {
          BgpClearScreen(HIDWORD(qword_140EF01D0));
          if ( (int)BgpGxDrawBitmapImage(qword_140EF0098, &qword_140EF00AC) < 0 )
            BgpClearScreen(HIDWORD(qword_140EF01D0));
        }
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock(v7, v6);
  }
}
