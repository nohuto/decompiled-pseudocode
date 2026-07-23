/*
 * XREFs of VslDebugProtectSecureProcessMemory @ 0x140ABAFB0
 * Callers:
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslDebugProtectSecureProcessMemory(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 result; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+28h] [rbp-90h]
  __int64 v13; // [rsp+30h] [rbp-88h]
  __int64 v14; // [rsp+38h] [rbp-80h]
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]

  memset_0(v11, 0, 0x68uLL);
  v12 = *(_QWORD *)(a1 + 368);
  v14 = *a3;
  v15 = *a4;
  v16 = a5;
  v13 = a2;
  result = VslpEnterIumSecureMode(2u, 0x28u, 0, (__int64)v11);
  if ( (int)result >= 0 )
  {
    *a3 = v14;
    *a4 = v15;
    *a6 = v16;
  }
  return result;
}
