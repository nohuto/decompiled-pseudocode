/*
 * XREFs of ObpLockDirectoryExclusive @ 0x1409E4E58
 * Callers:
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409E4C18 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtSetInformationObject @ 0x1409FB980 (NtSetInformationObject.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v5; // rbx

  *(_QWORD *)a1 = a2;
  v2 = (unsigned __int64 *)(a2 + 296);
  *(_BYTE *)(a1 + 21) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire(a2 + 296, 0LL);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v5 )
    *(_BYTE *)(v5 + 10) = 1;
  return result;
}
