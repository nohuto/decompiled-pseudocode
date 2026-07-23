/*
 * XREFs of MiDecommitAddTbFlushEntries @ 0x1404F7974
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDeleteLargeUserPde @ 0x1404B4B44 (MiDeleteLargeUserPde.c)
 *     MiDecommitLargePte @ 0x1404C1658 (MiDecommitLargePte.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 */

void __fastcall MiDecommitAddTbFlushEntries(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 *ProcessorFlushList; // rax
  __int64 v10; // rdx

  if ( a4 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = a4;
    if ( !v4 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      v10 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 16) = ProcessorFlushList;
      v4 = (__int64)ProcessorFlushList;
      MiInitializeTbFlushList((__int64)ProcessorFlushList, v10, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
    }
    if ( a3 )
    {
      do
      {
        MiInsertLargeTbFlushEntry(v4, a3, a2);
        a2 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    else
    {
      MiInsertTbFlushEntry(v4, (__int64)(a2 << 25) >> 16, v5, 0);
    }
  }
}
