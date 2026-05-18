/*
 * XREFs of sub_1800D8F65 @ 0x1800D8F65
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D8F65(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
  sub_18001C99C(&stru_1801B8368, 3);
  return 0LL;
}
