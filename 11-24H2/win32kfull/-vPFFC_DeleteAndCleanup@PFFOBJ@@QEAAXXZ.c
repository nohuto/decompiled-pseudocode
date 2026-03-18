/*
 * XREFs of ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x14030EC7C
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1400B72E8 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x14030E960 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x14019F11C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1401E2984 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 */

void __fastcall PFFOBJ::vPFFC_DeleteAndCleanup(void **this)
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  v2 = 0LL;
  PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)&v1);
  vCleanupFontFile((struct PFFCLEANUP *)&v1);
}
