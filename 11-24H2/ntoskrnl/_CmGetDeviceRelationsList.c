/*
 * XREFs of _CmGetDeviceRelationsList @ 0x1409B3D90
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceIdList @ 0x140A19E98 (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140A1A630 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall CmGetDeviceRelationsList(__int64 a1, const WCHAR *a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v4 = 4;
  DestinationString = 0LL;
  if ( a3 == 4 )
  {
    v4 = 0;
  }
  else if ( a3 == 32 )
  {
    v4 = 3;
  }
  else if ( a3 != 64 )
  {
    if ( a3 == 8 )
    {
      v4 = 1;
    }
    else
    {
      if ( a3 != 16 )
        return -1073741811;
      v4 = 2;
    }
  }
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 280) )
    {
      result = guard_dispatch_icall_no_overrides(a1, &DestinationString, v4, a4);
      if ( result == -2147483643 )
        return -1073741789;
    }
    else
    {
      return -1073741822;
    }
  }
  return result;
}
