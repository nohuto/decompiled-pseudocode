/*
 * XREFs of sub_180047920 @ 0x180047920
 * Callers:
 *     sub_1800478D8 @ 0x1800478D8 (sub_1800478D8.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 */

__int64 __fastcall sub_180047920(__int64 a1, __int64 a2)
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
