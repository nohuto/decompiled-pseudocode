/*
 * XREFs of VslQuerySecureKernelProfileInformation @ 0x14058AFAC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14044B190 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslQuerySecureKernelProfileInformation(__int64 a1, struct _MDL *a2, unsigned int a3, _DWORD *a4)
{
  int v8; // ecx
  __int64 result; // rax
  int v10; // edi
  unsigned int v11; // [rsp+20h] [rbp-108h]
  __int64 *v12[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+88h] [rbp-A0h]
  __int64 *v15; // [rsp+90h] [rbp-98h]
  __int64 *v16; // [rsp+98h] [rbp-90h]

  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( !a3 || (result = VslpLockPagesForTransfer((__int64)v12, a2, a3, IoModifyAccess, v8 & v11), (int)result >= 0) )
  {
    v15 = v12[0];
    v16 = v12[7];
    v14 = a1;
    v10 = VslpEnterIumSecureMode(2u, 0x42u, 0, (__int64)v13);
    if ( v10 >= 0 )
      *a4 = (_DWORD)v15;
    if ( a3 )
      VslpUnlockPagesForTransfer(v12);
    return (unsigned int)v10;
  }
  return result;
}
