/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x140671D60
 * Callers:
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     MiHotAddHugeRange @ 0x1407EB5AC (MiHotAddHugeRange.c)
 *     MiCreateHugeIoRanges @ 0x140C5578C (MiCreateHugeIoRanges.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  unsigned int v0; // ebx
  KIRQL v1; // si
  unsigned __int64 *Pool; // rdi
  __int64 v3; // rdx

  v0 = 0;
  v1 = ExAcquireSpinLockExclusive(&dword_140E30140);
  if ( qword_140E30100 )
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
      MiReleaseSpinLockExclusive(&dword_140E30140, v1);
      ExFreePoolWithTag(Pool, 0);
      return 0LL;
    }
    qword_140E30108 = (__int64)Pool;
    stru_140E300F0.Buffer = Pool + 0x10000;
    stru_140E300F0.SizeOfBitMap = 0x400000LL;
    qword_140E30100 = v3;
    goto LABEL_6;
  }
LABEL_7:
  MiReleaseSpinLockExclusive(&dword_140E30140, v1);
  return v0;
}
