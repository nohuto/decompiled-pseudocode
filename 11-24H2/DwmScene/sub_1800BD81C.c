/*
 * XREFs of sub_1800BD81C @ 0x1800BD81C
 * Callers:
 *     sub_1800BD0B0 @ 0x1800BD0B0 (sub_1800BD0B0.c)
 *     sub_1800BE3F0 @ 0x1800BE3F0 (sub_1800BE3F0.c)
 *     sub_1800BE7A0 @ 0x1800BE7A0 (sub_1800BE7A0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BD81C(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // al

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  return sub_1800BD870(v2, v3 != 0);
}
