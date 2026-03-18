/*
 * XREFs of UserJobCallout @ 0x1C00AD630
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 *     W32CalloutDispatch @ 0x1C00DE800 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 UserJobCallout()
{
  if ( qword_1C0295270 )
    return qword_1C0295270();
  else
    return 3221225659LL;
}
