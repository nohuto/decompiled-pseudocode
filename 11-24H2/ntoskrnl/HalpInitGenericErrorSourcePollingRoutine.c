/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140B50258
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140B50324 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1404449F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x140473080 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140FC0A08 = 0LL;
  dword_140FC0AF4 = 0;
  dword_140FC0AF0 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140FC0AB8, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140FC0A10, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140FC0A50 = 0LL;
  qword_140FC0A60 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140FC0A68 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&stru_140FC0A70, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140FC0A70, v0, HalpGenericPolledContext, 0, (__int64)&stru_140FC0A10);
}
