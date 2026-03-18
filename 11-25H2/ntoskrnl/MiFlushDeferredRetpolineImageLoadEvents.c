/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1407E0A10
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A7F0B8 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  unsigned int *v1; // rbx
  __int64 v2; // rax

  Lock = (struct _KTHREAD *)MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (unsigned int *)qword_140E2D528;
    if ( qword_140E2D528 == &qword_140E2D528 )
      break;
    if ( *((PVOID **)qword_140E2D528 + 1) != &qword_140E2D528
      || (v2 = *(_QWORD *)qword_140E2D528, *(PVOID *)(*(_QWORD *)qword_140E2D528 + 8LL) != qword_140E2D528) )
    {
      __fastfail(3u);
    }
    qword_140E2D528 = *(PVOID *)qword_140E2D528;
    *(_QWORD *)(v2 + 8) = &qword_140E2D528;
    MiLogNonRetpolineImageLoadEvent(v1 + 4, v1[8], v1[9]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock(Lock);
}
