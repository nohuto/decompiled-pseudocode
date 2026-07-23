/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x1406650E8
 * Callers:
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 *     MiHotAddHugeRange @ 0x1407DB13C (MiHotAddHugeRange.c)
 *     MiCreateHugeIoRanges @ 0x140C423CC (MiCreateHugeIoRanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  unsigned int v0; // ebx
  KIRQL v1; // si
  unsigned __int64 *Pool; // rdi
  __int64 v3; // rdx

  v0 = 0;
  v1 = ExAcquireSpinLockExclusive(&dword_140E2FDC0);
  if ( qword_140E2FD80 )
  {
LABEL_6:
    v0 = 1;
    goto LABEL_7;
  }
  Pool = (unsigned __int64 *)MiAllocatePool(0x40uLL, 0x100000uLL, 1883793741);
  if ( Pool )
  {
    v3 = MiAllocatePool(0x40uLL, 0x2000000uLL, 1883793741);
    if ( !v3 )
    {
      MiReleaseSpinLockExclusive(&dword_140E2FDC0, v1);
      ExFreePoolWithTag(Pool, 0);
      return 0LL;
    }
    qword_140E2FD88 = (__int64)Pool;
    stru_140E2FD70.Buffer = Pool + 0x10000;
    stru_140E2FD70.SizeOfBitMap = 0x400000LL;
    qword_140E2FD80 = v3;
    goto LABEL_6;
  }
LABEL_7:
  MiReleaseSpinLockExclusive(&dword_140E2FDC0, v1);
  return v0;
}
