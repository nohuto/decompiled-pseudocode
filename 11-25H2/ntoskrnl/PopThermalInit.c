/*
 * XREFs of PopThermalInit @ 0x140C1DC0C
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 *     PopInitializeTimer @ 0x14073D378 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x14073D3C8 (PopInitializeWorkItem.c)
 */

__int64 PopThermalInit()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 result; // rax

  LOBYTE(word_140F0A490) = 1;
  qword_140F0A848 = 0LL;
  PopThermalLock = 0LL;
  qword_140F0BA18 = 0LL;
  PopThermalTelemetryLock = 0LL;
  qword_140F0A488 = 0LL;
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
  word_140F0A5F2 = 0;
  KiInitializeTimer2((unsigned __int64)&unk_140F0A5F0, (__int64)PopThermalEventTransitionTimerCallback, 0LL, 0);
  dword_140F0A5EC = -1;
  byte_140F0A5E8 = 1;
  result = PopInitializeWorkItem(
             (__int64)&PopThermalStateTransitionWorkItem,
             (__int64)PopThermalStateTransitionWorker,
             0LL);
  qword_140F0A4C8 = 0LL;
  PopThermalStateTransitionContext = 0LL;
  byte_140F0A4D0 = 1;
  return result;
}
