/*
 * XREFs of sub_1800C011C @ 0x1800C011C
 * Callers:
 *     sub_1800BFF2C @ 0x1800BFF2C (sub_1800BFF2C.c)
 * Callees:
 *     sub_18001F140 @ 0x18001F140 (sub_18001F140.c)
 */

__int64 __fastcall sub_1800C011C(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_18001F140(a1, (__int64)"{");
  v5 = sub_18001F140(v4, (__int64)"Count");
  v6 = sub_18001F140(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_18001F140(v7, (__int64)",Quality");
  v9 = sub_18001F140(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_18001F140(v10, (__int64)",");
  sub_18001F140(v11, (__int64)"}");
  return a1;
}
