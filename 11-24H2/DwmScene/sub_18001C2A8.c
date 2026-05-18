/*
 * XREFs of sub_18001C2A8 @ 0x18001C2A8
 * Callers:
 *     sub_18001C4F8 @ 0x18001C4F8 (sub_18001C4F8.c)
 *     sub_18001C5E0 @ 0x18001C5E0 (sub_18001C5E0.c)
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 *     sub_180024494 @ 0x180024494 (sub_180024494.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 *     sub_18002C3E8 @ 0x18002C3E8 (sub_18002C3E8.c)
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 *     sub_180052D70 @ 0x180052D70 (sub_180052D70.c)
 *     sub_18005E820 @ 0x18005E820 (sub_18005E820.c)
 *     sub_180069830 @ 0x180069830 (sub_180069830.c)
 *     sub_180069914 @ 0x180069914 (sub_180069914.c)
 *     sub_18008C910 @ 0x18008C910 (sub_18008C910.c)
 *     sub_18008C984 @ 0x18008C984 (sub_18008C984.c)
 *     sub_18008CA14 @ 0x18008CA14 (sub_18008CA14.c)
 *     sub_1800B863C @ 0x1800B863C (sub_1800B863C.c)
 *     sub_1800CFC50 @ 0x1800CFC50 (sub_1800CFC50.c)
 *     sub_1800D12CC @ 0x1800D12CC (sub_1800D12CC.c)
 *     sub_1800D1894 @ 0x1800D1894 (sub_1800D1894.c)
 * Callees:
 *     <none>
 */

struct _Mtx_internal_imp_t *__fastcall sub_18001C2A8(struct _Mtx_internal_imp_t *a1)
{
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  Mtx_init_in_situ(a1, 2);
  return a1;
}
