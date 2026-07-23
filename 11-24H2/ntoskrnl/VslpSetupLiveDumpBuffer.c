/*
 * XREFs of VslpSetupLiveDumpBuffer @ 0x14058BE04
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x140587784 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslpSetupLiveDumpBuffer(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+30h] [rbp-98h]
  __int64 v12; // [rsp+38h] [rbp-90h]
  __int64 v13; // [rsp+40h] [rbp-88h]
  __int64 v14; // [rsp+48h] [rbp-80h]
  __int64 v15; // [rsp+50h] [rbp-78h]

  memset_0(v10, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(2u, 0x3Du, 0, (__int64)v10);
  if ( (int)result >= 0 )
  {
    *a1 = v11;
    *a2 = v12;
    *a3 = v13;
    *a4 = v14;
    *a5 = v15;
  }
  return result;
}
