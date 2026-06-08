/*
 * XREFs of AcquirePccInterface @ 0x140027C6C
 * Callers:
 *     InitAcpiLegacyPcc @ 0x14003D214 (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     memset @ 0x14000E780 (memset.c)
 *     ValidatePccHeader @ 0x140031D84 (ValidatePccHeader.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155D8,
    0LL);
  if ( qword_140015BC0 )
  {
    v3 = 0;
  }
  else
  {
    dword_140015B98 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v2,
           &GUID_PCC_INTERFACE_STANDARD,
           &unk_140015B78,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = ValidatePccHeader(qword_140015BC0);
      if ( v3 < 0 )
      {
        ((void (__fastcall *)(__int64))qword_140015B90)(qword_140015B80);
        memset(&unk_140015B78, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  return (unsigned int)v3;
}
