/*
 * XREFs of PopIdleInitAoAcDozeS4Timer @ 0x14075C48C
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x1404C1B3C (KeInitializeIRTimer.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS PopIdleInitAoAcDozeS4Timer()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  PopIdleAoAcDozeS4Lock = 0LL;
  v1 = 131080;
  KeInitializeIRTimer(
    (unsigned __int64)&PopIdleAoAcDozeS4Timer,
    (__int64)PopIdleAoAcDozeS4TimerCallback,
    0LL,
    (unsigned __int16 *)&v1,
    2);
  PopIdleAoAcDozeS4WorkItem.Parameter = 0LL;
  PopIdleAoAcDozeS4WorkItem.List.Flink = 0LL;
  PopIdleAoAcDozeS4WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopIdleAoAcDozeToS4;
  return PoRegisterPowerSettingCallback(0LL, &GUID_GLOBAL_USER_PRESENCE, PopIdleGlobalUserPresenceCallback, 0LL, 0LL);
}
