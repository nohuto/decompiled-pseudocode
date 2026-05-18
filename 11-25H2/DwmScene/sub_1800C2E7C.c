/*
 * XREFs of sub_1800C2E7C @ 0x1800C2E7C
 * Callers:
 *     sub_1800C4410 @ 0x1800C4410 (sub_1800C4410.c)
 *     sub_1800C52F0 @ 0x1800C52F0 (sub_1800C52F0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800C2E7C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 120);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
