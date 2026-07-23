/*
 * XREFs of RtlAllocateMemoryZone @ 0x180172140
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x1800E4C70 (RtlCreateMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180172010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAllocateMemoryZone(PVOID MemoryZone, SIZE_T BlockSize, PVOID *Block)
{
  SIZE_T v4; // r9
  __int64 *v5; // rdx
  unsigned __int64 v6; // r9
  void *v7; // r8

  *Block = 0LL;
  if ( !BlockSize )
    return -1073741811;
  v4 = BlockSize + 7;
  v5 = (__int64 *)*((_QWORD *)MemoryZone + 6);
  v6 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v5 )
  {
    while ( 1 )
    {
      v7 = (void *)v5[2];
      if ( v6 > v5[3] - (__int64)v7 )
        break;
      if ( v7 == (void *)_InterlockedCompareExchange64(v5 + 2, (signed __int64)v7 + v6, (signed __int64)v7) )
      {
        *Block = v7;
        return 0;
      }
    }
    v5 = (__int64 *)*v5;
  }
  return -1073741670;
}
