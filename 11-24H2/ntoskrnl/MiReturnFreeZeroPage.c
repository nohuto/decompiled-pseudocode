/*
 * XREFs of MiReturnFreeZeroPage @ 0x14024EE00
 * Callers:
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  ULONG_PTR v2; // r9
  int v3; // ecx
  int v4; // ecx
  int v6; // [rsp+38h] [rbp+10h]
  int v7; // [rsp+38h] [rbp+10h]
  int v8; // [rsp+38h] [rbp+10h]

  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
  {
    v8 = *(_DWORD *)(a1 + 32);
    BYTE2(v8) = BYTE2(v8) & 0xF8 | 5;
    *(_DWORD *)(a1 + 32) = v8;
  }
  v3 = *(_DWORD *)(a1 + 32);
  LOWORD(v6) = v3;
  HIBYTE(v6) = HIBYTE(v3) & 0xD7;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  BYTE2(v6) = BYTE2(v3) & 0xC7;
  v4 = 0;
  *(_DWORD *)(a1 + 32) = v6;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    v4 = *(_DWORD *)(a1 + 36) & 0x18000000;
  *(_DWORD *)(a1 + 36) = v4;
  v7 = *(_DWORD *)(a1 + 32);
  HIBYTE(v7) &= ~0x10u;
  *(_DWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  HIWORD(v7) = HIWORD(*(_DWORD *)(a1 + 32));
  LOWORD(v7) = 0;
  *(_DWORD *)(a1 + 32) = v7;
  return MiInsertPageInFreeOrZeroedList(v2);
}
