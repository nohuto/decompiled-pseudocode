/*
 * XREFs of sub_18007BA90 @ 0x18007BA90
 * Callers:
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 *     sub_18007B6F0 @ 0x18007B6F0 (sub_18007B6F0.c)
 * Callees:
 *     sub_18007CC38 @ 0x18007CC38 (sub_18007CC38.c)
 */

bool __fastcall sub_18007BA90(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 112);
  v5 = a2;
  sub_18007CC38(a1 + 112, &v4, &v5);
  return v4 != *v2;
}
