/*
 * XREFs of VslTerminateSecureThread @ 0x140710658
 * Callers:
 *     KeUnsecureThread @ 0x1405B7CB0 (KeUnsecureThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslTerminateSecureThread(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]

  memset_0(v7, 0, 0x68uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = VslpEnterIumSecureMode(2u, 10LL, a1, (__int64)v7);
  KeLeaveCriticalRegion();
  result = v5;
  *a2 = v8;
  return result;
}
