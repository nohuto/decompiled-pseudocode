/*
 * XREFs of sub_180053FF8 @ 0x180053FF8
 * Callers:
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 * Callees:
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180053ED8 @ 0x180053ED8 (sub_180053ED8.c)
 */

char __fastcall sub_180053FF8(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
    return 1;
  v2 = 0;
  v3 = *(__int64 **)a1;
  v4 = **(_QWORD **)a2;
  v5 = **(_QWORD **)a1;
  v7 = v5;
  v8 = v4;
  while ( (__int64 *)v5 != v3 )
  {
    if ( !sub_180053ED8(v5 + 32, v4 + 32) )
      return 1;
    sub_18001C2C0(&v7);
    sub_18001C2C0(&v8);
    v5 = v7;
    v4 = v8;
  }
  return v2;
}
