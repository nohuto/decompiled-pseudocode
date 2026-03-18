/*
 * XREFs of DpiIndirectDisplayInitialStartTracker @ 0x14024F7EC
 * Callers:
 *     DpiInitializeGlobalState @ 0x1404359E8 (DpiInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

void DpiIndirectDisplayInitialStartTracker()
{
  dword_140161358 = 0;
  KeInitializeEvent(&stru_140161360, NotificationEvent, 1u);
  qword_140161328 = 0LL;
  dword_140161330 = 0;
  dword_140161320 = 1;
  KeInitializeEvent(&stru_140161338, SynchronizationEvent, 0);
}
