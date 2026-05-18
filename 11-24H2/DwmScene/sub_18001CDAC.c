/*
 * XREFs of sub_18001CDAC @ 0x18001CDAC
 * Callers:
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001CD84 @ 0x18001CD84 (sub_18001CD84.c)
 *     sub_18004D354 @ 0x18004D354 (sub_18004D354.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800C66F8 @ 0x1800C66F8 (sub_1800C66F8.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001BACC @ 0x18001BACC (sub_18001BACC.c)
 */

void **__fastcall sub_18001CDAC(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  const void *v9; // rdx
  void **result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a3 > *(_QWORD *)(a1 + 24) - v4 )
    return sub_18001BACC((void **)a1, a3, v4, a2, a3);
  *(_QWORD *)(a1 + 16) = v4 + a3;
  v6 = sub_1800138F8(a1);
  v8 = v6 + v7;
  memmove((void *)(v6 + v7), v9, a3);
  result = (void **)a1;
  *(_BYTE *)(v8 + a3) = 0;
  return result;
}
