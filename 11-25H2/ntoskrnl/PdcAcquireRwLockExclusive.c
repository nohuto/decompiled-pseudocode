/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x14077EE88
 * Callers:
 *     PdcTaskClientRequest @ 0x140A86C44 (PdcTaskClientRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  __int64 *v4; // rdi
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)a1, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v3, (__int64)a1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
