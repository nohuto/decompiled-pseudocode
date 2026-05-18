/*
 * XREFs of sub_18005BAC8 @ 0x18005BAC8
 * Callers:
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18004C624 @ 0x18004C624 (sub_18004C624.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 */

__int64 __fastcall sub_18005BAC8(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_18005BDF4(a1, v7);
  v4 = (unsigned int)sub_18004C624(*v2, v3);
  if ( v8 )
    sub_18001060C(v8);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v5, v4) )
    LODWORD(v4) = -1;
  return (unsigned int)v4;
}
