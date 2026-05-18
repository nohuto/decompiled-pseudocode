/*
 * XREFs of sub_18001D54C @ 0x18001D54C
 * Callers:
 *     sub_18004D674 @ 0x18004D674 (sub_18004D674.c)
 *     sub_180084A9C @ 0x180084A9C (sub_180084A9C.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

void **__fastcall sub_18001D54C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  void **result; // rax
  char v4; // dl
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 >= *(_QWORD *)(a1 + 24) )
    return sub_18001D0DC((void **)a1, a2, v2, a2);
  *(_QWORD *)(a1 + 16) = v2 + 1;
  result = (void **)sub_1800137F8(a1);
  *((_BYTE *)result + v5) = v4;
  *((_BYTE *)result + v5 + 1) = 0;
  return result;
}
