/*
 * XREFs of AcpiEval_GetProcessorIds @ 0x14002A2C0
 * Callers:
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiEval_GetProcessorIds(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD v4[5]; // [rsp+50h] [rbp-28h] BYREF

  v4[1] = a2;
  v2 = *(_QWORD *)(a1 + 16);
  v4[0] = 1LL;
  v4[2] = 16LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v2,
           0LL,
           2703744LL,
           0LL,
           v4,
           0LL,
           0LL);
}
