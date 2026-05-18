/*
 * XREFs of sub_1800C226C @ 0x1800C226C
 * Callers:
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C226C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 176);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
