/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140370FD4
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14023C6CC (MiEntireSubsectionIsPurged.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiPrepareToFlushSubsection @ 0x14036F8DC (MiPrepareToFlushSubsection.c)
 *     MiReleasePageFileSectionInfo @ 0x14037012C (MiReleasePageFileSectionInfo.c)
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiFlushComplete @ 0x140370EF0 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
