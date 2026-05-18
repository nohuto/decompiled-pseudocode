/*
 * XREFs of sub_18007ED28 @ 0x18007ED28
 * Callers:
 *     sub_18007ED78 @ 0x18007ED78 (sub_18007ED78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007ED28(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_WORD *)(a1 + 25) = 0;
  *(_BYTE *)(a1 + 27) = 0;
  *(_WORD *)(a1 + 65) = 0;
  *(_BYTE *)(a1 + 67) = 0;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 4) = 2LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_DWORD *)(a1 + 60) = 65793;
  *(_BYTE *)(a1 + 64) = 1;
  *(_DWORD *)(a1 + 68) = 3;
  return result;
}
