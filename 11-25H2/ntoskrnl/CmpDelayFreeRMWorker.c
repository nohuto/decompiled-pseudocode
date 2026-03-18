/*
 * XREFs of CmpDelayFreeRMWorker @ 0x140A9A4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *CmpDelayFreeRMWorker()
{
  PERESOURCE *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  while ( 1 )
  {
    v0 = (PERESOURCE *)CmpDelayFreeRMListHead;
    if ( CmpDelayFreeRMListHead == &CmpDelayFreeRMListHead )
      break;
    if ( *((PVOID **)CmpDelayFreeRMListHead + 1) != &CmpDelayFreeRMListHead
      || (v1 = *(_QWORD *)CmpDelayFreeRMListHead,
          *(PVOID *)(*(_QWORD *)CmpDelayFreeRMListHead + 8LL) != CmpDelayFreeRMListHead) )
    {
      __fastfail(3u);
    }
    CmpDelayFreeRMListHead = *(PVOID *)CmpDelayFreeRMListHead;
    *(_QWORD *)(v1 + 8) = &CmpDelayFreeRMListHead;
    KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
    CmpLockRegistryExclusive();
    ExDeleteResourceLite(v0[16]);
    ExFreePoolWithTag(v0[16], 0);
    ExFreePoolWithTag(v0, 0x6D524D43u);
    CmpUnlockRegistry(v2);
    ExAcquireFastMutex(&CmpDelayFreeRMLock);
  }
  CmpDelayFreeRMWorkItemActive = 0;
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
}
