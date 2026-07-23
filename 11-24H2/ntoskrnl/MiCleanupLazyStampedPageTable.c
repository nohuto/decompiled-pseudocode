/*
 * XREFs of MiCleanupLazyStampedPageTable @ 0x140305F5C
 * Callers:
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MiEvictPageTableLock @ 0x14020EE7C (MiEvictPageTableLock.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 */

void __fastcall MiCleanupLazyStampedPageTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 *ProcessorFlushList; // rdi
  int v6; // r13d
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 HasShadow; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  BOOL v16; // eax
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a1;
  ProcessorFlushList = 0LL;
  _InterlockedOr(v17, 0);
  v6 = KiTbFlushTimeStamp;
  v7 = 512LL;
  v8 = a2 << 25 >> 16;
  do
  {
    v9 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (v9 & 1) != 0 )
    {
      LOBYTE(a1) = (v9 & 0x42) != 0;
      if ( ((unsigned __int8)a1 & ((v9 & 0x20) != 0)) == 0 )
      {
        HasShadow = MiPteHasShadow(a1, *(_QWORD *)v8, a3, a4);
        if ( HasShadow )
        {
          v14 = *(_QWORD *)(HasShadow + 1288);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8 * ((v8 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v13 |= 0x20uLL;
            v9 = v13 | 0x42;
            if ( (v15 & 0x42) == 0 )
              v9 = v13;
          }
        }
      }
    }
    a1 = qword_140E2DCC0;
    v10 = v9;
    if ( qword_140E2DCC0 && (v9 & 0x10) == 0 )
      v10 = v9 & ~qword_140E2DCC0;
    v11 = HIDWORD(v10);
    if ( v11 )
    {
      a1 = (unsigned int)(v6 - v11);
      if ( (unsigned int)a1 <= 2 && ((v11 & 1) != 0 || (unsigned int)a1 < 2) )
      {
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          *((_DWORD *)ProcessorFlushList + 4) = 0;
          *((_DWORD *)ProcessorFlushList + 5) = 1;
          *ProcessorFlushList = v4;
          *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v4 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v4 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v16 = (*(_DWORD *)(v4 + 184) & 0xF) == 0;
          }
          else
          {
            *((_DWORD *)ProcessorFlushList + 4) |= 9u;
            v16 = 0;
          }
          *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
          *((_DWORD *)ProcessorFlushList + 2) = v16;
          *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
          *((_DWORD *)ProcessorFlushList + 7) = 0;
          ProcessorFlushList[4] = 0LL;
          ProcessorFlushList[5] = 0LL;
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(v8 << 25) >> 16, 1LL, 0);
      }
    }
    if ( v9 )
      *(_QWORD *)v8 = CLFS_LSN_NULL_EXT;
    v8 += 8LL;
    --v7;
  }
  while ( v7 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
}
