/*
 * XREFs of PopThermalInit @ 0x140C30E28
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     PopInitializeTimer @ 0x1407476B8 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x140747708 (PopInitializeWorkItem.c)
 */

__int64 PopThermalInit()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 result; // rax

  LOBYTE(word_140F0AF90) = 1;
  qword_140F0C368 = 0LL;
  PopThermalLock = 0LL;
  qword_140F0B0A8 = 0LL;
  PopThermalTelemetryLock = 0LL;
  qword_140F0AF88 = 0LL;
  PopSystemThermalInfo = 0LL;
  PopInitializeTimer(
    (__int64)&PopThermalTelemetryTimer,
    (__int64)PopThermalTelemetryCallback,
    0LL,
    (__int64)PopThermalTelemetryWorker,
    0LL);
  if ( PopThermalPollingMode )
    PopThermalPollingWakesAllowed = 1;
  v0 = PopThermalTrackingThresholds;
  for ( i = 0; i < 0x834; i += 100 )
  {
    v2 = i;
    *v0++ = v2 / 0x14;
  }
  word_140F0AE92 = 0;
  KiInitializeTimer2((unsigned __int64)&unk_140F0AE90, (__int64)PopThermalEventTransitionTimerCallback, 0LL, 0);
  dword_140F0AE8C = -1;
  byte_140F0AE88 = 1;
  result = PopInitializeWorkItem(
             (__int64)&PopThermalStateTransitionWorkItem,
             (__int64)PopThermalStateTransitionWorker,
             0LL);
  qword_140F0AF68 = 0LL;
  PopThermalStateTransitionContext = 0LL;
  byte_140F0AF70 = 1;
  return result;
}
