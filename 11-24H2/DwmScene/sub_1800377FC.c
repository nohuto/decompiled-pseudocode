/*
 * XREFs of sub_1800377FC @ 0x1800377FC
 * Callers:
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_1800377FC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_18001254C((__int64 *)(*(_QWORD *)(a1 + 96) + 9264LL), a2);
  return sub_18001254C((__int64 *)(*(_QWORD *)(a1 + 96) + 9648LL), a3);
}
