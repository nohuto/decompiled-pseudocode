/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1400A0E00
 * Callers:
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsCreateBitmapStripSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3744LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
