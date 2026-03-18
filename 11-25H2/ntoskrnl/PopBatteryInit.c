/*
 * XREFs of PopBatteryInit @ 0x140C209C0
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline @ 0x1405D3138 (Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140F0AAC8 = (__int64)&qword_140F0AAC0;
  qword_140F0AAC0 = (__int64)&qword_140F0AAC0;
  qword_140F0AAA8 = 0LL;
  xmmword_140F0ACB0 = 0LL;
  qword_140F0AAD8 = (__int64)&qword_140F0AAD0;
  xmmword_140F0ACC0 = 0LL;
  qword_140F0AAD0 = (__int64)&qword_140F0AAD0;
  *(_QWORD *)&PopCB = 0LL;
  *(_QWORD *)&xmmword_140F0ACB0 = 0LL;
  qword_140F07B78 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140F0ACD0 = 0LL;
  qword_140F0AC94 = 0LL;
  byte_140F0AC80 = 0;
  LOBYTE(xmmword_140F0ACC0) = 1;
  qword_140F0ACA0 = 0LL;
  dword_140F0AC90 = 0;
  dword_140F0AC84 = -1;
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)&xmmword_140F0ACE0 = -1LL;
    qword_140F0AD48 = (__int64)&qword_140F0AD40;
    qword_140F0AD40 = (__int64)&qword_140F0AD40;
    *((_QWORD *)&xmmword_140F0ACE0 + 1) = -1LL;
    *(_QWORD *)&xmmword_140F0ACF0 = -1LL;
    DWORD2(xmmword_140F0ACF0) = -1;
  }
  Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline();
  PopWeakChargerCompositeState = 0;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140F0AC00;
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
  *(_QWORD *)&stru_140F0AB40.Header.Lock = 8LL;
  stru_140F0ABC0.Header.WaitListHead.Blink = &stru_140F0ABC0.Header.WaitListHead;
  stru_140F0ABC0.Header.WaitListHead.Flink = &stru_140F0ABC0.Header.WaitListHead;
  qword_140F0AB98 = (__int64)PopBatteryWakeDpc;
  stru_140F0AB40.Header.WaitListHead.Blink = &stru_140F0AB40.Header.WaitListHead;
  stru_140F0AB40.Header.WaitListHead.Flink = &stru_140F0AB40.Header.WaitListHead;
  stru_140F0ABD8.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  stru_140F0ABC0.Header.SignalState = 0;
  qword_140F0ACA8 = 0LL;
  qword_140F0ABA0 = 0LL;
  qword_140F0ABB8 = 0LL;
  qword_140F0AB90 = 0LL;
  stru_140F0AB40.DueTime.QuadPart = 0LL;
  stru_140F0AB40.Period = 0;
  stru_140F0AB40.Processor = 0;
  stru_140F0ABD8.Parameter = 0LL;
  stru_140F0ABD8.List.Flink = 0LL;
  byte_140F0AAB8 = 0;
  dword_140F0AB30 = 0;
  LOWORD(stru_140F0ABC0.Header.Lock) = 1;
  stru_140F0ABC0.Header.Size = 6;
  dword_140F0AB80 = 275;
  *(_QWORD *)&stru_140F07BC0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140F07B98 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140F07BC0.Header.WaitListHead;
  qword_140F07BA0 = 0LL;
  qword_140F07BB8 = 0LL;
  qword_140F07B90 = 0LL;
  stru_140F07BC0.DueTime.QuadPart = 0LL;
  stru_140F07BC0.Period = 0;
  stru_140F07BC0.Processor = 0;
  stru_140F07BC0.Header.WaitListHead.Blink = &stru_140F07BC0.Header.WaitListHead;
  stru_140F07BC0.Header.WaitListHead.Flink = &stru_140F07BC0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  byte_140F0ABF8 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
