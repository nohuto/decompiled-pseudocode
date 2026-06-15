/*
 * XREFs of __tailMerge_rtworkq_dll @ 0x14005B139
 * Callers:
 *     __imp_load_RtwqUnlockWorkQueue @ 0x14005B1B8 (__imp_load_RtwqUnlockWorkQueue.c)
 *     __imp_load_RtwqAllocateWorkQueue @ 0x14005B1CA (__imp_load_RtwqAllocateWorkQueue.c)
 *     __imp_load_RtwqCancelDeadline @ 0x14005B1DC (__imp_load_RtwqCancelDeadline.c)
 *     __imp_load_RtwqSetDeadline2 @ 0x14005B1EE (__imp_load_RtwqSetDeadline2.c)
 *     __imp_load_RtwqSetLongRunning @ 0x14005B200 (__imp_load_RtwqSetLongRunning.c)
 *     __imp_load_RtwqGetWorkQueueMMCSSTaskId @ 0x14005B212 (__imp_load_RtwqGetWorkQueueMMCSSTaskId.c)
 *     __imp_load_RtwqEndRegisterWorkQueueWithMMCSS @ 0x14005B224 (__imp_load_RtwqEndRegisterWorkQueueWithMMCSS.c)
 *     __imp_load_RtwqStartup @ 0x14005B236 (__imp_load_RtwqStartup.c)
 *     __imp_load_RtwqBeginRegisterWorkQueueWithMMCSS @ 0x14005B248 (__imp_load_RtwqBeginRegisterWorkQueueWithMMCSS.c)
 *     __imp_load_RtwqShutdown @ 0x14005B25A (__imp_load_RtwqShutdown.c)
 *     __imp_load_RtwqLockSharedWorkQueue @ 0x14005B26C (__imp_load_RtwqLockSharedWorkQueue.c)
 *     __imp_load_RtwqBeginUnregisterWorkQueueWithMMCSS @ 0x14005B27E (__imp_load_RtwqBeginUnregisterWorkQueueWithMMCSS.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1400489B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rtworkq_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_rtworkq_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
