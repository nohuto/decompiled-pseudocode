/*
 * XREFs of sub_18004D530 @ 0x18004D530
 * Callers:
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 *     sub_18004C918 @ 0x18004C918 (sub_18004C918.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_18004CDF0 @ 0x18004CDF0 (sub_18004CDF0.c)
 *     sub_18004CEDC @ 0x18004CEDC (sub_18004CEDC.c)
 * Callees:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 */

__int64 *__fastcall sub_18004D530(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 *result; // rax
  __int64 *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_18001B85C((__int64)a1, &v8, a3);
  v5 = v9;
  if ( !sub_18001B920(v6, v9) )
    v5 = *a1;
  result = a2;
  *a2 = v5;
  return result;
}
