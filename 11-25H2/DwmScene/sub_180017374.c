/*
 * XREFs of sub_180017374 @ 0x180017374
 * Callers:
 *     ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x1800179F0 (--_Gcritical_section@Concurrency@@QEAAPEAXI@Z.c)
 *     sub_18001D32C @ 0x18001D32C (sub_18001D32C.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

void **__fastcall sub_180017374(_QWORD *a1)
{
  void **result; // rax

  sub_180011A5C((__int64)(a1 + 2));
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
