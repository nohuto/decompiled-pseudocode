/*
 * XREFs of sub_180055840 @ 0x180055840
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 * Callees:
 *     sub_180023DA4 @ 0x180023DA4 (sub_180023DA4.c)
 *     sub_180054654 @ 0x180054654 (sub_180054654.c)
 *     sub_180054B88 @ 0x180054B88 (sub_180054B88.c)
 */

unsigned __int64 __fastcall sub_180055840(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 424);
  v3 = (__int64 *)(a1 + 416);
  result = (unsigned __int64)sub_180054B88(&v8, *(_QWORD *)(a1 + 416), v2, a2);
  if ( v8 == v2 )
  {
    v7 = v3[1];
    if ( v7 == v3[2] )
    {
      return sub_180054654(v3, v7, v6);
    }
    else
    {
      result = sub_180023DA4(v5, v7, v6);
      v3[1] += 32LL;
    }
  }
  return result;
}
