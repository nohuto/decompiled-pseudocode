/*
 * XREFs of VslInitializeSecurePool @ 0x14058D6EC
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslInitializeSecurePool(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  SecurePoolBase = a1;
  SecurePoolEnd = a1 + a2;
  v6 = a1;
  v7 = a2;
  return VslpEnterIumSecureMode(2u, 214LL, 0, (__int64)v5);
}
