/*
 * XREFs of MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464
 * Callers:
 *     MmRotatePhysicalView @ 0x140A28CF0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiUnmapFrameBuffer @ 0x140391878 (MiUnmapFrameBuffer.c)
 *     MiDereferenceIoPageRuns @ 0x1403919F0 (MiDereferenceIoPageRuns.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZeroNoCopy(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  __int64 *v4; // r13
  unsigned int v5; // r15d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  _QWORD *v8; // rsi
  ULONG_PTR v9; // rbp
  struct _LIST_ENTRY **p_Blink; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // bl
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // esi
  __int64 v20; // rcx
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 *ProcessorFlushList; // [rsp+40h] [rbp-58h]
  unsigned __int8 v24; // [rsp+A8h] [rbp+10h]
  unsigned int v25; // [rsp+B0h] [rbp+18h]

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
  v24 = MiLockWorkingSetShared((__int64)p_Blink);
  v13 = v24;
  if ( v6 <= v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v9 )
        {
          v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockNestedPageTable((__int64)p_Blink, v9, v11, v12);
          MiUnlockOpportunisticPagesInPageTable((__int64)p_Blink, v13, v6, v7);
          if ( !v5 )
          {
            if ( MiUnlockOpportunisticPagesInPageTable((__int64)p_Blink, 0x11u, v6, v7) )
              v5 = 1073741849;
          }
        }
        v14 = (*(_QWORD *)v6 >> 12) & 0xFFFFFFFFFFLL;
        MiUnmapFrameBuffer(a1, v6, a4);
        if ( v4 )
        {
          v15 = v21;
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
          v21 = v20 + 4136;
          MiInitializeTbFlushList(v20 + 4136, (__int64)p_Blink, *(_DWORD *)(v20 + 4148), 24, 1);
        }
        if ( v14 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
          MiInsertTbFlushEntry(v15, v14 << 12, 1LL, 0);
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(v6 << 25) >> 16, 1LL, 0);
        ++v25;
        v6 += 8LL;
        if ( (v6 & 0xFFF) == 0
          || v6 > v7
          || (v6 & 0x78) == 0
          && ((unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0)
           || (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v9)
           || KeShouldYieldProcessor()) )
        {
          break;
        }
        v13 = v24;
      }
      MiFlushTbList((__int64)ProcessorFlushList);
      MiDereferenceIoPageRuns(v16, v21);
      MiReleaseProcessorFlushList();
      v4 = 0LL;
      v17 = 48 * ((*v8 >> 12) & 0xFFFFFFFFFFLL);
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v17 - 0x21FFFFFFFFE8LL) < 0 );
      }
      *(_QWORD *)(v17 - 0x220000000000LL + 24) = (*(_QWORD *)(v17 - 0x21FFFFFFFFE8LL) - v25) ^ (*(_QWORD *)(v17 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v17 - 0x21FFFFFFFFE8LL) - v25)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v17 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTable((__int64)p_Blink, v9);
      v13 = v24;
      MiUnlockWorkingSetShared((__int64)p_Blink, v24);
      if ( v6 > v7 )
        break;
      v8 = (_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v9 = 0LL;
      v25 = 0;
      MiLockWorkingSetShared((__int64)p_Blink);
    }
  }
  return v5;
}
