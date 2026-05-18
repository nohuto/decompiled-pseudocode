/*
 * XREFs of sub_1800576C8 @ 0x1800576C8
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_180058EB0 @ 0x180058EB0 (sub_180058EB0.c)
 *     sub_180065264 @ 0x180065264 (sub_180065264.c)
 *     sub_180088B00 @ 0x180088B00 (sub_180088B00.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18003A418 @ 0x18003A418 (sub_18003A418.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800576C8(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_180011B04(a1 + 56, &v4);
  result = sub_18003A418(v4);
  v3 = result;
  if ( v5 )
    result = sub_18001050C(v5);
  if ( v3 != *(_QWORD *)(a1 + 96) )
  {
    result = sub_180058950(a1, 1LL);
    *(_QWORD *)(a1 + 96) = v3;
  }
  return result;
}
