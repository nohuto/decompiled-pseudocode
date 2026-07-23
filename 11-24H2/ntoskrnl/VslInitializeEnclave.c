/*
 * XREFs of VslInitializeEnclave @ 0x14070D664
 * Callers:
 *     PsInitializeVsmEnclave @ 0x14077B1DC (PsInitializeVsmEnclave.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslInitializeEnclave(
        __int64 a1,
        __int64 a2,
        struct _MDL *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 result; // rax
  int v12; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-B1h] BYREF
  _BYTE v14[8]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v15; // [rsp+88h] [rbp-59h]
  __int64 v16; // [rsp+90h] [rbp-51h]
  __int64 *v17; // [rsp+98h] [rbp-49h]
  __int64 *v18; // [rsp+A0h] [rbp-41h]
  __int64 v19; // [rsp+A8h] [rbp-39h]
  __int64 v20; // [rsp+B0h] [rbp-31h]

  memset_0(v14, 0, 0x68uLL);
  memset_0(v13, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v13, a3, a4, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v17 = v13[0];
    v18 = v13[7];
    v19 = a5;
    v20 = a6;
    v15 = a1;
    v16 = a2;
    v12 = VslpEnterIumSecureMode(2u, 0x32u, 0, (__int64)v14);
    if ( v12 >= 0 )
      *a7 = v16;
    VslpUnlockPagesForTransfer(v13);
    return (unsigned int)v12;
  }
  return result;
}
