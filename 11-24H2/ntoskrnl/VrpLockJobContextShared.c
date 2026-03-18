/*
 * XREFs of VrpLockJobContextShared @ 0x140929018
 * Callers:
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall VrpLockJobContextShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1 + 16, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (__int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
