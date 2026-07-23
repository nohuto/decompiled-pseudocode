/*
 * XREFs of SdbGetEntryFlags @ 0x140A9FFF0
 * Callers:
 *     SdbReadEntryInformation @ 0x140802F38 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x140804E40 (SdbpGetExeEntryFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1408079B4 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x140AA00BC (AslGuidToString.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)AslGuidToString(v7, 39LL) >= 0 )
  {
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v3, (__int64)v7, 1u, v6) >= 0 )
      *a2 = v6[0];
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v4, (__int64)v7, 0, v6) >= 0 )
      *a2 |= v6[0];
    *a2 &= 0xFFFu;
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"SdbGetEntryFlags");
  }
  return 1LL;
}
