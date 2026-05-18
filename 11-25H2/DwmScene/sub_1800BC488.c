/*
 * XREFs of sub_1800BC488 @ 0x1800BC488
 * Callers:
 *     sub_1800BC268 @ 0x1800BC268 (sub_1800BC268.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800BC488(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  return result;
}
