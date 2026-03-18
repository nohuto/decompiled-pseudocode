/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1400C7A70 (RIMEndAllActiveContacts.c)
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMDeviceIoControl @ 0x14017AF70 (RIMDeviceIoControl.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E0EE0 (RIMRemoveFromActiveDevices.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1401E1DE0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1401E1ED0 (RIMTransformDimensionFromDigitizer.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E3074 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1401E32C0 (RIMFreeHidTLCInfo.c)
 *     RawInputManagerObjectDelete @ 0x1401E35C8 (RawInputManagerObjectDelete.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     <none>
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct RIMLOCK *a2)
{
  *(_QWORD *)this = 0LL;
  if ( *((struct _KTHREAD **)a2 + 1) != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    *((_QWORD *)a2 + 1) = KeGetCurrentThread();
  }
  return this;
}
