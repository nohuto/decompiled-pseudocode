/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x140670B90
 * Callers:
 *     MiInsertPartitionPages @ 0x14068A8D0 (MiInsertPartitionPages.c)
 *     MiHotAddHugeRange @ 0x1407EAFDC (MiHotAddHugeRange.c)
 *     MiCreateHugeIoRanges @ 0x140C535FC (MiCreateHugeIoRanges.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  unsigned int v0; // ebx
  KIRQL v1; // si
  void *Pool; // rdi
  __int64 v3; // rdx

  v0 = 0;
  v1 = ExAcquireSpinLockExclusive(&dword_140E30000);
  if ( qword_140E2FFC0 )
  {
LABEL_6:
    v0 = 1;
    goto LABEL_7;
  }
  Pool = (void *)MiAllocatePool(0x40uLL, 0x100000uLL, 1883793741);
  if ( Pool )
  {
    v3 = MiAllocatePool(0x40uLL, 0x2000000uLL, 1883793741);
    if ( !v3 )
    {
      MiReleaseSpinLockExclusive(&dword_140E30000, v1);
      ExFreePoolWithTag(Pool, 0);
      return 0LL;
    }
    qword_140E2FFC8 = (__int64)Pool;
    qword_140E2FFB8 = (__int64)Pool + 0x80000;
    qword_140E2FFB0 = 0x400000LL;
    qword_140E2FFC0 = v3;
    goto LABEL_6;
  }
LABEL_7:
  MiReleaseSpinLockExclusive(&dword_140E30000, v1);
  return v0;
}
