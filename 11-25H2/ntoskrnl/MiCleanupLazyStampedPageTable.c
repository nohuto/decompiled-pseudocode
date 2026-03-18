/*
 * XREFs of MiCleanupLazyStampedPageTable @ 0x140432F28
 * Callers:
 *     MiEvictPageTableLock @ 0x1402FB4A4 (MiEvictPageTableLock.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 */

void __fastcall MiCleanupLazyStampedPageTable(__int64 a1, __int64 a2)
{
  __int64 *ProcessorFlushList; // rdi
  int v4; // r13d
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  BOOL v10; // eax
  __int64 v11; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v14; // rcx
  signed __int32 v15[18]; // [rsp+0h] [rbp-48h] BYREF

  ProcessorFlushList = 0LL;
  _InterlockedOr(v15, 0);
  v4 = KiTbFlushTimeStamp;
  v5 = 512LL;
  v6 = a2 << 25 >> 16;
  do
  {
    v7 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v11 = *(_QWORD *)v6;
      if ( (v7 & 1) != 0 && ((v7 & 0x42) == 0 || (v7 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v14 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
            if ( (v14 & 0x20) != 0 )
              v11 = v7 | 0x20;
            v7 = v11 | 0x42;
            if ( (v14 & 0x42) == 0 )
              v7 = v11;
          }
        }
      }
    }
    v8 = v7;
    if ( qword_140E2D940 && (v7 & 0x10) == 0 )
      v8 = v7 & ~qword_140E2D940;
    v9 = HIDWORD(v8);
    if ( v9 && (unsigned int)(v4 - v9) <= 2 && ((v9 & 1) != 0 || (unsigned int)(v4 - v9) < 2) )
    {
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        *((_DWORD *)ProcessorFlushList + 4) = 0;
        *((_DWORD *)ProcessorFlushList + 5) = 1;
        *ProcessorFlushList = a1;
        *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(a1 + 184) & 0x800) != 0;
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v10 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
        }
        else
        {
          *((_DWORD *)ProcessorFlushList + 4) |= 9u;
          v10 = 0;
        }
        *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
        *((_DWORD *)ProcessorFlushList + 2) = v10;
        *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
        *((_DWORD *)ProcessorFlushList + 7) = 0;
        ProcessorFlushList[4] = 0LL;
        ProcessorFlushList[5] = 0LL;
      }
      MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(v6 << 25) >> 16, 1LL, 0);
    }
    if ( v7 )
      *(_QWORD *)v6 = CLFS_LSN_NULL_EXT;
    v6 += 8LL;
    --v5;
  }
  while ( v5 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
}
