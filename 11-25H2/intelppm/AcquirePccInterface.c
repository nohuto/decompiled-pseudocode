/*
 * XREFs of AcquirePccInterface @ 0x140027238
 * Callers:
 *     InitAcpiLegacyPcc @ 0x140027008 (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memset @ 0x140010340 (memset.c)
 *     ValidatePccHeader @ 0x14002F280 (ValidatePccHeader.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019188,
    0LL);
  if ( qword_140019770 )
  {
    v3 = 0;
  }
  else
  {
    dword_140019748 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v2,
           &GUID_PCC_INTERFACE_STANDARD,
           &unk_140019728,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = ValidatePccHeader(qword_140019770);
      if ( v3 < 0 )
      {
        ((void (__fastcall *)(__int64))qword_140019740)(qword_140019730);
        memset(&unk_140019728, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  return (unsigned int)v3;
}
