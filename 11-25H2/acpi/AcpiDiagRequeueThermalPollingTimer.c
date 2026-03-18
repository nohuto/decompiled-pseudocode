/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x140036FCC
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x140036F50 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1400569E0 (AcpiDiagThermalPollingTraceControlCallback.c)
 *     AcpiDiagInitialize @ 0x1400C6398 (AcpiDiagInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // al
  _LIST_ENTRY *Blink; // rdx
  KIRQL v2; // bl
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  Blink = *(_LIST_ENTRY **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v2 = v0;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
    && (!WPP_MAIN_CB.Queue.ListEntry.Blink
     || (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels)
    || (Blink = WPP_MAIN_CB.Queue.ListEntry.Blink) != 0LL )
  {
    *((_QWORD *)&v3 + 1) = -1LL;
    ((void (__fastcall *)(void **, __int64, _QWORD, __int128 *))KeSetTimer2)(
      &WPP_MAIN_CB.Queue.Wcb.DeviceObject,
      -(__int64)Blink,
      0LL,
      &v3);
  }
  else
  {
    KeCancelTimer2(&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
