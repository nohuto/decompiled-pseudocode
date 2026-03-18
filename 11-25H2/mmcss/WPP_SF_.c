/*
 * XREFs of WPP_SF_ @ 0x1C0004620
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C0001540 (CiSchedulerDeepSleep.c)
 *     CiSchedulerThreadFunction @ 0x1C00018F0 (CiSchedulerThreadFunction.c)
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 *     CiDriverUnload @ 0x1C000C350 (CiDriverUnload.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000CEB0 (CiDispatchCreateTaskIndexClient.c)
 *     CiTaskIndexCreate @ 0x1C000D070 (CiTaskIndexCreate.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000D290 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 *     CiConfigInitialize @ 0x1C000F1B0 (CiConfigInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000FDC0 (CiSchedulerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0004F20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
