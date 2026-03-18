/*
 * XREFs of WPP_SF_d @ 0x1C0004960
 * Callers:
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 *     CiNdisOpenDevice @ 0x1C000C7E8 (CiNdisOpenDevice.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000CC90 (CiCreateTaskIndexClientFromThread.c)
 *     CiTaskIndexCreate @ 0x1C000D070 (CiTaskIndexCreate.c)
 *     CiNdisThrottle @ 0x1C000E6E0 (CiNdisThrottle.c)
 *     CiConfigInitialize @ 0x1C000F1B0 (CiConfigInitialize.c)
 *     CiTaskAllocate @ 0x1C000F7B8 (CiTaskAllocate.c)
 *     CiThreadInitialize @ 0x1C000F8B8 (CiThreadInitialize.c)
 *     CiTaskDump @ 0x1C000FF50 (CiTaskDump.c)
 *     CiConfigInitializeFromRegistry @ 0x1C0010180 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0004F20 (_guard_dispatch_icall.c)
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
