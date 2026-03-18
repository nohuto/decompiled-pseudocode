/*
 * XREFs of WbMakeUserDataPagesKernelWritable @ 0x1409E1088
 * Callers:
 *     sub_1409E0950 @ 0x1409E0950 (sub_1409E0950.c)
 *     sub_1409E0C6C @ 0x1409E0C6C (sub_1409E0C6C.c)
 *     sub_1409E0F54 @ 0x1409E0F54 (sub_1409E0F54.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     ZwProtectVirtualMemory @ 0x1406A6E10 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall WbMakeUserDataPagesKernelWritable(PVOID VirtualAddress, ULONG Length, struct _MDL **a3, _QWORD *a4)
{
  struct _MDL *v8; // rbx
  int v9; // esi
  int v10; // edi
  struct _MDL *Mdl; // rax
  PVOID MappedSystemVa; // rax
  _QWORD v14[3]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0LL;
  v9 = 0;
  v14[0] = VirtualAddress;
  v10 = ZwProtectVirtualMemory(-1LL, (__int64)v14);
  if ( v10 >= 0 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v8 = Mdl;
    if ( Mdl )
    {
      v9 = 1;
      MmProbeAndLockPages(Mdl, 1, IoModifyAccess);
      if ( (v8->MdlFlags & 5) != 0 )
        MappedSystemVa = v8->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
      v14[1] = MappedSystemVa;
      if ( MappedSystemVa )
      {
        if ( a4 )
          *a4 = MappedSystemVa;
        if ( a3 )
        {
          *a3 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        v10 = -1073741801;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( v8 )
  {
    if ( v9 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  return (unsigned int)v10;
}
