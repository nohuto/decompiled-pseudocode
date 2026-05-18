/*
 * XREFs of sub_1800B9B9C @ 0x1800B9B9C
 * Callers:
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800CABE8 @ 0x1800CABE8 (sub_1800CABE8.c)
 *     sub_1800CB8C0 @ 0x1800CB8C0 (sub_1800CB8C0.c)
 * Callees:
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B9B9C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_18002894C(a1 + 24, (__int64)a2);
  v4 = *(_QWORD *)(a1 + 3880);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
