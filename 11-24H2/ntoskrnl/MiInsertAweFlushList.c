/*
 * XREFs of MiInsertAweFlushList @ 0x14068279C
 * Callers:
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 */

void __fastcall MiInsertAweFlushList(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  int v7; // ebp

  v4 = *(_QWORD *)(a1 + 160);
  v5 = a3;
  *(_DWORD *)(a2 + 20) |= a4;
  v7 = *(_DWORD *)(a1 + 156);
  if ( v7 )
  {
    for ( ; v4; --v4 )
    {
      MiInsertLargeTbFlushEntry(a2, v7, v5);
      v5 += 8LL;
    }
  }
  else
  {
    MiInsertTbFlushEntry(a2, (__int64)(a3 << 25) >> 16, v4, 0);
  }
}
