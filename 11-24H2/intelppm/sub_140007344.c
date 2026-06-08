/*
 * XREFs of sub_140007344 @ 0x140007344
 * Callers:
 *     sub_14002AC30 @ 0x14002AC30 (sub_14002AC30.c)
 * Callees:
 *     sub_140007EC8 @ 0x140007EC8 (sub_140007EC8.c)
 *     sub_14000806C @ 0x14000806C (sub_14000806C.c)
 */

__int64 __fastcall sub_140007344(__int64 a1)
{
  __int64 v1; // rbx

  v1 = qword_140021DE8;
  if ( (qword_140021DE8 & 8) == 0 )
    v1 = sub_14000806C(a1, qword_140021DE8);
  sub_140007EC8(a1, v1);
  return ((unsigned int)v1 >> 12) & 0x3F;
}
