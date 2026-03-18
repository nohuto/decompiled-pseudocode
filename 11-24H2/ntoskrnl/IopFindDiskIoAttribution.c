/*
 * XREFs of IopFindDiskIoAttribution @ 0x140244E70
 * Callers:
 *     IoGetIoRateControl @ 0x140244BF0 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x140244DD0 (IoRecordIoAttribution.c)
 *     IoNotifyQuotaState @ 0x140496A30 (IoNotifyQuotaState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopFindDiskIoAttribution(unsigned __int64 a1)
{
  __int64 v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v4 = IopDiskIoAttributionTree;
  v5 = v3;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 && (_QWORD)IopDiskIoAttributionTree )
    v4 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
  while ( v4 )
  {
    if ( a1 < *(_QWORD *)(v4 + 24) )
    {
      v6 = *(_QWORD *)v4;
    }
    else
    {
      if ( a1 <= *(_QWORD *)(v4 + 24) )
        break;
      v6 = *(_QWORD *)(v4 + 8);
    }
    if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 && v6 )
      v4 ^= v6;
    else
      v4 = v6;
  }
  if ( v4 )
  {
    v2 = v4;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 32)) <= 1 )
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
