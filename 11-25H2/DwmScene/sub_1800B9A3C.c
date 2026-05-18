/*
 * XREFs of sub_1800B9A3C @ 0x1800B9A3C
 * Callers:
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800CAA88 @ 0x1800CAA88 (sub_1800CAA88.c)
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 * Callees:
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B9A3C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_1800287EC(a1 + 24, (__int64)a2);
  v4 = *(_QWORD *)(a1 + 3880);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
