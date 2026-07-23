/*
 * XREFs of PopBatteryInit @ 0x140C33BE0
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline @ 0x1405D5270 (Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140F0BCA8 = (__int64)&qword_140F0BCA0;
  qword_140F0BCA0 = (__int64)&qword_140F0BCA0;
  qword_140F0BC88 = 0LL;
  xmmword_140F0BE90 = 0LL;
  qword_140F0BCB8 = (__int64)&qword_140F0BCB0;
  xmmword_140F0BEA0 = 0LL;
  qword_140F0BCB0 = (__int64)&qword_140F0BCB0;
  *(_QWORD *)&PopCB = 0LL;
  *(_QWORD *)&xmmword_140F0BE90 = 0LL;
  qword_140F084F8 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140F0BEB0 = 0LL;
  qword_140F0BE74 = 0LL;
  byte_140F0BE60 = 0;
  LOBYTE(xmmword_140F0BEA0) = 1;
  qword_140F0BE80 = 0LL;
  dword_140F0BE70 = 0;
  dword_140F0BE64 = -1;
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)&xmmword_140F0BEC0 = -1LL;
    qword_140F0BF28 = (__int64)&qword_140F0BF20;
    qword_140F0BF20 = (__int64)&qword_140F0BF20;
    *((_QWORD *)&xmmword_140F0BEC0 + 1) = -1LL;
    *(_QWORD *)&xmmword_140F0BED0 = -1LL;
    DWORD2(xmmword_140F0BED0) = -1;
  }
  Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline();
  PopWeakChargerCompositeState = 0;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140F0BDE0;
  PopWeakChargerNotificationBatteryMiniport = -1;
  PopWeakChargerNotificationUsbStack = -1;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 8;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140F0BD20.Header.Lock = 8LL;
  stru_140F0BDA0.Header.WaitListHead.Blink = &stru_140F0BDA0.Header.WaitListHead;
  stru_140F0BDA0.Header.WaitListHead.Flink = &stru_140F0BDA0.Header.WaitListHead;
  qword_140F0BD78 = (__int64)PopBatteryWakeDpc;
  stru_140F0BD20.Header.WaitListHead.Blink = &stru_140F0BD20.Header.WaitListHead;
  stru_140F0BD20.Header.WaitListHead.Flink = &stru_140F0BD20.Header.WaitListHead;
  stru_140F0BDB8.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  stru_140F0BDA0.Header.SignalState = 0;
  qword_140F0BE88 = 0LL;
  qword_140F0BD80 = 0LL;
  qword_140F0BD98 = 0LL;
  qword_140F0BD70 = 0LL;
  stru_140F0BD20.DueTime.QuadPart = 0LL;
  stru_140F0BD20.Period = 0;
  stru_140F0BD20.Processor = 0;
  stru_140F0BDB8.Parameter = 0LL;
  stru_140F0BDB8.List.Flink = 0LL;
  byte_140F0BC98 = 0;
  dword_140F0BD10 = 0;
  LOWORD(stru_140F0BDA0.Header.Lock) = 1;
  stru_140F0BDA0.Header.Size = 6;
  dword_140F0BD60 = 275;
  *(_QWORD *)&stru_140F085A0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140F08578 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140F085A0.Header.WaitListHead;
  qword_140F08580 = 0LL;
  qword_140F08598 = 0LL;
  qword_140F08570 = 0LL;
  stru_140F085A0.DueTime.QuadPart = 0LL;
  stru_140F085A0.Period = 0;
  stru_140F085A0.Processor = 0;
  stru_140F085A0.Header.WaitListHead.Blink = &stru_140F085A0.Header.WaitListHead;
  stru_140F085A0.Header.WaitListHead.Flink = &stru_140F085A0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  byte_140F0BDD8 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
