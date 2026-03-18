/*
 * XREFs of MiBadPageInserted @ 0x1404D3BF0
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A7A0);
  }
  ++dword_140E3017C;
  if ( !byte_140E30152 )
    byte_140E30152 = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1768);
}
