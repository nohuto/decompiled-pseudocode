/*
 * XREFs of SdbGetEntryFlags @ 0x140AA4CF0
 * Callers:
 *     SdbReadEntryInformation @ 0x1408027F8 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x140804700 (SdbpGetExeEntryFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140807274 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x140AA4DBC (AslGuidToString.c)
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
    AslLogCallPrintf(1LL, (__int64)"SdbGetEntryFlags", 125LL, (__int64)"Failed to convert EXE id to string [%x]");
  }
  return 1LL;
}
