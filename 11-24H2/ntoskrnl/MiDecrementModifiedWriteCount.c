/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140259314
 * Callers:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x1402043F4 (MiEntireSubsectionIsPurged.c)
 *     MiFlushComplete @ 0x140259230 (MiFlushComplete.c)
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiPrepareToFlushSubsection @ 0x14043F1F4 (MiPrepareToFlushSubsection.c)
 *     MiReleasePageFileSectionInfo @ 0x14049A6D8 (MiReleasePageFileSectionInfo.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
