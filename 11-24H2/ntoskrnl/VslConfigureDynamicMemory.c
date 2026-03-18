/*
 * XREFs of VslConfigureDynamicMemory @ 0x14058CCAC
 * Callers:
 *     KeConfigureDynamicMemory @ 0x1405B79E4 (KeConfigureDynamicMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140456290 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslConfigureDynamicMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]

  v4 = a3;
  memset_0(v7, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 0LL;
  v8 = a1;
  v9 = a2;
  v10 = v4;
  return VslpEnterIumSecureMode(2u, 39LL, 0, (__int64)v7);
}
