/*
 * XREFs of MiCanGrantExecute @ 0x1404A3608
 * Callers:
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 */

__int64 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // ecx
  __int64 v7; // rdx

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 784) )
    return 0LL;
  v7 = 332LL;
  if ( *(_WORD *)(a1 + 1772) != 332 )
    return 0LL;
  if ( (KeFeatureBits & 0x40000000) == 0 )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 147);
    if ( (v7 & 2) == 0 && ((KeFeatureBits & 0x80000000) != 0 || (v7 & 1) != 0) )
      return 0LL;
  }
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1532) & 1) == 0 )
    return 1LL;
  MiLockVadTree(1, v7);
  Address = MiLocateAddress(a2);
  MiUnlockVadTree(1, 0x11u);
  if ( !Address )
    return 0LL;
  Flink = (int)Address[3].Flink;
  if ( (Flink & 0x70) == 0x30 )
    return 0LL;
  if ( (Flink & 0x70) == 0x20 )
  {
    LOBYTE(v2) = (Flink & 0xF80) != 128;
    return v2;
  }
  return 1LL;
}
