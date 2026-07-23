/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140BB41B0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140A7B900 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB208C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140BB46EC (BgpGxDrawBitmapImage.c)
 *     AnFwpDisableProgressTimer @ 0x140BB5CB4 (AnFwpDisableProgressTimer.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONGLONG v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONGLONG v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  pullResult = 0LL;
  v12 = 0LL;
  v4 = off_140E00A30();
  if ( RtlULongLongMult(v4, 0x3E8uLL, &pullResult) >= 0 )
  {
    v8 = pullResult / v12;
    BgpFwAcquireLock(v5, pullResult % v12, v6, v7);
    if ( v8 >= qword_140EF0310 )
    {
      if ( byte_140EEFD22 )
      {
        AnFwpDisableProgressTimer();
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v8);
        if ( qword_140EF02B8 )
        {
          BgpClearScreen(HIDWORD(qword_140EF03F0));
          if ( (int)BgpGxDrawBitmapImage(qword_140EF02B8, &qword_140EF02CC) < 0 )
            BgpClearScreen(HIDWORD(qword_140EF03F0));
        }
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock(v10, v9);
  }
}
