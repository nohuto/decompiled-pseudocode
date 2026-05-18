/*
 * XREFs of sub_1800373E4 @ 0x1800373E4
 * Callers:
 *     sub_180011600 @ 0x180011600 (sub_180011600.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 *     sub_1800BB1A0 @ 0x1800BB1A0 (sub_1800BB1A0.c)
 *     sub_1800BB270 @ 0x1800BB270 (sub_1800BB270.c)
 *     sub_1800C3244 @ 0x1800C3244 (sub_1800C3244.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800373E4(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[29])(a1, 0LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}
