/*
 * XREFs of Interrupter_DeferToDpcOrWorkItem @ 0x1400226A0
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1400386B0 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x140048B60 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_DeferToDpcOrWorkItem(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                                WdfDriverGlobals,
                                a1,
                                off_14006B178)
                            + 8)
                + 1001LL) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3328))(WdfDriverGlobals, a1);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1136))(WdfDriverGlobals, a1);
}
