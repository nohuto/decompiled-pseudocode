/*
 * XREFs of WPP_SF_d @ 0x140004960
 * Callers:
 *     CiSchedulerWait @ 0x140002650 (CiSchedulerWait.c)
 *     CiNdisOpenDevice @ 0x14000DCA8 (CiNdisOpenDevice.c)
 *     CiCreateTaskIndexClientFromThread @ 0x14000E220 (CiCreateTaskIndexClientFromThread.c)
 *     CiTaskIndexCreate @ 0x14000E600 (CiTaskIndexCreate.c)
 *     CiNdisThrottle @ 0x14000FC90 (CiNdisThrottle.c)
 *     CiConfigInitialize @ 0x140010010 (CiConfigInitialize.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 *     CiTaskAllocate @ 0x140010C2C (CiTaskAllocate.c)
 *     CiTaskDump @ 0x1400110F0 (CiTaskDump.c)
 *     CiConfigInitializeFromRegistry @ 0x140011320 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
