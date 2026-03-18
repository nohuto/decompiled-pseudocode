/*
 * XREFs of Interrupter_QueryBusEdgeInformation @ 0x14003650C
 * Callers:
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043180 (Controller_UcxEvtStartTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_QueryBusEdgeInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v7; // rdx
  _QWORD v9[7]; // [rsp+30h] [rbp-38h] BYREF

  v9[3] = a5;
  v9[4] = a6;
  v9[5] = a7;
  v9[0] = a2;
  v7 = *(_QWORD **)(a1 + 40);
  v9[1] = a3;
  v9[2] = a4;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, __int64 *), _QWORD *))(WdfFunctions_01033 + 1144))(
           WdfDriverGlobals,
           *v7,
           Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
           v9);
}
