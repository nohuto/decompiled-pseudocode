/*
 * XREFs of MiGetWorkingSetInfo @ 0x14025E748
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MiGetWorkingSetInfoEx @ 0x14025E8F0 (MiGetWorkingSetInfoEx.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, _QWORD *P)
{
  struct _MDL *Pool; // rax
  struct _MDL *v10; // rbx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *P = 0LL;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  Pool = (struct _MDL *)MiAllocatePool(
                          0x40uLL,
                          8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)));
  v10 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool->Next = 0LL;
  Pool->Size = 8 * (((a4 + (a3 & 0xFFF) + 4095) >> 12) + 6);
  Pool->MdlFlags = 0;
  Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  Pool->ByteOffset = a3 & 0xFFF;
  Pool->ByteCount = a4;
  MmProbeAndLockPages(Pool, KeGetCurrentThread()->PreviousMode, IoWriteAccess);
  if ( (v10->MdlFlags & 5) != 0 )
    MappedSystemVa = v10->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    WorkingSetInfo = MiGetWorkingSetInfoEx(a1 + 1024, a2 | 0x80000000, MappedSystemVa, a4);
    if ( WorkingSetInfo >= 0 )
      *P = *MappedSystemVa;
  }
  else
  {
    WorkingSetInfo = -1073741670;
  }
  MmUnlockPages(v10);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)WorkingSetInfo;
}
