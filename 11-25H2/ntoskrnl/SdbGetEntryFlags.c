/*
 * XREFs of SdbGetEntryFlags @ 0x140A9F4D0
 * Callers:
 *     SdbReadEntryInformation @ 0x1407F2948 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407F4AAC (SdbpGetExeEntryFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407F7704 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x140A9F59C (AslGuidToString.c)
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
    AslLogCallPrintf(1LL);
  }
  return 1LL;
}
