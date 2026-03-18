/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C0233208
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C0295A40 )
    return qword_1C0295A40();
  else
    return 3221225659LL;
}
