/*
 * XREFs of KiInitializeIdealProcessorAssignmentBlock @ 0x1404AAAD0
 * Callers:
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiInitializeIdealProcessorAssignmentBlock(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x1D8uLL);
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 208) = 2097184;
  memset_0((void *)(a1 + 216), 0, 0x100uLL);
  *(_QWORD *)(a1 + 4) = 0LL;
  result = (*(_DWORD *)(a1 + 8) & 0x3FFFF | 0x20040000u) - 1;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
