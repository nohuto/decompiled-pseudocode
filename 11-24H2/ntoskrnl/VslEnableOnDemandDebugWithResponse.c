/*
 * XREFs of VslEnableOnDemandDebugWithResponse @ 0x14070F7B8
 * Callers:
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077A800 (PsIumEnableOnDemandDebugWithResponse.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslEnableOnDemandDebugWithResponse(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  _BYTE v10[88]; // [rsp+38h] [rbp-70h] BYREF

  v3 = a3;
  memset_0(v7, 0, 0x68uLL);
  result = 3221225506LL;
  if ( (unsigned int)v3 <= 0x50 )
  {
    v8 = *(_QWORD *)(a1 + 368);
    v9 = v3;
    memmove(v10, a2, (unsigned int)v3);
    return VslpEnterIumSecureMode(2u, 19LL, 0, (__int64)v7);
  }
  return result;
}
