/*
 * XREFs of sub_18006D60C @ 0x18006D60C
 * Callers:
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 */

__int64 __fastcall sub_18006D60C(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  memset((void *)(a1 + 12), 0, 0x54uLL);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 8) = -1082130432;
  *(_DWORD *)(a1 + 12) = -1082130432;
  *(_DWORD *)(a1 + 16) = 2;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 28) = -1082130432;
  *(_DWORD *)(a1 + 32) = -1082130432;
  *(_DWORD *)(a1 + 36) = 2;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 56) = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 56), 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return result;
}
