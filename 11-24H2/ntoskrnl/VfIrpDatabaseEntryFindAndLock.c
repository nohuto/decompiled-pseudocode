/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x140BA9084
 * Callers:
 *     IovCancelIrp @ 0x140B846F0 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140B8F534 (IovpCheckIrpForCriticalTracking.c)
 *     VfIrpWatermark @ 0x140B90080 (VfIrpWatermark.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140BA5F10 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIoInitializeIrp @ 0x140BA86E4 (VfIoInitializeIrp.c)
 *     VfPacketFindAndLock @ 0x140BA8750 (VfPacketFindAndLock.c)
 *     IovpCompleteRequest1 @ 0x140BA89E8 (IovpCompleteRequest1.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA9000 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140613CAC (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140613CF0 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140B841E4 (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x140BA6150 (ViIrpDatabaseFindPointer.c)
 */

volatile signed __int32 *__fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *Pointer; // rax
  KIRQL v5; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  if ( VfIrpDatabaseInitialized
    && (unsigned int)VfUtilAddressRangeFitNoLock(
                       (unsigned __int64 *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
                       a1,
                       a1 + 208) )
  {
    ViIrpDatabaseAcquireLockShared(&v6);
    Pointer = (volatile signed __int32 *)ViIrpDatabaseFindPointer(a1);
    v1 = Pointer;
    if ( Pointer )
    {
      _InterlockedIncrement(Pointer + 5);
      v5 = v6;
      ViIrpDatabaseReleaseLockShared(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 1);
      *((_BYTE *)v1 + 16) = v5;
      _InterlockedDecrement(v1 + 5);
      if ( !*((_DWORD *)v1 + 6) )
      {
        VfIrpDatabaseEntryReleaseLock(v1);
        return 0LL;
      }
    }
    else
    {
      ViIrpDatabaseReleaseLockShared(v6);
    }
  }
  return v1;
}
