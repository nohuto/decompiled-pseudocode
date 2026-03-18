/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140B4E208
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140B4E2D4 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x14044DAF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x140476AE0 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140FC07A8 = 0LL;
  dword_140FC0894 = 0;
  dword_140FC0890 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140FC0858, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140FC07B0, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140FC07F0 = 0LL;
  qword_140FC0800 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140FC0808 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&stru_140FC0810, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140FC0810, v0, HalpGenericPolledContext, 0, (__int64)&stru_140FC07B0);
}
