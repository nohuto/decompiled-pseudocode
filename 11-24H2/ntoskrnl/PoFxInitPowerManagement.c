/*
 * XREFs of PoFxInitPowerManagement @ 0x140C2E41C
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage @ 0x1405CD900 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopFxInitializeWorkPool @ 0x14074E060 (PopFxInitializeWorkPool.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 result; // rax

  Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage();
  stru_140F0D9C0.Header.Size = 6;
  *(_QWORD *)&PopFxResidentTimer.Header.Lock = 9LL;
  qword_140F0D758 = (__int64)&PopFxDeviceList;
  PopFxDeviceList = (ULONG_PTR)&PopFxDeviceList;
  qword_140F0D738 = (__int64)&PopFxAcpiDeviceList;
  PopFxAcpiDeviceList = (__int64)&PopFxAcpiDeviceList;
  qword_140F0D988 = (__int64)&PopWorkOrderList;
  PopWorkOrderList = (__int64)&PopWorkOrderList;
  qword_140F0D690 = (__int64)PopFxResidentTimeoutRoutine;
  qword_140F0D9B0 = (__int64)&qword_140F0D9A8;
  qword_140F0D9A8 = (__int64)&qword_140F0D9A8;
  stru_140F0D9C0.Header.WaitListHead.Blink = &stru_140F0D9C0.Header.WaitListHead;
  stru_140F0D9C0.Header.WaitListHead.Flink = &stru_140F0D9C0.Header.WaitListHead;
  PopFxResidentDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopFxResidentTimeoutDpcRoutine;
  PopFxResidentTimer.Header.WaitListHead.Blink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxResidentTimer.Header.WaitListHead.Flink = &PopFxResidentTimer.Header.WaitListHead;
  qword_140F0D718 = (__int64)&PopFxPluginList;
  PopFxPluginList = (ULONG_PTR)&PopFxPluginList;
  PopFxDeviceRegisterHead = (__int64)&PopFxPluginList;
  PopFxActiveIdleThreshold *= 10000;
  PopFxDeviceListLock = 0LL;
  PopFxPluginLock = 0LL;
  PopWorkOrderLock = 0LL;
  qword_140F0D698 = 0LL;
  PopFxResidentWorkItem = 0LL;
  PopFxBlockingDeviceListLock = 0LL;
  PopFxUpdateDripsConstraintContext = 0LL;
  LOWORD(stru_140F0D9C0.Header.Lock) = 0;
  stru_140F0D9C0.Header.SignalState = 1;
  PopFxResidentDpc.TargetInfoAsUlong = 275;
  PopFxResidentDpc.DeferredContext = 0LL;
  PopFxResidentDpc.DpcData = 0LL;
  PopFxResidentDpc.ProcessorHistory = 0LL;
  PopFxResidentTimer.DueTime.QuadPart = 0LL;
  PopFxResidentTimer.Period = 0;
  PopFxResidentTimer.Processor = 0;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  PopFxGlobalDeviceAccountingLock = 0LL;
  memset_0(&byte_140F0D7C1, 0, 0x6FuLL);
  PopFxGlobalDeviceAccountingInfo = 1;
  if ( !PopSleepStudyDisabled )
  {
    if ( (PopSleepStudyDeviceAccountingLevel & 1) != 0 )
    {
      PopFxAccountingGroup = 1;
    }
    else if ( (PopSleepStudyDeviceAccountingLevel & 2) != 0 )
    {
      PopFxAccountingGroup = 2;
    }
    else if ( (PopSleepStudyDeviceAccountingLevel & 4) != 0 )
    {
      PopFxAccountingGroup = 3;
    }
  }
  qword_140F0D618 = (__int64)&SocSubsystemsList;
  SocSubsystemsList = (__int64)&SocSubsystemsList;
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&PopFxSystemWorkPool, 0LL);
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&PopFxNoFaultSystemWorkPool, 0LL);
  *(_QWORD *)&PopPepIdleTimer.Header.Lock = 9LL;
  qword_140F06888 = (__int64)&PopPepDeviceList;
  PopPepDeviceList = (__int64)&PopPepDeviceList;
  qword_140F06910 = (__int64)PopPepIdleTimeoutRoutine;
  PopPepIdleDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopPepIdleTimeoutDpcRoutine;
  PopPepIdleTimer.Header.WaitListHead.Blink = &PopPepIdleTimer.Header.WaitListHead;
  PopPepIdleTimer.Header.WaitListHead.Flink = &PopPepIdleTimer.Header.WaitListHead;
  qword_140F062B0 = 0LL;
  PopPepDeviceListLock = 0LL;
  qword_140F06918 = 0LL;
  PopPepIdleWorkItem = 0LL;
  PopPepIdleDpc.TargetInfoAsUlong = 275;
  PopPepIdleDpc.DeferredContext = 0LL;
  PopPepIdleDpc.DpcData = 0LL;
  PopPepIdleDpc.ProcessorHistory = 0LL;
  PopPepIdleTimer.DueTime.QuadPart = 0LL;
  PopPepIdleTimer.Period = 0;
  PopPepIdleTimer.Processor = 0;
  PopFxDirectedPowerUpTimeoutMs = 0;
  PopFxPlatformInterface = 0LL;
  if ( PopWatchdogResumeTimeout )
    PopFxDirectedPowerUpTimeoutMs = 1000 * (PopWatchdogResumeTimeout + 120);
  result = (unsigned int)PopWatchdogSleepTimeout;
  PopFxDirectedPowerDownTimeoutMs = 0;
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    result = (unsigned int)(PopWatchdogSleepTimeout + 120);
    PopFxDirectedPowerDownTimeoutMs = 1000 * result;
  }
  return result;
}
