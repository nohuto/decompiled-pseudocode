/*
 * XREFs of sub_18002863C @ 0x18002863C
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_180015880 @ 0x180015880 (sub_180015880.c)
 *     sub_180018370 @ 0x180018370 (sub_180018370.c)
 *     sub_180025DD0 @ 0x180025DD0 (sub_180025DD0.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_180030E70 @ 0x180030E70 (sub_180030E70.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_18003E184 @ 0x18003E184 (sub_18003E184.c)
 *     sub_18003E218 @ 0x18003E218 (sub_18003E218.c)
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 * Callees:
 *     sub_18002845C @ 0x18002845C (sub_18002845C.c)
 */

__int64 __fastcall sub_18002863C(__int64 a1, __int64 a2)
{
  sub_18002845C(a2, a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 28), Thrd_id());
  return a2;
}
