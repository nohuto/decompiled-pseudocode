/*
 * XREFs of sub_180010BE8 @ 0x180010BE8
 * Callers:
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     sub_180015998 @ 0x180015998 (sub_180015998.c)
 *     sub_180015CC8 @ 0x180015CC8 (sub_180015CC8.c)
 *     sub_180015DB8 @ 0x180015DB8 (sub_180015DB8.c)
 *     sub_180015EA8 @ 0x180015EA8 (sub_180015EA8.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800236FC @ 0x1800236FC (sub_1800236FC.c)
 *     sub_180025B00 @ 0x180025B00 (sub_180025B00.c)
 *     sub_180030D14 @ 0x180030D14 (sub_180030D14.c)
 *     sub_180040998 @ 0x180040998 (sub_180040998.c)
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     sub_180044674 @ 0x180044674 (sub_180044674.c)
 *     sub_180049D9C @ 0x180049D9C (sub_180049D9C.c)
 *     sub_180049E6C @ 0x180049E6C (sub_180049E6C.c)
 *     sub_180049F3C @ 0x180049F3C (sub_180049F3C.c)
 *     sub_18004A00C @ 0x18004A00C (sub_18004A00C.c)
 *     sub_18004A0DC @ 0x18004A0DC (sub_18004A0DC.c)
 *     sub_180053308 @ 0x180053308 (sub_180053308.c)
 *     sub_180059EB0 @ 0x180059EB0 (sub_180059EB0.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_18007AAD0 @ 0x18007AAD0 (sub_18007AAD0.c)
 *     sub_18007CF48 @ 0x18007CF48 (sub_18007CF48.c)
 *     sub_180089060 @ 0x180089060 (sub_180089060.c)
 *     sub_1800B62DC @ 0x1800B62DC (sub_1800B62DC.c)
 *     sub_1800B6488 @ 0x1800B6488 (sub_1800B6488.c)
 *     sub_1800B6634 @ 0x1800B6634 (sub_1800B6634.c)
 *     sub_1800B67E0 @ 0x1800B67E0 (sub_1800B67E0.c)
 *     sub_1800B698C @ 0x1800B698C (sub_1800B698C.c)
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 */

__int64 __fastcall sub_180010BE8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 result; // rax

  sub_180010B74(*(_QWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 16;
  return result;
}
