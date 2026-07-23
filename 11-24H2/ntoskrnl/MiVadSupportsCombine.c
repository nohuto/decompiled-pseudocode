/*
 * XREFs of MiVadSupportsCombine @ 0x140344CB0
 * Callers:
 *     MiCrcStillIntact @ 0x140345608 (MiCrcStillIntact.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 */

__int64 __fastcall MiVadSupportsCombine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Address; // rbx

  MiLockVadTree(1, a2, a3, a4);
  Address = MiLocateAddress(a2);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( !Address || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16 )
    return 0LL;
  else
    return Address & -(__int64)((unsigned int)MiVadSupportsPrivateCommit(Address) != 0);
}
