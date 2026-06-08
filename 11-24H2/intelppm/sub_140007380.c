/*
 * XREFs of sub_140007380 @ 0x140007380
 * Callers:
 *     sub_14002AC30 @ 0x14002AC30 (sub_14002AC30.c)
 * Callees:
 *     sub_1400073B8 @ 0x1400073B8 (sub_1400073B8.c)
 */

__int64 sub_140007380()
{
  if ( (qword_140021DE8 & 0x10) != 0 )
    return qword_140021DE8 & 1;
  else
    return sub_1400073B8((unsigned int)qword_140021DE8, 3LL);
}
