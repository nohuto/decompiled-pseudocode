/*
 * XREFs of ProcLibThermalNotification @ 0x140041940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ProcLibThermalNotification(__int64 a1, int a2)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155D8,
    0LL);
  if ( *(_DWORD *)(a1 + 736) != a2 )
  {
    *(_DWORD *)(a1 + 736) = a2;
    ((void (__fastcall *)(__int64))qword_140015B18)(a1);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1400155D8);
}
