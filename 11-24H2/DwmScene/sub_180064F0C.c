/*
 * XREFs of sub_180064F0C @ 0x180064F0C
 * Callers:
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     _o_sqrtf @ 0x18000C4A0 (_o_sqrtf.c)
 *     _o_tanf @ 0x18000C4AC (_o_tanf.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180064F0C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        _QWORD *a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 result; // rax
  __int64 v20; // rcx

  o_tanf();
  o_sqrtf();
  sub_18007C95C(*a15, a19);
  sub_18007C95C(*a15, a16);
  sub_18007C95C(*a15, a17);
  sub_18007C95C(*a15, a18);
  result = a14;
  v20 = *(_QWORD *)(a14 + 8);
  if ( v20 )
    return sub_18001060C(v20);
  return result;
}
