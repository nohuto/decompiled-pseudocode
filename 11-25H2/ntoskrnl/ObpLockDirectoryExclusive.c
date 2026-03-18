/*
 * XREFs of ObpLockDirectoryExclusive @ 0x140A08AA0
 * Callers:
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     NtSetInformationObject @ 0x1409FE700 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140A08860 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObCreateObjectTypeEx @ 0x140A97FF0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v5; // rbx

  *(_QWORD *)a1 = a2;
  v2 = (unsigned __int64 *)(a2 + 296);
  *(_BYTE *)(a1 + 21) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire(a2 + 296, 0LL);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  return result;
}
