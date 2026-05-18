/*
 * XREFs of sub_180037284 @ 0x180037284
 * Callers:
 *     sub_180011500 @ 0x180011500 (sub_180011500.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 *     sub_1800BB040 @ 0x1800BB040 (sub_1800BB040.c)
 *     sub_1800BB110 @ 0x1800BB110 (sub_1800BB110.c)
 *     sub_1800C30E4 @ 0x1800C30E4 (sub_1800C30E4.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180037284(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[29])(a1, 0LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}
