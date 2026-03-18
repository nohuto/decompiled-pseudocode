/*
 * XREFs of __security_check_cookie @ 0x1C0004EE0
 * Callers:
 *     CiLogThreadBuffering @ 0x1C00010E0 (CiLogThreadBuffering.c)
 *     CiSchedulerSleep @ 0x1C0001F80 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x1C0003040 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     CiSchedulerTaskIndexYield @ 0x1C0003320 (CiSchedulerTaskIndexYield.c)
 *     CiLogSchedulerEvent @ 0x1C0003860 (CiLogSchedulerEvent.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003950 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C00039C0 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogSchedulerWakeup @ 0x1C0004010 (CiLogSchedulerWakeup.c)
 *     CiLogSchedulerSleep @ 0x1C00040B0 (CiLogSchedulerSleep.c)
 *     CiLogSetBufferingMode @ 0x1C0004140 (CiLogSetBufferingMode.c)
 *     CiLogTurboEngaged @ 0x1C00041D0 (CiLogTurboEngaged.c)
 *     CiLogThreadJoin @ 0x1C0004420 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0004580 (CiLogThreadLeave.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004690 (CiLogTaskIndexCancelYield.c)
 *     __GSHandlerCheckCommon @ 0x1C0004D0C (__GSHandlerCheckCommon.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000CC90 (CiCreateTaskIndexClientFromThread.c)
 *     CiNdisThrottle @ 0x1C000E6E0 (CiNdisThrottle.c)
 *     CiConfigReadDWORD @ 0x1C000F978 (CiConfigReadDWORD.c)
 *     CiConfigQueryValue @ 0x1C000FB90 (CiConfigQueryValue.c)
 *     CiConfigInitializeFromRegistry @ 0x1C0010180 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
