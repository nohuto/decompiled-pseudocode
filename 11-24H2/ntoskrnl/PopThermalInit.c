/*
 * XREFs of PopThermalInit @ 0x140C2ED08
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 *     PopInitializeTimer @ 0x140749388 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x1407493D8 (PopInitializeWorkItem.c)
 */

__int64 PopThermalInit()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 result; // rax

  LOBYTE(word_140F0AD10) = 1;
  qword_140F0BEE8 = 0LL;
  PopThermalLock = 0LL;
  qword_140F0C0A8 = 0LL;
  PopThermalTelemetryLock = 0LL;
  qword_140F0AD08 = 0LL;
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
  word_140F0AB92 = 0;
  KiInitializeTimer2((unsigned __int64)&unk_140F0AB90, (__int64)PopThermalEventTransitionTimerCallback, 0LL, 0);
  dword_140F0AB8C = -1;
  byte_140F0AB88 = 1;
  result = PopInitializeWorkItem(
             (__int64)&PopThermalStateTransitionWorkItem,
             (__int64)PopThermalStateTransitionWorker,
             0LL);
  qword_140F0AB28 = 0LL;
  PopThermalStateTransitionContext = 0LL;
  byte_140F0AB30 = 1;
  return result;
}
