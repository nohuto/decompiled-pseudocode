/*
 * XREFs of KeSecureProcess @ 0x1405B5A1C
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     VslInitializeSecureProcess @ 0x14058AA6C (VslInitializeSecureProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v15; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v16[3]; // [rsp+48h] [rbp-60h] BYREF

  v15 = 0;
  memset(v16, 0, sizeof(v16));
  KiStackAttachProcess(a1, 0, (__int64)v16);
  v11 = VslInitializeSecureProcess(a1->SecureState.SecureHandle, a2, a3, a4, a5, a6, a7, &v15);
  KiUnstackDetachProcess((__int64)v16, 0, v12, v13);
  if ( v15 )
    a1->SecureState.SecureHandle |= 2uLL;
  return v11;
}
