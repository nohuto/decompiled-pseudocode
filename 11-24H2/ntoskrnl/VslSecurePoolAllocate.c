/*
 * XREFs of VslSecurePoolAllocate @ 0x14058E2EC
 * Callers:
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline @ 0x14058CB14 (Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslSecurePoolAllocate(
        __int64 a1,
        int a2,
        __int64 a3,
        struct _MDL *a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v12; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-B1h] BYREF
  _BYTE v14[8]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v15; // [rsp+88h] [rbp-59h]
  __int64 v16; // [rsp+90h] [rbp-51h]
  __int64 *v17; // [rsp+98h] [rbp-49h]
  __int64 *v18; // [rsp+A0h] [rbp-41h]
  __int64 v19; // [rsp+A8h] [rbp-39h]
  int v20; // [rsp+B0h] [rbp-31h]
  int v21; // [rsp+B4h] [rbp-2Dh]

  if ( (unsigned int)Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline() )
    return 3221225659LL;
  memset_0(v14, 0, 0x68uLL);
  memset_0(v13, 0, 0x48uLL);
  v19 = a5;
  v21 = a6;
  v15 = a1;
  v16 = a3;
  v20 = a2;
  v12 = VslpLockPagesForTransfer((__int64)v13, a4, a3, IoReadAccess, 0);
  if ( v12 >= 0 )
  {
    v17 = v13[0];
    v18 = v13[7];
    v12 = VslpEnterIumSecureMode(2u, 85LL, 0, (__int64)v14);
    if ( v12 >= 0 )
      *a7 = v16;
  }
  if ( v13[0] )
    VslpUnlockPagesForTransfer(v13);
  return (unsigned int)v12;
}
