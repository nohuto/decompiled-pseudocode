/*
 * XREFs of FireWmiEvent @ 0x140004484
 * Callers:
 *     AcpiTStateNotifyWorker @ 0x140033BF0 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x14003E9A0 (AcpiCStateNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x140044660 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FireWmiEvent(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax

  v4 = -1073741823;
  if ( *((_BYTE *)a1 + 12) )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3016))(WdfDriverGlobals, *a1);
    if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
           WdfDriverGlobals,
           v5,
           1LL) )
    {
      return (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 3024))(
               WdfDriverGlobals,
               *a1,
               *((unsigned int *)a1 + 2),
               a2);
    }
  }
  return v4;
}
