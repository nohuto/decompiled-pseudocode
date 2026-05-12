/*
 * XREFs of BuildNvmeDeallocateCommand @ 0x140119254
 * Callers:
 *     NvmeNamespaceDsmDeallocate @ 0x1400FE7D0 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeNamespaceDsmDeallocate2 @ 0x1400FECF0 (NvmeNamespaceDsmDeallocate2.c)
 *     ScsiUnmapRequest @ 0x1401171E4 (ScsiUnmapRequest.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x140118CB8 (NvmeNamespaceScsiUnmapRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildNvmeDeallocateCommand(int a1, char a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  *(_DWORD *)(a3 + 44) |= 4u;
  *(_BYTE *)a3 = 9;
  *(_DWORD *)(a3 + 4) = a1;
  *(_BYTE *)(a3 + 40) = a2 - 1;
  if ( a4 )
  {
    result = *a4;
    *(_QWORD *)(a3 + 24) = *a4;
  }
  return result;
}
