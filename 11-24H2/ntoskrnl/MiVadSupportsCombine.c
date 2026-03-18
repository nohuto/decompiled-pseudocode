/*
 * XREFs of MiVadSupportsCombine @ 0x1402FBB08
 * Callers:
 *     MiCrcStillIntact @ 0x1402FA610 (MiCrcStillIntact.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiVadSupportsPrivateCommit @ 0x1402FBA00 (MiVadSupportsPrivateCommit.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 */

__int64 __fastcall MiVadSupportsCombine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Address; // rbx

  MiLockVadTree(1, a2, a3);
  Address = MiLocateAddress(a2);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( !Address || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16 )
    return 0LL;
  else
    return Address & -(__int64)((unsigned int)MiVadSupportsPrivateCommit(Address) != 0);
}
