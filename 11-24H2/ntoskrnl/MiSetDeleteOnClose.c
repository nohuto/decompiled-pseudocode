/*
 * XREFs of MiSetDeleteOnClose @ 0x1404CCD3C
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x140432A98 (MiInsertUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
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
             *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF)),
             1,
             inserted);
  return result;
}
