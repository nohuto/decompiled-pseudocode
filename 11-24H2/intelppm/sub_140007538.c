/*
 * XREFs of sub_140007538 @ 0x140007538
 * Callers:
 *     sub_14002AC30 @ 0x14002AC30 (sub_14002AC30.c)
 * Callees:
 *     sub_140048008 @ 0x140048008 (sub_140048008.c)
 */

char sub_140007538()
{
  char v0; // bl
  unsigned __int8 v2; // [rsp+30h] [rbp+8h] BYREF
  __int16 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0;
  v2 = 0;
  sub_140048008(&v3, &v2);
  if ( v3 == 6 && (v2 == 170 || v2 == 172 || (unsigned int)v2 - 188 <= 1) )
    return 1;
  return v0;
}
