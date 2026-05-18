/*
 * XREFs of sub_18003717C @ 0x18003717C
 * Callers:
 *     sub_18006CB88 @ 0x18006CB88 (sub_18006CB88.c)
 *     sub_1800C9530 @ 0x1800C9530 (sub_1800C9530.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18003717C(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
