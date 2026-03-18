/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140C2E09C
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140C2E294 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x1407493D8 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14074C630 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x1407649B8 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140C33984 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140F0DDC0 = 0LL;
  stru_140F0DD38.Header.SignalState = 0;
  dword_140F0DE00 = 0;
  qword_140F0DF58 = -1LL;
  unk_140F0DDC8 = 0;
  dword_140F0DDCC = 0;
  stru_140F0DD38.Header.WaitListHead.Blink = &stru_140F0DD38.Header.WaitListHead;
  stru_140F0DD38.Header.WaitListHead.Flink = &stru_140F0DD38.Header.WaitListHead;
  LOWORD(stru_140F0DD38.Header.Lock) = 1;
  stru_140F0DD38.Header.Size = 6;
  dword_140F0DD58[0] = -1946157056;
  byte_140F0DDD0 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140F0DDD8,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F0DE08, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F0DEA8, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140F0DF60 = 0LL;
  dword_140F0DF68 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
