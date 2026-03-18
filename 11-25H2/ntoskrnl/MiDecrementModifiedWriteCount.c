/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x14035A754
 * Callers:
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14033FC28 (MiEntireSubsectionIsPurged.c)
 *     MiTrimSharedPage @ 0x14035A2DC (MiTrimSharedPage.c)
 *     MiFlushComplete @ 0x14035A670 (MiFlushComplete.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiPrepareToFlushSubsection @ 0x140439A60 (MiPrepareToFlushSubsection.c)
 *     MiReleasePageFileSectionInfo @ 0x1404A0974 (MiReleasePageFileSectionInfo.c)
 *     MiLocateSharedPageViews @ 0x14066D834 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x1406701CC (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 *__fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  KIRQL v3; // bl
  _QWORD *v4; // r8
  __int64 *v5; // rcx
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 *v9; // rdx

  if ( a2 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_DWORD *)(a1 + 76);
  v4 = (_QWORD *)(a1 + 80);
  v5 = *(__int64 **)(a1 + 80);
  v6 = 0LL;
  if ( v5 )
  {
    do
    {
      v9 = (__int64 *)*v5;
      if ( (v5[1] & 8) != 0 )
      {
        *v5 = (__int64)v6;
        v6 = v5;
        *v4 = v9;
      }
      else
      {
        v4 = v5;
      }
      v5 = v9;
    }
    while ( v9 );
  }
  if ( v3 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v3;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(v3);
  }
  return v6;
}
