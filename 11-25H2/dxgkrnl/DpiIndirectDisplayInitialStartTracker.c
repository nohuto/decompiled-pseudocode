/*
 * XREFs of DpiIndirectDisplayInitialStartTracker @ 0x1402489BC
 * Callers:
 *     DpiInitializeGlobalState @ 0x1404339E8 (DpiInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

void DpiIndirectDisplayInitialStartTracker()
{
  dword_14015E398 = 0;
  KeInitializeEvent(&Object, NotificationEvent, 1u);
  qword_14015E368 = 0LL;
  dword_14015E370 = 0;
  dword_14015E360 = 1;
  KeInitializeEvent(&stru_14015E378, SynchronizationEvent, 0);
}
