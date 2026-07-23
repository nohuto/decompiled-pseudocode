/*
 * XREFs of MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C
 * Callers:
 *     MmRotatePhysicalView @ 0x140A231B0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiUnmapFrameBuffer @ 0x14038E570 (MiUnmapFrameBuffer.c)
 *     MiDereferenceIoPageRuns @ 0x14038E6E8 (MiDereferenceIoPageRuns.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZeroNoCopy(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 *v4; // r13
  unsigned int v5; // r15d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  _QWORD *v8; // rsi
  ULONG_PTR v9; // rbp
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int8 v11; // bl
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 *ProcessorFlushList; // [rsp+40h] [rbp-58h]
  unsigned __int8 v24; // [rsp+A8h] [rbp+10h]
  unsigned int v25; // [rsp+B0h] [rbp+18h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v21 = 0LL;
  v25 = 0;
  ProcessorFlushList = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v24 = MiLockWorkingSetShared((__int64)p_Blink, 0x7FFFFFFFF8LL, a3, a4);
  v11 = v24;
  if ( v6 <= v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v9 )
        {
          v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockNestedPageTable((__int64)p_Blink, v9);
          MiUnlockOpportunisticPagesInPageTable((__int64)p_Blink, v11, v6, v7);
          if ( !v5 )
          {
            if ( MiUnlockOpportunisticPagesInPageTable((__int64)p_Blink, 0x11u, v6, v7) )
              v5 = 1073741849;
          }
        }
        v12 = (*(_QWORD *)v6 >> 12) & 0xFFFFFFFFFFLL;
        MiUnmapFrameBuffer(a1, v6, v26);
        if ( v4 )
        {
          v13 = v21;
        }
        else
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          v4 = ProcessorFlushList;
          MiInitializeTbFlushList(
            (__int64)ProcessorFlushList,
            (__int64)p_Blink,
            *((_DWORD *)ProcessorFlushList + 3),
            0,
            1);
          v21 = v14 + 4136;
          MiInitializeTbFlushList(v14 + 4136, (__int64)p_Blink, *(_DWORD *)(v14 + 4148), 24, 1);
        }
        if ( v12 > qword_140E2DD20 || ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
          MiInsertTbFlushEntry(v13, v12 << 12, 1LL, 0);
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(v6 << 25) >> 16, 1LL, 0);
        ++v25;
        v6 += 8LL;
        if ( (v6 & 0xFFF) == 0
          || v6 > v7
          || (v6 & 0x78) == 0
          && ((unsigned int)MiWorkingSetIsContended(p_Blink, 0LL)
           || (unsigned int)MiPageTableLockIsContended(p_Blink, v9)
           || KeShouldYieldProcessor()) )
        {
          break;
        }
        v11 = v24;
      }
      MiFlushTbList((__int64)ProcessorFlushList);
      MiDereferenceIoPageRuns(v15, v21);
      MiReleaseProcessorFlushList();
      v4 = 0LL;
      v16 = 48 * ((*v8 >> 12) & 0xFFFFFFFFFFLL);
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v16 - 0x21FFFFFFFFE8LL) < 0 );
      }
      *(_QWORD *)(v16 - 0x220000000000LL + 24) = (*(_QWORD *)(v16 - 0x21FFFFFFFFE8LL) - v25) ^ (*(_QWORD *)(v16 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v16 - 0x21FFFFFFFFE8LL) - v25)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal((__int64)p_Blink, v9);
      v11 = v24;
      MiUnlockWorkingSetShared((__int64)p_Blink, v24);
      if ( v6 > v7 )
        break;
      v8 = (_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v9 = 0LL;
      v25 = 0;
      MiLockWorkingSetShared((__int64)p_Blink, 0LL, v18, v19);
    }
  }
  return v5;
}
