/*
 * XREFs of WheaHwErrorReportMarkAsCriticalDeviceDriver @ 0x14065A8B0
 * Callers:
 *     <none>
 * Callees:
 *     WheapErrorHandleIsValid @ 0x14065AE1C (WheapErrorHandleIsValid.c)
 */

__int64 WheaHwErrorReportMarkAsCriticalDeviceDriver()
{
  __int64 v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  *(_DWORD *)(*(_QWORD *)(v0 + 40) + 12LL) |= 2u;
  return 0LL;
}
