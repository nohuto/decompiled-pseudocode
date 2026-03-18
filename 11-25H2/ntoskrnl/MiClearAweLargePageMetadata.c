/*
 * XREFs of MiClearAweLargePageMetadata @ 0x140676080
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x1406769C4 (MiFreeContiguousLargePageRun.c)
 *     MiReadyLargeAwePageForFree @ 0x1406771E8 (MiReadyLargeAwePageForFree.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 */

unsigned __int64 __fastcall MiClearAweLargePageMetadata(__int64 a1)
{
  unsigned __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h]

  MiSetPfnIdentity(a1, 0);
  MiSetPfnContainingFrame(a1, 0LL);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 5 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    BYTE2(v3) = BYTE2(v3) & 0xF8 | 5;
    *(_DWORD *)(a1 + 32) = v3;
  }
  result = *(_QWORD *)(a1 + 24);
  if ( (result & 0x4000000000000000LL) != 0 )
  {
    result = *(_QWORD *)(a1 + 24) & 0xBFFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
