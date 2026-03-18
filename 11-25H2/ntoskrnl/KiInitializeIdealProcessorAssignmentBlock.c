/*
 * XREFs of KiInitializeIdealProcessorAssignmentBlock @ 0x1404B43F8
 * Callers:
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
