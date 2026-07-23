/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F0E80
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A7D7A8 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  unsigned int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (unsigned int *)qword_140E2D8A8;
    if ( qword_140E2D8A8 == &qword_140E2D8A8 )
      break;
    if ( *((PVOID **)qword_140E2D8A8 + 1) != &qword_140E2D8A8
      || (v2 = *(_QWORD *)qword_140E2D8A8, *(PVOID *)(*(_QWORD *)qword_140E2D8A8 + 8LL) != qword_140E2D8A8) )
    {
      __fastfail(3u);
    }
    qword_140E2D8A8 = *(PVOID *)qword_140E2D8A8;
    *(_QWORD *)(v2 + 8) = &qword_140E2D8A8;
    MiLogNonRetpolineImageLoadEvent(v1 + 4, v1[8], v1[9]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock(Lock);
}
