/*
 * XREFs of MiVadSupportsCombine @ 0x140239CF4
 * Callers:
 *     MiCrcStillIntact @ 0x140239824 (MiCrcStillIntact.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x140239D80 (MiVadSupportsPrivateCommit.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 */

__int64 __fastcall MiVadSupportsCombine(__int64 a1, __int64 a2)
{
  __int64 Address; // rbx

  MiLockVadTree(1LL);
  Address = MiLocateAddress(a2);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( !Address || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16 )
    return 0LL;
  else
    return Address & -(__int64)((unsigned int)MiVadSupportsPrivateCommit(Address) != 0);
}
