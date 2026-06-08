/*
 * XREFs of sub_1400053CC @ 0x1400053CC
 * Callers:
 *     sub_140006AB0 @ 0x140006AB0 (sub_140006AB0.c)
 *     sub_14000DAA4 @ 0x14000DAA4 (sub_14000DAA4.c)
 *     sub_140029798 @ 0x140029798 (sub_140029798.c)
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_140037080 @ 0x140037080 (sub_140037080.c)
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 *     sub_1400385B0 @ 0x1400385B0 (sub_1400385B0.c)
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400053CC(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
