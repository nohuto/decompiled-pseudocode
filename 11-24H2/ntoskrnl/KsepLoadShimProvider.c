/*
 * XREFs of KsepLoadShimProvider @ 0x1405C7C3C
 * Callers:
 *     KsepResolveApplicableShimsForDriver @ 0x14073D7B8 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     ZwLoadDriver @ 0x1406A9570 (ZwLoadDriver.c)
 *     KsepStringFree @ 0x140943154 (KsepStringFree.c)
 *     KsepStringConcatenate @ 0x140943A10 (KsepStringConcatenate.c)
 */

__int64 __fastcall KsepLoadShimProvider(__int64 a1)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  UNICODE_STRING DriverServiceName; // [rsp+20h] [rbp-18h] BYREF

  DriverServiceName = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221225473LL;
  v3 = ((__int64 (__fastcall *)(UNICODE_STRING *, const wchar_t *, __int64, _QWORD))KsepStringConcatenate)(
         &DriverServiceName,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\",
         v2,
         0LL);
  if ( v3 >= 0 )
  {
    v3 = ZwLoadDriver(&DriverServiceName);
    if ( v3 == -1073741554 )
      v3 = 0;
  }
  KsepStringFree(&DriverServiceName);
  return (unsigned int)v3;
}
