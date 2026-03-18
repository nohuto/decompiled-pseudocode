/*
 * XREFs of DpiIndirectDdiIoControl @ 0x140428580
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline @ 0x14008B938 (Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiIndirectDdiIoControl(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int v11; // eax
  unsigned int v12; // ebx

  if ( (unsigned int)Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_BYTE *)(a1 + 1158) )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 825;
      return 3221225485LL;
    }
    if ( !*(_QWORD *)(a1 + 1056) )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 831;
      return 3221225485LL;
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64, __int64))(a1 + 1056))(
          *(_QWORD *)(a1 + 1008),
          a2,
          a3,
          a4,
          a5,
          a6);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 840;
  }
  return v12;
}
