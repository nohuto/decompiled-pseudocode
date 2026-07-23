/*
 * XREFs of VslCreateEnclave @ 0x140A7FBF4
 * Callers:
 *     PsCreateVsmEnclave @ 0x140A7F734 (PsCreateVsmEnclave.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     VslCloseSecureHandle @ 0x1404AC3A0 (VslCloseSecureHandle.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VslCreateSecureProcess @ 0x140A7FD70 (VslCreateSecureProcess.c)
 */

__int64 __fastcall VslCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned int a7,
        unsigned __int8 a8,
        _QWORD *a9)
{
  int v13; // ebx
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 *v22; // [rsp+B8h] [rbp-48h]
  __int64 *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]

  v15 = 0LL;
  memset_0(v17, 0, 0x68uLL);
  memset_0(v16, 0, 0x48uLL);
  if ( !*(_QWORD *)(a2 + 368) )
  {
    result = VslCreateSecureProcess(a2, a3, &v15);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 368), v15, 0LL) )
      VslCloseSecureHandle(v15);
  }
  if ( !a7 || (result = VslpLockPagesForTransfer((__int64)v16, a6, a7, IoReadAccess, 0), (int)result >= 0) )
  {
    v18 = *(_QWORD *)(a2 + 368);
    v20 = a5;
    v22 = v16[0];
    v23 = v16[7];
    v24 = a8;
    v19 = a4;
    v21 = a1;
    v13 = VslpEnterIumSecureMode(2u, 0x2Fu, 0, (__int64)v17);
    if ( v16[0] )
      VslpUnlockPagesForTransfer(v16);
    if ( v13 >= 0 )
      *a9 = v19;
    return (unsigned int)v13;
  }
  return result;
}
