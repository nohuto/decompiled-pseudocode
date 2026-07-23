/*
 * XREFs of HvlRegisterWheaErrorNotification @ 0x14070C830
 * Callers:
 *     <none>
 * Callees:
 *     WheaRegisterInUsePageOfflineNotification @ 0x1407C7B00 (WheaRegisterInUsePageOfflineNotification.c)
 */

NTSTATUS __stdcall HvlRegisterWheaErrorNotification(PHVL_WHEA_ERROR_NOTIFICATION Callback)
{
  NTSTATUS result; // eax

  if ( (HvlpRootFlags & 1) == 0 )
    return -1073741637;
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&HvlpWheaErrorNotificationCallback,
         (signed __int64)Callback,
         0LL) )
  {
    return -1073741823;
  }
  result = WheaRegisterInUsePageOfflineNotification(
             (PFN_IN_USE_PAGE_OFFLINE_NOTIFY)HvlWheaInUsePageOfflineNotificationCallback,
             0LL);
  if ( result < 0 )
    _InterlockedExchange64((volatile __int64 *)&HvlpWheaErrorNotificationCallback, 0LL);
  return result;
}
