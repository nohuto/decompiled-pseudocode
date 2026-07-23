/*
 * XREFs of PiDmaGuardQueueInsertEntry @ 0x1407382D0
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x14072FB94 (PipDmgEnforceEnumerationPolicy.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A88248 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object, int a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v7; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x64706E50u);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
    v7 = (__int64 *)qword_140F89CA8;
    if ( *(PVOID **)qword_140F89CA8 != &PipDgqListHead )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &PipDgqListHead;
    *(_QWORD *)(Pool2 + 8) = v7;
    *v7 = Pool2;
    qword_140F89CA8 = Pool2;
    ExReleaseResourceLite(&PipDgqListLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
