/*
 * XREFs of sub_18001CC4C @ 0x18001CC4C
 * Callers:
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001CC24 @ 0x18001CC24 (sub_18001CC24.c)
 *     sub_18004D1F4 @ 0x18004D1F4 (sub_18004D1F4.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800C6598 @ 0x1800C6598 (sub_1800C6598.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001B96C @ 0x18001B96C (sub_18001B96C.c)
 */

void **__fastcall sub_18001CC4C(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  const void *v9; // rdx
  void **result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a3 > *(_QWORD *)(a1 + 24) - v4 )
    return sub_18001B96C((void **)a1, a3, v4, a2, a3);
  *(_QWORD *)(a1 + 16) = v4 + a3;
  v6 = sub_1800137F8(a1);
  v8 = v6 + v7;
  memmove((void *)(v6 + v7), v9, a3);
  result = (void **)a1;
  *(_BYTE *)(v8 + a3) = 0;
  return result;
}
