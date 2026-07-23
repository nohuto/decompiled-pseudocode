/*
 * XREFs of MiBadPageInserted @ 0x1404CCDF4
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiBadPageInserted(int a1)
{
  ULONG *v1; // rbx

  if ( a1 )
  {
    v1 = 0LL;
  }
  else
  {
    v1 = &MiSystemPartition;
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A8E0);
  }
  ++dword_140E302BC;
  if ( !byte_140E30292 )
    byte_140E30292 = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1768);
}
