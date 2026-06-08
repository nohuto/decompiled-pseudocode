/*
 * XREFs of sub_14002B14C @ 0x14002B14C
 * Callers:
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 * Callees:
 *     sub_140048008 @ 0x140048008 (sub_140048008.c)
 */

bool sub_14002B14C()
{
  unsigned __int8 v1; // [rsp+30h] [rbp+8h] BYREF
  __int16 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v1 = 0;
  sub_140048008(&v2, &v1);
  if ( v2 == 15 )
    return 0;
  if ( v2 == 6 )
    return v1 >= 0x2Au;
  return 1;
}
