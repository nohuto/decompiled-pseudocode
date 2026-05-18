/*
 * XREFs of sub_1800C3010 @ 0x1800C3010
 * Callers:
 *     sub_1800C3B60 @ 0x1800C3B60 (sub_1800C3B60.c)
 *     sub_1800C5330 @ 0x1800C5330 (sub_1800C5330.c)
 *     sub_1800C5D40 @ 0x1800C5D40 (sub_1800C5D40.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C3010(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
