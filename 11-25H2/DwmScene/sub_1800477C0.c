/*
 * XREFs of sub_1800477C0 @ 0x1800477C0
 * Callers:
 *     sub_180047778 @ 0x180047778 (sub_180047778.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 */

__int64 __fastcall sub_1800477C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset((void *)a2, 0, 0x58uLL);
  result = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  return result;
}
