/*
 * XREFs of MiCanGrantExecute @ 0x1404A3418
 * Callers:
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 */

__int64 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // ecx
  __int64 v8; // rdx

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 784) )
    return 0LL;
  v8 = 332LL;
  if ( *(_WORD *)(a1 + 1772) != 332 )
    return 0LL;
  if ( (KeFeatureBits & 0x40000000) == 0 )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 147);
    if ( (v8 & 2) == 0 && ((KeFeatureBits & 0x80000000) != 0 || (v8 & 1) != 0) )
      return 0LL;
  }
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1532) & 1) == 0 )
    return 1LL;
  MiLockVadTree(1, v8, a3);
  Address = MiLocateAddress(a2);
  MiUnlockVadTree(1, 0x11u);
  if ( !Address )
    return 0LL;
  Flink = (int)Address[3].Flink;
  if ( (Flink & 0x70) == 0x30 )
    return 0LL;
  if ( (Flink & 0x70) == 0x20 )
  {
    LOBYTE(v3) = (Flink & 0xF80) != 128;
    return v3;
  }
  return 1LL;
}
