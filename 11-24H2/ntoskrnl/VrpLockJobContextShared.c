/*
 * XREFs of VrpLockJobContextShared @ 0x14092B158
 * Callers:
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall VrpLockJobContextShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rdi
  char *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire(a1 + 16, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (__int64)v2);
  if ( v3 )
    v3[10] = 1;
  return result;
}
