/*
 * XREFs of sub_18004C624 @ 0x18004C624
 * Callers:
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_18004BF2C @ 0x18004BF2C (sub_18004BF2C.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_18005BAC8 @ 0x18005BAC8 (sub_18005BAC8.c)
 *     sub_180091420 @ 0x180091420 (sub_180091420.c)
 * Callees:
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 */

__int64 __fastcall sub_18004C624(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 16);
  sub_18001B9BC(a1 + 16, &v6, a2);
  v3 = v7;
  if ( !sub_18001BA80(v4, v7) || v3 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v3 + 64);
}
