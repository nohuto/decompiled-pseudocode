/*
 * XREFs of sub_1800C3210 @ 0x1800C3210
 * Callers:
 *     sub_1800C2900 @ 0x1800C2900 (sub_1800C2900.c)
 *     sub_1800C4150 @ 0x1800C4150 (sub_1800C4150.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C3210(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 112);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
