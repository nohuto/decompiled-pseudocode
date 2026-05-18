/*
 * XREFs of sub_18001D6AC @ 0x18001D6AC
 * Callers:
 *     sub_18004D7D4 @ 0x18004D7D4 (sub_18004D7D4.c)
 *     sub_180084BFC @ 0x180084BFC (sub_180084BFC.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

void **__fastcall sub_18001D6AC(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  void **result; // rax
  char v4; // dl
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 >= *(_QWORD *)(a1 + 24) )
    return sub_18001D23C((void **)a1, a2, v2, a2);
  *(_QWORD *)(a1 + 16) = v2 + 1;
  result = (void **)sub_1800138F8(a1);
  *((_BYTE *)result + v5) = v4;
  *((_BYTE *)result + v5 + 1) = 0;
  return result;
}
