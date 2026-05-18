/*
 * XREFs of sub_1800284DC @ 0x1800284DC
 * Callers:
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 *     sub_18001565C @ 0x18001565C (sub_18001565C.c)
 *     sub_180015780 @ 0x180015780 (sub_180015780.c)
 *     sub_1800182B0 @ 0x1800182B0 (sub_1800182B0.c)
 *     sub_180025C70 @ 0x180025C70 (sub_180025C70.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_180030D10 @ 0x180030D10 (sub_180030D10.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_18003E024 @ 0x18003E024 (sub_18003E024.c)
 *     sub_18003E0B8 @ 0x18003E0B8 (sub_18003E0B8.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 * Callees:
 *     sub_1800282FC @ 0x1800282FC (sub_1800282FC.c)
 */

__int64 __fastcall sub_1800284DC(__int64 a1, __int64 a2)
{
  sub_1800282FC(a2, a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 28), Thrd_id());
  return a2;
}
