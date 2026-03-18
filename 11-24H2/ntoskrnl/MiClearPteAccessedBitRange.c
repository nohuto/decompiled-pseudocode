/*
 * XREFs of MiClearPteAccessedBitRange @ 0x140394414
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 */

void __fastcall MiClearPteAccessedBitRange(__int64 a1, int a2, unsigned __int64 a3)
{
  volatile signed __int64 *v3; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned int v7; // ebp
  signed __int64 v8; // rdi
  __int64 *ProcessorFlushList; // rbx
  __int64 v10; // rcx
  unsigned int v11; // r9d

  if ( !a2 )
  {
    v3 = (volatile signed __int64 *)a3;
    v5 = *(_QWORD *)(a1 + 128);
    v6 = (__int64)(a3 << 25) >> 16;
    if ( v5 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v5 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v7 = 0;
    if ( a3 <= v5 )
    {
      do
      {
        v8 = *v3;
        if ( (*v3 & 0x21) != 0x21 )
          break;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v8 & 1) == 1 && (unsigned __int64)v3 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, 128);
        _InterlockedCompareExchange64(v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8);
        ++v7;
        ++v3;
      }
      while ( (unsigned __int64)v3 <= v5 );
      if ( v7 )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          *(_QWORD *)(a1 + 32),
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          2);
        MiInsertTbFlushEntry(v10, v6, v7, v11);
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
      }
    }
  }
}
