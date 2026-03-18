/*
 * XREFs of MiClearAweLargePageMetadata @ 0x1406818A0
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiReadyLargeAwePageForFree @ 0x140682A08 (MiReadyLargeAwePageForFree.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
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
