/*
 * XREFs of sub_18005B968 @ 0x18005B968
 * Callers:
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18004C4C4 @ 0x18004C4C4 (sub_18004C4C4.c)
 *     sub_18005BC94 @ 0x18005BC94 (sub_18005BC94.c)
 */

__int64 __fastcall sub_18005B968(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_18005BC94(a1, v7);
  v4 = (unsigned int)sub_18004C4C4(*v2, v3);
  if ( v8 )
    sub_18001050C(v8);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v5, v4) )
    LODWORD(v4) = -1;
  return (unsigned int)v4;
}
