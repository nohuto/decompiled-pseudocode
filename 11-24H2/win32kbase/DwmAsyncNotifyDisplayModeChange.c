/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x1400A3A40
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1400A3780 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DwmAsyncNotifyDisplayModeChange(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4240LL);
  if ( v3 )
    return v3(a1);
  else
    return 3221225659LL;
}
