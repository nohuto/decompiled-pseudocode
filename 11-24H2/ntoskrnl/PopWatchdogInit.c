/*
 * XREFs of PopWatchdogInit @ 0x140C34FB8
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     KeInitializeTriageDumpDataArray @ 0x1404AA2A0 (KeInitializeTriageDumpDataArray.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

char PopWatchdogInit()
{
  NTSTATUS v0; // eax

  qword_140F078E8 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140F0BAF0.Header.Lock = 8LL;
  stru_140F0BAF0.Header.WaitListHead.Blink = &stru_140F0BAF0.Header.WaitListHead;
  stru_140F0BAF0.Header.WaitListHead.Flink = &stru_140F0BAF0.Header.WaitListHead;
  qword_140F0BAC8 = (__int64)PopPowerActionWatchdog;
  qword_140F0B158 = 0LL;
  qword_140F0BAA8 = 0LL;
  stru_140F0BAF0.DueTime.QuadPart = 0LL;
  stru_140F0BAF0.Period = 0;
  stru_140F0BAF0.Processor = 0;
  dword_140F0BAB0 = 275;
  qword_140F0BAD0 = 0LL;
  qword_140F0BAE8 = 0LL;
  qword_140F0BAC0 = 0LL;
  byte_140F0BB30 = 1;
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
