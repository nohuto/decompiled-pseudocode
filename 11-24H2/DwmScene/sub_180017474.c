/*
 * XREFs of sub_180017474 @ 0x180017474
 * Callers:
 *     ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x180017AB0 (--_Gcritical_section@Concurrency@@QEAAPEAXI@Z.c)
 *     sub_18001D48C @ 0x18001D48C (sub_18001D48C.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

void **__fastcall sub_180017474(_QWORD *a1)
{
  void **result; // rax

  sub_180011B5C((__int64)(a1 + 2));
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
