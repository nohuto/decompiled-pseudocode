/*
 * XREFs of sub_18007BBF0 @ 0x18007BBF0
 * Callers:
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 *     sub_18007B850 @ 0x18007B850 (sub_18007B850.c)
 * Callees:
 *     sub_18007CD98 @ 0x18007CD98 (sub_18007CD98.c)
 */

bool __fastcall sub_18007BBF0(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 112);
  v5 = a2;
  sub_18007CD98(a1 + 112, &v4, &v5);
  return v4 != *v2;
}
