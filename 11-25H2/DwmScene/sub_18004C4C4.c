/*
 * XREFs of sub_18004C4C4 @ 0x18004C4C4
 * Callers:
 *     sub_180041928 @ 0x180041928 (sub_180041928.c)
 *     sub_18004BDCC @ 0x18004BDCC (sub_18004BDCC.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_18005B968 @ 0x18005B968 (sub_18005B968.c)
 *     sub_1800912C0 @ 0x1800912C0 (sub_1800912C0.c)
 * Callees:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 */

__int64 __fastcall sub_18004C4C4(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 16);
  sub_18001B85C(a1 + 16, &v6, a2);
  v3 = v7;
  if ( !sub_18001B920(v4, v7) || v3 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v3 + 64);
}
