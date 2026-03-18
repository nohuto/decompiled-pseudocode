/*
 * XREFs of MiCleanupLazyStampedPageTable @ 0x140212BFC
 * Callers:
 *     MiEvictPageTableLock @ 0x140234EEC (MiEvictPageTableLock.c)
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 */

__int64 __fastcall MiCleanupLazyStampedPageTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 ProcessorFlushList; // rdi
  int v4; // r13d
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 result; // rax
  __int64 HasShadow; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  BOOL v13; // eax
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1;
  ProcessorFlushList = 0LL;
  _InterlockedOr(v14, 0);
  v4 = KiTbFlushTimeStamp;
  v5 = 512LL;
  v6 = a2 << 25 >> 16;
  do
  {
    v7 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      a2 = *(_QWORD *)v6;
      if ( (v7 & 1) != 0 )
      {
        LOBYTE(a1) = (v7 & 0x42) != 0;
        if ( ((unsigned __int8)a1 & ((v7 & 0x20) != 0)) == 0 )
        {
          HasShadow = MiPteHasShadow(a1, a2);
          if ( HasShadow )
          {
            v11 = *(_QWORD *)(HasShadow + 1288);
            if ( v11 )
            {
              v12 = *(_QWORD *)(v11 + 8 * ((v6 >> 3) & 0x1FF));
              if ( (v12 & 0x20) != 0 )
                a2 |= 0x20uLL;
              v7 = a2 | 0x42;
              if ( (v12 & 0x42) == 0 )
                v7 = a2;
            }
          }
        }
      }
    }
    a1 = qword_140E2DB80;
    v8 = v7;
    if ( qword_140E2DB80 && (v7 & 0x10) == 0 )
      v8 = v7 & ~qword_140E2DB80;
    result = HIDWORD(v8);
    if ( result )
    {
      a1 = (unsigned int)(v4 - result);
      if ( (unsigned int)a1 <= 2 && ((result & 1) != 0 || (unsigned int)a1 < 2) )
      {
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList(a1, a2);
          *(_DWORD *)(ProcessorFlushList + 16) = 0;
          *(_DWORD *)(ProcessorFlushList + 20) = 1;
          *(_QWORD *)ProcessorFlushList = v2;
          *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v2 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v2 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v13 = (*(_DWORD *)(v2 + 184) & 0xF) == 0;
          }
          else
          {
            *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
            v13 = 0;
          }
          *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(ProcessorFlushList + 8) = v13;
          *(_WORD *)(ProcessorFlushList + 25) = 0;
          *(_DWORD *)(ProcessorFlushList + 28) = 0;
          *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
          *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
        }
        result = MiInsertTbFlushEntry(ProcessorFlushList, (__int64)(v6 << 25) >> 16, 1LL);
      }
    }
    if ( v7 )
    {
      result = CLFS_LSN_NULL_EXT;
      *(_QWORD *)v6 = CLFS_LSN_NULL_EXT;
    }
    v6 += 8LL;
    --v5;
  }
  while ( v5 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList(ProcessorFlushList, a2);
    return MiReleaseProcessorFlushList();
  }
  return result;
}
