/*
 * XREFs of HvlSetDeviceDmaEnabled @ 0x1405854E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetDeviceDmaEnabled(_WORD *a1, char a2)
{
  unsigned __int16 v2; // ax
  __int128 v4; // [rsp+40h] [rbp-38h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]

  v4 = 0LL;
  v5 = 0LL;
  *(_QWORD *)&v4 = 0x4000000000000000LL;
  WORD1(v4) = a1[4];
  LOWORD(v4) = a1[6];
  WORD3(v4) = (a1[5] ^ 0x4000) & 3 ^ 0x4000;
  LOBYTE(v5) = a2;
  DWORD2(v4) = 1;
  v2 = HvcallFastExtended(196779LL, (__int64)&v4, 0x18u, 0LL, 0);
  return HvlpHvToNtStatus(v2);
}
