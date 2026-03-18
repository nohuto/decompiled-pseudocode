/*
 * XREFs of RIMIDECheckInjectionCapability @ 0x1401E4DE0
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x14016DC10 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BB2D0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BCE90 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDECheckInjectionCapability(__int64 a1)
{
  unsigned int v1; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"inputInjection");
  v1 = 0;
  LOBYTE(v4) = 0;
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v4) >= 0 )
    return (unsigned __int8)v4;
  return v1;
}
