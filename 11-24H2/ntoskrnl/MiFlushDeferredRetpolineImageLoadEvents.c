/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F08B0
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A82C88 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  unsigned int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (unsigned int *)qword_140E2D768;
    if ( qword_140E2D768 == &qword_140E2D768 )
      break;
    if ( *((PVOID **)qword_140E2D768 + 1) != &qword_140E2D768
      || (v2 = *(_QWORD *)qword_140E2D768, *(PVOID *)(*(_QWORD *)qword_140E2D768 + 8LL) != qword_140E2D768) )
    {
      __fastfail(3u);
    }
    qword_140E2D768 = *(PVOID *)qword_140E2D768;
    *(_QWORD *)(v2 + 8) = &qword_140E2D768;
    MiLogNonRetpolineImageLoadEvent(v1 + 4, v1[8], v1[9]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock(Lock);
}
