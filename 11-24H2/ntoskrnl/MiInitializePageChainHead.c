/*
 * XREFs of MiInitializePageChainHead @ 0x140411530
 * Callers:
 *     MiCaptureSparsePages @ 0x1407FAE6C (MiCaptureSparsePages.c)
 *     MiAllocateReadList @ 0x140939930 (MiAllocateReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageChainHead(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
