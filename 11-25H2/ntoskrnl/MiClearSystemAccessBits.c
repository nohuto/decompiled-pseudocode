/*
 * XREFs of MiClearSystemAccessBits @ 0x140678120
 * Callers:
 *     MiPfnRangeIsZero @ 0x14066276C (MiPfnRangeIsZero.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 */

void __fastcall MiClearSystemAccessBits(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v4; // r14
  __int64 *ProcessorFlushList; // rbp
  signed __int64 v7; // rdi
  struct _LIST_ENTRY **v8; // rbx

  if ( a2 )
  {
    v4 = a2;
    ProcessorFlushList = 0LL;
    do
    {
      v7 = *(_QWORD *)BugCheckParameter2;
      if ( (*(_QWORD *)BugCheckParameter2 & 0x20) != 0 )
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v7 & 1) == 1 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v7 & 0xFFFFFFFFFFFFFFDFuLL, 128);
        _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v7 & 0xFFFFFFFFFFFFFFDFuLL, v7);
        if ( !ProcessorFlushList )
        {
          v8 = MiVaToFlushVm(BugCheckParameter2);
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v8, *((_DWORD *)ProcessorFlushList + 3), 0, 2);
        }
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, a3, BugCheckParameter2);
        else
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0);
      }
      BugCheckParameter2 += 8LL;
      --v4;
    }
    while ( v4 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
  }
}
