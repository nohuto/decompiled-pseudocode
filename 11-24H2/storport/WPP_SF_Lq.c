/*
 * XREFs of WPP_SF_Lq @ 0x14009029C
 * Callers:
 *     RaidUnlockContiguousPhysicalPagesList @ 0x140038CEC (RaidUnlockContiguousPhysicalPagesList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_Lq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_fe6d764451ce35c6dcc82ee897ab329f_Traceguids);
}
