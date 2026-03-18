/*
 * XREFs of HvlUnblockDefaultDma @ 0x1405887C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 HvlUnblockDefaultDma()
{
  unsigned __int16 v0; // ax
  _OWORD v2[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v3; // [rsp+60h] [rbp-28h]

  memset(v2, 0, sizeof(v2));
  v3 = 0LL;
  LODWORD(v2[0]) = 26;
  v0 = HvcallFastExtended(65647LL, (__int64)v2, 0x28u, 0LL, 0);
  return HvlpHvToNtStatus(v0);
}
