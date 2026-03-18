/*
 * XREFs of WbMakeUserExecutablePagesKernelWritable @ 0x1409E0F80
 * Callers:
 *     sub_1409E0720 @ 0x1409E0720 (sub_1409E0720.c)
 *     sub_1409E0950 @ 0x1409E0950 (sub_1409E0950.c)
 *     sub_1409E0C6C @ 0x1409E0C6C (sub_1409E0C6C.c)
 *     sub_1409E0F54 @ 0x1409E0F54 (sub_1409E0F54.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPagesPrivate @ 0x1404200FC (MmProbeAndLockPagesPrivate.c)
 */

__int64 __fastcall WbMakeUserExecutablePagesKernelWritable(void *a1, ULONG a2, PMDL *a3, _QWORD *a4)
{
  int v6; // esi
  unsigned int v7; // edi
  PMDL Mdl; // rax
  __int64 v9; // rdx
  PMDL v10; // rbx
  PVOID MappedSystemVa; // rax

  v6 = 0;
  v7 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v10 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPagesPrivate((__int64)Mdl, v9);
    v6 = 1;
    if ( (v10->MdlFlags & 5) != 0 )
      MappedSystemVa = v10->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( MappedSystemVa )
    {
      if ( a4 )
        *a4 = MappedSystemVa;
      if ( a3 )
      {
        *a3 = v10;
        v10 = 0LL;
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  if ( v10 )
  {
    if ( v6 )
      MmUnlockPages(v10);
    IoFreeMdl(v10);
  }
  return v7;
}
