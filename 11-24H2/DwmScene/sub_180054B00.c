/*
 * XREFs of sub_180054B00 @ 0x180054B00
 * Callers:
 *     sub_180054A5C @ 0x180054A5C (sub_180054A5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054B00(__int64 a1, __int64 a2)
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
