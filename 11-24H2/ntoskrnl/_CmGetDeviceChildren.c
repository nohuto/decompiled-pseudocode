/*
 * XREFs of _CmGetDeviceChildren @ 0x1409B400C
 * Callers:
 *     _CmGetDeviceSiblings @ 0x1409B3E64 (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x14041DE80 (StringExHandleOtherFlagsW.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __report_rangecheckfailure @ 0x1404F51BC (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpMultiSzAppend @ 0x1409B3C08 (_PnpMultiSzAppend.c)
 */

int __fastcall CmGetDeviceChildren(__int64 a1, const WCHAR *a2, _WORD *a3, _DWORD *a4)
{
  int result; // eax
  size_t v6; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+70h] [rbp-90h]
  _WORD v9[200]; // [rsp+80h] [rbp-80h] BYREF

  v6 = (size_t)a4;
  v8 = a1;
  DestinationString = 0LL;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
  }
  else
  {
    *a4 = 0;
  }
  *a4 = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 272) )
    {
      result = guard_dispatch_icall_no_overrides(a1, &DestinationString, 2LL, v9);
      if ( result == -2147483643 )
      {
        return -1073741789;
      }
      else if ( result >= 0 )
      {
        return -1073741275;
      }
    }
    else
    {
      return -1073741822;
    }
  }
  return result;
}
