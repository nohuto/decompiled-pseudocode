/*
 * XREFs of sub_18001C148 @ 0x18001C148
 * Callers:
 *     sub_18001C398 @ 0x18001C398 (sub_18001C398.c)
 *     sub_18001C480 @ 0x18001C480 (sub_18001C480.c)
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 *     sub_180024334 @ 0x180024334 (sub_180024334.c)
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 *     sub_18002C288 @ 0x18002C288 (sub_18002C288.c)
 *     sub_18002F328 @ 0x18002F328 (sub_18002F328.c)
 *     sub_180052C10 @ 0x180052C10 (sub_180052C10.c)
 *     sub_18005E6C0 @ 0x18005E6C0 (sub_18005E6C0.c)
 *     sub_1800696D0 @ 0x1800696D0 (sub_1800696D0.c)
 *     sub_1800697B4 @ 0x1800697B4 (sub_1800697B4.c)
 *     sub_18008C7B0 @ 0x18008C7B0 (sub_18008C7B0.c)
 *     sub_18008C824 @ 0x18008C824 (sub_18008C824.c)
 *     sub_18008C8B4 @ 0x18008C8B4 (sub_18008C8B4.c)
 *     sub_1800B84DC @ 0x1800B84DC (sub_1800B84DC.c)
 *     sub_1800CFAF0 @ 0x1800CFAF0 (sub_1800CFAF0.c)
 *     sub_1800D116C @ 0x1800D116C (sub_1800D116C.c)
 *     sub_1800D1734 @ 0x1800D1734 (sub_1800D1734.c)
 * Callees:
 *     <none>
 */

struct _Mtx_internal_imp_t *__fastcall sub_18001C148(struct _Mtx_internal_imp_t *a1)
{
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  Mtx_init_in_situ(a1, 2);
  return a1;
}
