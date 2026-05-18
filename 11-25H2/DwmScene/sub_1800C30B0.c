/*
 * XREFs of sub_1800C30B0 @ 0x1800C30B0
 * Callers:
 *     sub_1800C27A0 @ 0x1800C27A0 (sub_1800C27A0.c)
 *     sub_1800C3FF0 @ 0x1800C3FF0 (sub_1800C3FF0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C30B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 112);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
