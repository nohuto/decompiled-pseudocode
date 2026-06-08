/*
 * XREFs of sub_140006020 @ 0x140006020
 * Callers:
 *     sub_140009304 @ 0x140009304 (sub_140009304.c)
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 *     sub_14002DD48 @ 0x14002DD48 (sub_14002DD48.c)
 *     sub_14002EADC @ 0x14002EADC (sub_14002EADC.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140006020(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1;
  return result;
}
