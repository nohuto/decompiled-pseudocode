/*
 * XREFs of Controller_EvtDeviceFileCreate @ 0x14002E2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_EvtDeviceFileCreate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a3,
         off_14006B218);
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 40) = v5;
  *(_BYTE *)(v6 + 48) = 0;
  *(_BYTE *)(v6 + 60) = 1;
  *(_QWORD *)(v6 + 16) = a3;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
