/*
 * XREFs of IopWheaSelLogError @ 0x140592830
 * Callers:
 *     <none>
 * Callees:
 *     WheaSelLogError @ 0x140659AF8 (WheaSelLogError.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IopWheaSelLogError(__int64 a1, __int64 a2, int a3)
{
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+26h] [rbp-22h]
  __int16 v7; // [rsp+2Ah] [rbp-1Eh]

  v5 = 0;
  v4 = a3;
  v7 = 0;
  v6 = a1;
  return WheaSelLogError(a1, a2, &v4);
}
