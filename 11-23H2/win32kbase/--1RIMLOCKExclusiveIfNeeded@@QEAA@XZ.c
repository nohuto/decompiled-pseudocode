/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0070F20 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C007267C (RawInputManagerObjectDelete.c)
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     RIMEndAllActiveContacts @ 0x1C0177690 (RIMEndAllActiveContacts.c)
 *     RIMVirtCreateHidDesc @ 0x1C01841C0 (RIMVirtCreateHidDesc.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B484 (RIMRemoveFromActiveDevices.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0190500 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C01905F0 (RIMTransformDimensionFromDigitizer.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C01913D4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C01917D0 (RIMFreeHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C019395C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C01AF2E0 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}
