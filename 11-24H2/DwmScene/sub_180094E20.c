/*
 * XREFs of sub_180094E20 @ 0x180094E20
 * Callers:
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 * Callees:
 *     sub_180094E14 @ 0x180094E14 (sub_180094E14.c)
 */

__int64 __fastcall sub_180094E20(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_180094E14(*(_DWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 4;
  return result;
}
