/*
 * XREFs of PopBatteryInit @ 0x140C31AC0
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline @ 0x1405D7CFC (Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140F0AE68 = (__int64)&qword_140F0AE60;
  qword_140F0AE60 = (__int64)&qword_140F0AE60;
  qword_140F0AE48 = 0LL;
  *(_OWORD *)&xmmword_140F0B050 = 0LL;
  qword_140F0AE78 = (__int64)&qword_140F0AE70;
  xmmword_140F0B060 = 0LL;
  qword_140F0AE70 = (__int64)&qword_140F0AE70;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140F0B050 = 0LL;
  qword_140F08228 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140F0B070 = 0LL;
  qword_140F0B034 = 0LL;
  byte_140F0B020 = 0;
  LOBYTE(xmmword_140F0B060) = 1;
  qword_140F0B040 = 0LL;
  dword_140F0B030 = 0;
  dword_140F0B024 = -1;
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)&xmmword_140F0B080 = -1LL;
    qword_140F0B0E8 = (__int64)&qword_140F0B0E0;
    qword_140F0B0E0 = (__int64)&qword_140F0B0E0;
    *((_QWORD *)&xmmword_140F0B080 + 1) = -1LL;
    *(_QWORD *)&xmmword_140F0B090 = -1LL;
    DWORD2(xmmword_140F0B090) = -1;
  }
  Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline();
  PopWeakChargerCompositeState = 0;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140F0AFA0;
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
  *(_QWORD *)&stru_140F0AEE0.Header.Lock = 8LL;
  stru_140F0AF60.Header.WaitListHead.Blink = &stru_140F0AF60.Header.WaitListHead;
  stru_140F0AF60.Header.WaitListHead.Flink = &stru_140F0AF60.Header.WaitListHead;
  qword_140F0AF38 = (__int64)PopBatteryWakeDpc;
  stru_140F0AEE0.Header.WaitListHead.Blink = &stru_140F0AEE0.Header.WaitListHead;
  stru_140F0AEE0.Header.WaitListHead.Flink = &stru_140F0AEE0.Header.WaitListHead;
  stru_140F0AF78.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  stru_140F0AF60.Header.SignalState = 0;
  qword_140F0B048 = 0LL;
  qword_140F0AF40 = 0LL;
  qword_140F0AF58 = 0LL;
  qword_140F0AF30 = 0LL;
  stru_140F0AEE0.DueTime.QuadPart = 0LL;
  stru_140F0AEE0.Period = 0;
  stru_140F0AEE0.Processor = 0;
  stru_140F0AF78.Parameter = 0LL;
  stru_140F0AF78.List.Flink = 0LL;
  byte_140F0AE58 = 0;
  dword_140F0AED0 = 0;
  LOWORD(stru_140F0AF60.Header.Lock) = 1;
  stru_140F0AF60.Header.Size = 6;
  dword_140F0AF20 = 275;
  *(_QWORD *)&stru_140F082C0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140F08298 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140F082C0.Header.WaitListHead;
  qword_140F082A0 = 0LL;
  qword_140F082B8 = 0LL;
  qword_140F08290 = 0LL;
  stru_140F082C0.DueTime.QuadPart = 0LL;
  stru_140F082C0.Period = 0;
  stru_140F082C0.Processor = 0;
  stru_140F082C0.Header.WaitListHead.Blink = &stru_140F082C0.Header.WaitListHead;
  stru_140F082C0.Header.WaitListHead.Flink = &stru_140F082C0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  byte_140F0AF98 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
