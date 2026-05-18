/*
 * XREFs of sub_180017598 @ 0x180017598
 * Callers:
 *     sub_180015898 @ 0x180015898 (sub_180015898.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B6328 @ 0x1800B6328 (sub_1800B6328.c)
 *     sub_1800B64D4 @ 0x1800B64D4 (sub_1800B64D4.c)
 *     sub_1800B6680 @ 0x1800B6680 (sub_1800B6680.c)
 *     sub_1800B682C @ 0x1800B682C (sub_1800B682C.c)
 * Callees:
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 */

__int64 __fastcall sub_180017598(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      sub_18002815C(*(_QWORD *)a1);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
    *(_QWORD *)a2 = 0LL;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a1;
}
