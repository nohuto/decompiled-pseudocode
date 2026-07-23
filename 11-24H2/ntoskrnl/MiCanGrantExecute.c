/*
 * XREFs of MiCanGrantExecute @ 0x14049E378
 * Callers:
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 */

__int64 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // ecx
  __int64 v9; // rdx

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 784) )
    return 0LL;
  v9 = 332LL;
  if ( *(_WORD *)(a1 + 1772) != 332 )
    return 0LL;
  if ( (KeFeatureBits & 0x40000000) == 0 )
  {
    LOBYTE(v9) = *(_BYTE *)(a1 + 147);
    if ( (v9 & 2) == 0 && ((KeFeatureBits & 0x80000000) != 0 || (v9 & 1) != 0) )
      return 0LL;
  }
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1532) & 1) == 0 )
    return 1LL;
  MiLockVadTree(1, v9, a3, a4);
  Address = MiLocateAddress(a2);
  MiUnlockVadTree(1, 0x11u);
  if ( !Address )
    return 0LL;
  Flink = (int)Address[3].Flink;
  if ( (Flink & 0x70) == 0x30 )
    return 0LL;
  if ( (Flink & 0x70) == 0x20 )
  {
    LOBYTE(v4) = (Flink & 0xF80) != 128;
    return v4;
  }
  return 1LL;
}
