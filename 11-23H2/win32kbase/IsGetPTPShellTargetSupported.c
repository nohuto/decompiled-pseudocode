/*
 * XREFs of IsGetPTPShellTargetSupported @ 0x1C023312C
 * Callers:
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C01DF228 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 *     ApiSetGetPTPShellTarget @ 0x1C0207CF0 (ApiSetGetPTPShellTarget.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetPTPShellTargetSupported()
{
  if ( qword_1C0296D00 )
    return qword_1C0296D00();
  else
    return 3221225659LL;
}
