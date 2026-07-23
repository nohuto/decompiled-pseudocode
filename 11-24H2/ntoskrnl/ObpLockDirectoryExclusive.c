/*
 * XREFs of ObpLockDirectoryExclusive @ 0x1409DF8B8
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409DF678 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtSetInformationObject @ 0x1409F46C0 (NtSetInformationObject.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v5; // rbx

  *(_QWORD *)a1 = a2;
  v2 = (unsigned __int64 *)(a2 + 296);
  *(_BYTE *)(a1 + 21) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire(a2 + 296, 0LL);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v5 )
    v5[10] = 1;
  return result;
}
