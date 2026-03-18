/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C009FF7C
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C00DD4E0 (ReadPointerDeviceSettingsFull.c)
 *     GetPenDoubleClickTime @ 0x1C01F3154 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1C01F31A0 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C0354038) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
