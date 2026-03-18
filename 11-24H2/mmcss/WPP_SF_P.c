/*
 * XREFs of WPP_SF_P @ 0x140004C84
 * Callers:
 *     CiTaskDump @ 0x1400110F0 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_P(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_62da978b8000316eb1e6fce22b5cf66e_Traceguids);
}
