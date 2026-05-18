/*
 * XREFs of sub_18003769C @ 0x18003769C
 * Callers:
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_18003769C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_18001244C((__int64 *)(*(_QWORD *)(a1 + 96) + 9264LL), a2);
  return sub_18001244C((__int64 *)(*(_QWORD *)(a1 + 96) + 9648LL), a3);
}
