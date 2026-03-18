/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x14058D89C
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x14058A0E0 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslLiveDumpQuerySecondaryDataSize(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]

  memset_0(v7, 0, 0x68uLL);
  v8 = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  result = VslpEnterIumSecureMode(2u, 58LL, 0, (__int64)v7);
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    *a3 = v10;
  }
  return result;
}
