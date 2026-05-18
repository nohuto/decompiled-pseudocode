/*
 * XREFs of sub_180057828 @ 0x180057828
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_180059010 @ 0x180059010 (sub_180059010.c)
 *     sub_1800653C4 @ 0x1800653C4 (sub_1800653C4.c)
 *     sub_180088C60 @ 0x180088C60 (sub_180088C60.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18003A578 @ 0x18003A578 (sub_18003A578.c)
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180057828(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_180011C04(a1 + 56, &v4);
  result = sub_18003A578(v4);
  v3 = result;
  if ( v5 )
    result = sub_18001060C(v5);
  if ( v3 != *(_QWORD *)(a1 + 96) )
  {
    result = sub_180058AB0(a1, 1LL);
    *(_QWORD *)(a1 + 96) = v3;
  }
  return result;
}
