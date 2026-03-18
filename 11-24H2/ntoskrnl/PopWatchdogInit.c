/*
 * XREFs of PopWatchdogInit @ 0x140C32E78
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140467D20 (KeRegisterBugCheckReasonCallback.c)
 *     KeInitializeTriageDumpDataArray @ 0x1404AF8B0 (KeInitializeTriageDumpDataArray.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

char __fastcall PopWatchdogInit(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // eax

  qword_140F075E8 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock(a1, a2, a3);
  *(_QWORD *)&stru_140F0B270.Header.Lock = 8LL;
  stru_140F0B270.Header.WaitListHead.Blink = &stru_140F0B270.Header.WaitListHead;
  stru_140F0B270.Header.WaitListHead.Flink = &stru_140F0B270.Header.WaitListHead;
  qword_140F0B248 = (__int64)PopPowerActionWatchdog;
  qword_140F0C178 = 0LL;
  qword_140F0B228 = 0LL;
  stru_140F0B270.DueTime.QuadPart = 0LL;
  stru_140F0B270.Period = 0;
  stru_140F0B270.Processor = 0;
  dword_140F0B230 = 275;
  qword_140F0B250 = 0LL;
  qword_140F0B268 = 0LL;
  qword_140F0B240 = 0LL;
  byte_140F0B2B0 = 1;
  PopReleasePolicyLock();
  stru_140E01CF8.State = 0;
  v3 = KeInitializeTriageDumpDataArray(&KtriageDumpDataArray, 0x40u);
  if ( v3 >= 0 )
  {
    LOBYTE(v3) = KeRegisterBugCheckReasonCallback(
                   &stru_140E01CF8,
                   CallbackRoutine,
                   KbCallbackTriageDumpData,
                   off_140E01CF0);
    if ( (_BYTE)v3 )
      PopWatchdogDumpControlContext = 1;
  }
  return v3;
}
