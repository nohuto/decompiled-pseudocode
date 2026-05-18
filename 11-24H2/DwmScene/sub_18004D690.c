/*
 * XREFs of sub_18004D690 @ 0x18004D690
 * Callers:
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 *     sub_18004CA78 @ 0x18004CA78 (sub_18004CA78.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     sub_18004D03C @ 0x18004D03C (sub_18004D03C.c)
 * Callees:
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 */

__int64 *__fastcall sub_18004D690(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 *result; // rax
  __int64 *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_18001B9BC((__int64)a1, &v8, a3);
  v5 = v9;
  if ( !sub_18001BA80(v6, v9) )
    v5 = *a1;
  result = a2;
  *a2 = v5;
  return result;
}
