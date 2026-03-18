/*
 * XREFs of ZwResumeThread @ 0x1406A6E50
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402462F8 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
