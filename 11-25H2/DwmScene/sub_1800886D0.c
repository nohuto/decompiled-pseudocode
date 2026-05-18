/*
 * XREFs of sub_1800886D0 @ 0x1800886D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800886D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(a1 + 1800) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 1808) = result;
  return result;
}
