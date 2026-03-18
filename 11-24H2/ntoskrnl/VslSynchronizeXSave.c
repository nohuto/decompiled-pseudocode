/*
 * XREFs of VslSynchronizeXSave @ 0x14058E8B0
 * Callers:
 *     KiInitializeXSaveConfiguration @ 0x140B56AA0 (KiInitializeXSaveConfiguration.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslSynchronizeXSave(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  v2 = a2;
  memset_0(v5, 0, 0x68uLL);
  v6 = a1;
  v7 = v2;
  return VslpEnterIumSecureMode(2u, 229LL, 0, (__int64)v5);
}
