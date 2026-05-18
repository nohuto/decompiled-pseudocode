/*
 * XREFs of sub_1800372DC @ 0x1800372DC
 * Callers:
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_1800C9690 @ 0x1800C9690 (sub_1800C9690.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800372DC(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
