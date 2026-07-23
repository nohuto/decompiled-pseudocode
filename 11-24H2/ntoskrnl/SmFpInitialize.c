/*
 * XREFs of SmFpInitialize @ 0x14049F0BC
 * Callers:
 *     SmPartitionInitialize @ 0x140797794 (SmPartitionInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SmFpInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 12) = 0;
  result = a1 + 16;
  *(_WORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 10) = 6;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
