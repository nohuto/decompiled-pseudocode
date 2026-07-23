/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x14078E078
 * Callers:
 *     PdcTaskClientRequest @ 0x140A87D84 (PdcTaskClientRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  char *v4; // rdi
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)a1, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v3, (__int64)a1);
  if ( v4 )
    v4[10] = 1;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
