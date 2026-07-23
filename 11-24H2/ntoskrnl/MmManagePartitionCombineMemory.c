/*
 * XREFs of MmManagePartitionCombineMemory @ 0x1407FD3D4
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 */

__int64 __fastcall MmManagePartitionCombineMemory(ULONG **a1, __int64 a2, __int64 a3, char a4)
{
  ULONG *v5; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = *a1;
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 && v5 != &MiSystemPartition )
    return 3221225711LL;
  result = MiCombineIdenticalPages(v5, *(_QWORD *)a3, *(unsigned int *)(a3 + 8), 0LL, a4, &v8);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a2 + 16) = v8;
    return 0LL;
  }
  return result;
}
