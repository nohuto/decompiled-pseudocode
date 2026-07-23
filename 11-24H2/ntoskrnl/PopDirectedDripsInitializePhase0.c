/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140C301BC
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140C303B4 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x140747708 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14074A960 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x140764388 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140C35AC4 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140F0E060 = 0LL;
  stru_140F0DFD8.Header.SignalState = 0;
  dword_140F0E0A0 = 0;
  qword_140F0E1F8 = -1LL;
  unk_140F0E068 = 0;
  dword_140F0E06C = 0;
  stru_140F0DFD8.Header.WaitListHead.Blink = &stru_140F0DFD8.Header.WaitListHead;
  stru_140F0DFD8.Header.WaitListHead.Flink = &stru_140F0DFD8.Header.WaitListHead;
  LOWORD(stru_140F0DFD8.Header.Lock) = 1;
  stru_140F0DFD8.Header.Size = 6;
  dword_140F0DFF8[0] = -1946157056;
  byte_140F0E070 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140F0E078,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F0E0A8, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F0E148, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140F0E200 = 0LL;
  dword_140F0E208 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
