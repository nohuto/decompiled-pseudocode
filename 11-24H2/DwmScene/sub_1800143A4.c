/*
 * XREFs of sub_1800143A4 @ 0x1800143A4
 * Callers:
 *     sub_18001419C @ 0x18001419C (sub_18001419C.c)
 *     sub_1800143E0 @ 0x1800143E0 (sub_1800143E0.c)
 *     sub_180049A60 @ 0x180049A60 (sub_180049A60.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_18008D330 @ 0x18008D330 (sub_18008D330.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_1800143A4(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_18001254C((__int64 *)(a1 + 88), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_18001060C(v4);
  return result;
}
