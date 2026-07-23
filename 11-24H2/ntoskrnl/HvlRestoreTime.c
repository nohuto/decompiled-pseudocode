/*
 * XREFs of HvlRestoreTime @ 0x140585320
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlRestoreTime(int a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  __int64 v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  if ( (HvlpFlags & 2) != 0 )
    return 0LL;
  v7 = 0;
  v5 = -1LL;
  v6 = a1;
  v8 = a2;
  v9 = a3;
  v4 = HvcallFastExtended(65795LL, (__int64)&v5, 0x20u, 0LL, 0);
  return HvlpHvToNtStatus(v4);
}
