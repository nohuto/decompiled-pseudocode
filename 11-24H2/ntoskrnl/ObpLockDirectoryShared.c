/*
 * XREFs of ObpLockDirectoryShared @ 0x14099A610
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall ObpLockDirectoryShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rbx
  signed __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v2 = (volatile signed __int64 *)(a2 + 296);
  *(_BYTE *)(a1 + 21) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire(a2 + 296, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v4, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
