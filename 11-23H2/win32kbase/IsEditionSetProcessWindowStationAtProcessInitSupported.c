/*
 * XREFs of IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00B8940
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C0207930 (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetProcessWindowStationAtProcessInitSupported()
{
  if ( qword_1C0295340 )
    return qword_1C0295340();
  else
    return 3221225659LL;
}
