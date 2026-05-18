/*
 * XREFs of sub_18005C53C @ 0x18005C53C
 * Callers:
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_1800680F0 @ 0x1800680F0 (sub_1800680F0.c)
 *     sub_1800D0D64 @ 0x1800D0D64 (sub_1800D0D64.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001E5D4 @ 0x18001E5D4 (sub_18001E5D4.c)
 */

char __fastcall sub_18005C53C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int16 *v6; // r10
  __int64 v7; // r8
  int v8; // eax
  char v9; // cl

  sub_1800130AC(a3);
  v4 = sub_1800130AC(v3);
  if ( v5 != *(_QWORD *)(v7 + 16) )
    return 1;
  v8 = sub_18001E5D4(v4, v6, v5);
  v9 = 0;
  if ( v8 )
    return 1;
  return v9;
}
