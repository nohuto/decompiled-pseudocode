/*
 * XREFs of WPP_SF_ @ 0x140004620
 * Callers:
 *     CiSchedulerDeepSleep @ 0x140001540 (CiSchedulerDeepSleep.c)
 *     CiSchedulerThreadFunction @ 0x1400018F0 (CiSchedulerThreadFunction.c)
 *     CiSchedulerWait @ 0x140002650 (CiSchedulerWait.c)
 *     CiDriverUnload @ 0x14000D350 (CiDriverUnload.c)
 *     CiDispatchCreateTaskIndexClient @ 0x14000E440 (CiDispatchCreateTaskIndexClient.c)
 *     CiTaskIndexCreate @ 0x14000E600 (CiTaskIndexCreate.c)
 *     CiDispatchCreateMmThreadClient @ 0x14000E820 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x14000ECB0 (CiThreadCreate.c)
 *     CiConfigInitialize @ 0x140010010 (CiConfigInitialize.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
