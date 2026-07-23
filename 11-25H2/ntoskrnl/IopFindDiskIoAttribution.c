/*
 * XREFs of IopFindDiskIoAttribution @ 0x14034E730
 * Callers:
 *     IoGetIoRateControl @ 0x14034E4B0 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x14034E690 (IoRecordIoAttribution.c)
 *     IoNotifyQuotaState @ 0x140496E90 (IoNotifyQuotaState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  KIRQL v3; // al
  unsigned __int64 Root; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v5 = v3;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 && IopDiskIoAttributionTree.Root )
    Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
  while ( Root )
  {
    if ( a1 < *(_QWORD *)(Root + 24) )
    {
      v6 = *(_QWORD *)Root;
    }
    else
    {
      if ( a1 <= *(_QWORD *)(Root + 24) )
        break;
      v6 = *(_QWORD *)(Root + 8);
    }
    if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( Root )
  {
    v2 = Root;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Root + 32)) <= 1 )
      __fastfail(0xEu);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(v5);
  return v2;
}
