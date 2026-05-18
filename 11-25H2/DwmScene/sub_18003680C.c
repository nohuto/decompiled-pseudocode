/*
 * XREFs of sub_18003680C @ 0x18003680C
 * Callers:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18005CB24 @ 0x18005CB24 (sub_18005CB24.c)
 * Callees:
 *     sub_18002D444 @ 0x18002D444 (sub_18002D444.c)
 *     sub_18002D9D0 @ 0x18002D9D0 (sub_18002D9D0.c)
 */

_BOOL8 __fastcall sub_18003680C(__int64 a1, _QWORD *a2)
{
  __int64 **v3; // rax
  __int64 v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_18002D444(a1, &v6, a2);
  return sub_18002D9D0(v4, (__int64)v3[2], a2);
}
