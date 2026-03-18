/*
 * XREFs of IsGetghsemEnableEUDCSupported @ 0x1C0019A08
 * Callers:
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0019A60 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0019B08 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetghsemEnableEUDCSupported()
{
  if ( qword_1C02947F0 )
    return qword_1C02947F0();
  else
    return 3221225659LL;
}
