/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C000F398
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C0295AE8 )
    return qword_1C0295AE8();
  else
    return 3221225659LL;
}
