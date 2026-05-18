/*
 * XREFs of sub_18004C518 @ 0x18004C518
 * Callers:
 *     sub_18004BEFC @ 0x18004BEFC (sub_18004BEFC.c)
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 * Callees:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 */

__int64 __fastcall sub_18004C518(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 2088);
  sub_18001B85C(a1 + 2088, &v6, a2);
  v3 = v7;
  if ( !sub_18001B920(v4, v7) || v3 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v3 + 64);
}
