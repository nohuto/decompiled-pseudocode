/*
 * XREFs of PiDmaGuardQueueInsertEntry @ 0x14073A3A0
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140731B84 (PipDmgEnforceEnumerationPolicy.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A8BD58 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object, int a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v7; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
    v7 = (__int64 *)qword_140F89A08;
    if ( *(PVOID **)qword_140F89A08 != &PipDgqListHead )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &PipDgqListHead;
    *(_QWORD *)(Pool2 + 8) = v7;
    *v7 = Pool2;
    qword_140F89A08 = Pool2;
    ExReleaseResourceLite(&PipDgqListLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
