/*
 * XREFs of sub_1800D90C5 @ 0x1800D90C5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D90C5(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
  sub_18001CAFC(&stru_1801B9368, 3);
  return 0LL;
}
