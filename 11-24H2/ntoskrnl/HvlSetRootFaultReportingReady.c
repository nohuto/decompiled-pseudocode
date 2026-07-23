/*
 * XREFs of HvlSetRootFaultReportingReady @ 0x140585890
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HvlSetRootFaultReportingReady()
{
  unsigned __int16 v0; // ax
  _OWORD v2[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v3; // [rsp+60h] [rbp-28h]

  memset(v2, 0, sizeof(v2));
  v3 = 0LL;
  LODWORD(v2[0]) = 32;
  v0 = HvcallFastExtended(65647LL, (__int64)v2, 0x28u, 0LL, 0);
  return HvlpHvToNtStatus(v0);
}
