/*
 * XREFs of sub_180010AE8 @ 0x180010AE8
 * Callers:
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     sub_180015898 @ 0x180015898 (sub_180015898.c)
 *     sub_180015BC8 @ 0x180015BC8 (sub_180015BC8.c)
 *     sub_180015CB8 @ 0x180015CB8 (sub_180015CB8.c)
 *     sub_180015DA8 @ 0x180015DA8 (sub_180015DA8.c)
 *     sub_180023340 @ 0x180023340 (sub_180023340.c)
 *     sub_18002359C @ 0x18002359C (sub_18002359C.c)
 *     sub_1800259A0 @ 0x1800259A0 (sub_1800259A0.c)
 *     sub_180030BB4 @ 0x180030BB4 (sub_180030BB4.c)
 *     sub_180040838 @ 0x180040838 (sub_180040838.c)
 *     sub_180044400 @ 0x180044400 (sub_180044400.c)
 *     sub_180044514 @ 0x180044514 (sub_180044514.c)
 *     sub_180049C3C @ 0x180049C3C (sub_180049C3C.c)
 *     sub_180049D0C @ 0x180049D0C (sub_180049D0C.c)
 *     sub_180049DDC @ 0x180049DDC (sub_180049DDC.c)
 *     sub_180049EAC @ 0x180049EAC (sub_180049EAC.c)
 *     sub_180049F7C @ 0x180049F7C (sub_180049F7C.c)
 *     sub_1800531A8 @ 0x1800531A8 (sub_1800531A8.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_18005B47C @ 0x18005B47C (sub_18005B47C.c)
 *     sub_18007A970 @ 0x18007A970 (sub_18007A970.c)
 *     sub_18007CDE8 @ 0x18007CDE8 (sub_18007CDE8.c)
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B6328 @ 0x1800B6328 (sub_1800B6328.c)
 *     sub_1800B64D4 @ 0x1800B64D4 (sub_1800B64D4.c)
 *     sub_1800B6680 @ 0x1800B6680 (sub_1800B6680.c)
 *     sub_1800B682C @ 0x1800B682C (sub_1800B682C.c)
 * Callees:
 *     sub_180010A74 @ 0x180010A74 (sub_180010A74.c)
 */

__int64 __fastcall sub_180010AE8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 result; // rax

  sub_180010A74(*(_QWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 16;
  return result;
}
