/*
 * XREFs of MiClearPteAccessedBitRange @ 0x1402D1788
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 */

void __fastcall MiClearPteAccessedBitRange(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  unsigned int v8; // ebp
  signed __int64 v9; // rdi
  __int64 ProcessorFlushList; // rbx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8

  if ( !a2 )
  {
    v4 = (volatile signed __int64 *)a3;
    v5 = a1;
    v6 = *(_QWORD *)(a1 + 128);
    v7 = (__int64)(a3 << 25) >> 16;
    if ( v6 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v6 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v8 = 0;
    if ( a3 <= v6 )
    {
      do
      {
        v9 = *v4;
        if ( (*v4 & 0x21) != 0x21 )
          break;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) )
        {
          if ( (v9 & 1) == 1 )
          {
            a1 = 0x4000000000LL;
            if ( (unsigned __int64)v4 >= 0xFFFFF6C000000000uLL )
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v4, v9 & 0xFFFFFFFFFFFFFFDFuLL);
          }
        }
        _InterlockedCompareExchange64(v4, v9 & 0xFFFFFFFFFFFFFFDFuLL, v9);
        ++v8;
        ++v4;
      }
      while ( (unsigned __int64)v4 <= v6 );
      if ( v8 )
      {
        ProcessorFlushList = MiGetProcessorFlushList(a1, 0xFFFFF68000000000uLL, a3, a4);
        MiInitializeTbFlushList(ProcessorFlushList, *(_QWORD *)(v5 + 32), *(_DWORD *)(ProcessorFlushList + 12), 0, 2);
        MiInsertTbFlushEntry(v11, v7, v8, v12);
        MiFlushTbList(ProcessorFlushList, v13, v14);
        MiReleaseProcessorFlushList();
      }
    }
  }
}
