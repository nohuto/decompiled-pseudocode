/*
 * XREFs of ?ResultFromLastError@@YAJXZ @ 0x1801C5FF0
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x18005CD60 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801C5BB8 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x1801C5F70 (-RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z.c)
 *     ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x1803078A0 (-_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z.c)
 * Callees:
 *     <none>
 */

signed int ResultFromLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
