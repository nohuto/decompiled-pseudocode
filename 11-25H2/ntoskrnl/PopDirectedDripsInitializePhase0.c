/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140C1CF9C
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140C1D194 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x14073D3C8 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140740560 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x140754EF8 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140C22748 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140F0D6E0 = 0LL;
  stru_140F0D658.Header.SignalState = 0;
  dword_140F0D720 = 0;
  qword_140F0D878 = -1LL;
  unk_140F0D6E8 = 0;
  dword_140F0D6EC = 0;
  stru_140F0D658.Header.WaitListHead.Blink = &stru_140F0D658.Header.WaitListHead;
  stru_140F0D658.Header.WaitListHead.Flink = &stru_140F0D658.Header.WaitListHead;
  LOWORD(stru_140F0D658.Header.Lock) = 1;
  stru_140F0D658.Header.Size = 6;
  dword_140F0D678[0] = -1946157056;
  byte_140F0D6F0 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140F0D6F8,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F0D728, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F0D7C8, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140F0D880 = 0LL;
  dword_140F0D888 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
