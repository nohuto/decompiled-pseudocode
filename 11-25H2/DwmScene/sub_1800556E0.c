/*
 * XREFs of sub_1800556E0 @ 0x1800556E0
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 * Callees:
 *     sub_180023C44 @ 0x180023C44 (sub_180023C44.c)
 *     sub_1800544F4 @ 0x1800544F4 (sub_1800544F4.c)
 *     sub_180054A28 @ 0x180054A28 (sub_180054A28.c)
 */

unsigned __int64 __fastcall sub_1800556E0(__int64 a1, __int64 a2)
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
  result = (unsigned __int64)sub_180054A28(&v8, *(_QWORD *)(a1 + 416), v2, a2);
  if ( v8 == v2 )
  {
    v7 = v3[1];
    if ( v7 == v3[2] )
    {
      return sub_1800544F4(v3, v7, v6);
    }
    else
    {
      result = sub_180023C44(v5, v7, v6);
      v3[1] += 32LL;
    }
  }
  return result;
}
