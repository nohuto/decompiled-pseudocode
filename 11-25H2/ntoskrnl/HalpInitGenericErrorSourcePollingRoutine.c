/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140B3E208
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140B3E2D4 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x14044DC30 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x140476A80 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140FC0008 = 0LL;
  dword_140FC00F4 = 0;
  dword_140FC00F0 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140FC00B8, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140FC0010, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140FC0050 = 0LL;
  qword_140FC0060 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140FC0068 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&stru_140FC0070, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140FC0070, v0, HalpGenericPolledContext, 0, (__int64)&stru_140FC0010);
}
