/*
 * XREFs of PopWatchdogInit @ 0x140C21D80
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 *     KeInitializeTriageDumpDataArray @ 0x1404AEA10 (KeInitializeTriageDumpDataArray.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

char PopWatchdogInit()
{
  NTSTATUS v0; // eax

  qword_140F06F38 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140F0AFD0.Header.Lock = 8LL;
  stru_140F0AFD0.Header.WaitListHead.Blink = &stru_140F0AFD0.Header.WaitListHead;
  stru_140F0AFD0.Header.WaitListHead.Flink = &stru_140F0AFD0.Header.WaitListHead;
  qword_140F0AFA8 = (__int64)PopPowerActionWatchdog;
  qword_140F0BAB8 = 0LL;
  qword_140F0AF88 = 0LL;
  stru_140F0AFD0.DueTime.QuadPart = 0LL;
  stru_140F0AFD0.Period = 0;
  stru_140F0AFD0.Processor = 0;
  dword_140F0AF90 = 275;
  qword_140F0AFB0 = 0LL;
  qword_140F0AFC8 = 0LL;
  qword_140F0AFA0 = 0LL;
  byte_140F0B010 = 1;
  PopReleasePolicyLock();
  stru_140E01CF8.State = 0;
  v0 = KeInitializeTriageDumpDataArray(&KtriageDumpDataArray, 0x40u);
  if ( v0 >= 0 )
  {
    LOBYTE(v0) = KeRegisterBugCheckReasonCallback(
                   &stru_140E01CF8,
                   CallbackRoutine,
                   KbCallbackTriageDumpData,
                   off_140E01CF0);
    if ( (_BYTE)v0 )
      PopWatchdogDumpControlContext = 1;
  }
  return v0;
}
