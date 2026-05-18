/*
 * XREFs of sub_180064DAC @ 0x180064DAC
 * Callers:
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 * Callees:
 *     _o_sqrtf @ 0x18000C040 (_o_sqrtf.c)
 *     _o_tanf @ 0x18000C04C (_o_tanf.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180064DAC(
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
  sub_18007C7FC(*a15, a19);
  sub_18007C7FC(*a15, a16);
  sub_18007C7FC(*a15, a17);
  sub_18007C7FC(*a15, a18);
  result = a14;
  v20 = *(_QWORD *)(a14 + 8);
  if ( v20 )
    return sub_18001050C(v20);
  return result;
}
