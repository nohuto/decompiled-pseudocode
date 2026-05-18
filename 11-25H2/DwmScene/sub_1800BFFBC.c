/*
 * XREFs of sub_1800BFFBC @ 0x1800BFFBC
 * Callers:
 *     sub_1800BFDCC @ 0x1800BFDCC (sub_1800BFDCC.c)
 * Callees:
 *     sub_18001EFE0 @ 0x18001EFE0 (sub_18001EFE0.c)
 */

__int64 __fastcall sub_1800BFFBC(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_18001EFE0(a1, (__int64)"{");
  v5 = sub_18001EFE0(v4, (__int64)"Count");
  v6 = sub_18001EFE0(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_18001EFE0(v7, (__int64)",Quality");
  v9 = sub_18001EFE0(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_18001EFE0(v10, (__int64)",");
  sub_18001EFE0(v11, (__int64)"}");
  return a1;
}
