/*
 * XREFs of sub_1800549A0 @ 0x1800549A0
 * Callers:
 *     sub_1800548FC @ 0x1800548FC (sub_1800548FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800549A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a2 + 1) = 0;
  *(_WORD *)(a2 + 5) = 0;
  *(_BYTE *)(a2 + 7) = 0;
  *(_BYTE *)a2 = 1;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return result;
}
