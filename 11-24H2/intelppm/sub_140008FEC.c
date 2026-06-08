/*
 * XREFs of sub_140008FEC @ 0x140008FEC
 * Callers:
 *     sub_14002CE38 @ 0x14002CE38 (sub_14002CE38.c)
 *     sub_14002D040 @ 0x14002D040 (sub_14002D040.c)
 *     sub_14002D0BC @ 0x14002D0BC (sub_14002D0BC.c)
 *     sub_14002D138 @ 0x14002D138 (sub_14002D138.c)
 *     sub_140049798 @ 0x140049798 (sub_140049798.c)
 *     sub_14004985C @ 0x14004985C (sub_14004985C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140008FEC(_QWORD *a1)
{
  while ( a1 < qword_140017AE0 )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
