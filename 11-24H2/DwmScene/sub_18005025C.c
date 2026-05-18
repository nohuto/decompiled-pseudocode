/*
 * XREFs of sub_18005025C @ 0x18005025C
 * Callers:
 *     sub_180050390 @ 0x180050390 (sub_180050390.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005025C(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  result = 1LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 1LL;
  *(_DWORD *)(a1 + 20) = 1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 2139095039;
  *(_OWORD *)(a1 + 28) = xmmword_1800F8600;
  return result;
}
