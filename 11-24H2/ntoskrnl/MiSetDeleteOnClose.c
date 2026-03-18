/*
 * XREFs of MiSetDeleteOnClose @ 0x1404D3B38
 * Callers:
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x14022F72C (MiRemoveUnusedSegment.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSegment @ 0x14037016C (MiInsertUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 */

LONG __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  unsigned __int64 inserted; // rdi
  KIRQL v5; // r14
  int v6; // eax
  LONG result; // eax

  inserted = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x40000) == 0 )
  {
    if ( (v6 & 0x10000000) != 0 )
    {
      MiRemoveUnusedSegment(a1);
      *(_DWORD *)(a1 + 56) |= 0x40000u;
      inserted = MiInsertUnusedSegment(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
  }
  if ( a2 )
    *(_DWORD *)(a1 + 56) |= 0x10u;
  result = MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v5);
  if ( inserted )
    return MiReturnCrossPartitionSectionCharges(
             *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF)),
             1,
             inserted);
  return result;
}
