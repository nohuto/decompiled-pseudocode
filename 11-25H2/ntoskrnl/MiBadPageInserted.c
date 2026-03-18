/*
 * XREFs of MiBadPageInserted @ 0x1404D3E18
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A560);
  }
  ++dword_140E2FF34;
  if ( !byte_140E2FF0A )
    byte_140E2FF0A = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1768);
}
