/*
 * XREFs of VslGetSecurePageList @ 0x14058D214
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405891B4 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140589290 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140589E28 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14058A8F8 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslGetSecurePageList(unsigned __int8 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int64 v11; // [rsp+30h] [rbp-88h]
  int v12; // [rsp+38h] [rbp-80h]

  v5 = a1;
  memset_0(v9, 0, 0x68uLL);
  v10 = v5;
  v11 = a2;
  result = VslpEnterIumSecureMode(2u, 2050LL, 0, (__int64)v9);
  if ( (int)result >= 0 )
  {
    *a4 = v11;
    if ( a3 )
      *a3 = v12;
  }
  return result;
}
