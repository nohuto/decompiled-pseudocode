/*
 * XREFs of sub_18004C678 @ 0x18004C678
 * Callers:
 *     sub_18004C05C @ 0x18004C05C (sub_18004C05C.c)
 *     sub_18006B93C @ 0x18006B93C (sub_18006B93C.c)
 *     sub_180079FD4 @ 0x180079FD4 (sub_180079FD4.c)
 * Callees:
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 */

__int64 __fastcall sub_18004C678(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 2088);
  sub_18001B9BC(a1 + 2088, &v6, a2);
  v3 = v7;
  if ( !sub_18001BA80(v4, v7) || v3 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v3 + 64);
}
