/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00C1758
 * Callers:
 *     GdiProcessCallout @ 0x1C0037960 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C0294A78 )
    return qword_1C0294A78();
  else
    return 3221225659LL;
}
