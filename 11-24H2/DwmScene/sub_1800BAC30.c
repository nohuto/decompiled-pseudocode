/*
 * XREFs of sub_1800BAC30 @ 0x1800BAC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BAC30(__int64 a1, __int64 a2)
{
  sub_18002894C(a1 + 24, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_180025980(a1);
}
