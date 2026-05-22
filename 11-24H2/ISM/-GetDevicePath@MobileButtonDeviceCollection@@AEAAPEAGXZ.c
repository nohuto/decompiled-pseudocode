/*
 * XREFs of ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x1800DA278
 * Callers:
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800DAFB8 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 */

unsigned __int16 *__fastcall MobileButtonDeviceCollection::GetDevicePath(MobileButtonDeviceCollection *this)
{
  WCHAR *v2; // rbx
  ULONG pulLen; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+44h] [rbp+Ch]

  v4 = HIDWORD(this);
  pulLen = 0;
  CM_Get_Device_Interface_List_SizeW(&pulLen, &GUID_GPIOBUTTONS_NOTIFY_INTERFACE, 0LL, 0);
  if ( pulLen == 1 )
    return 0LL;
  v2 = (WCHAR *)operator new[](saturated_mul(pulLen, 2uLL));
  CM_Get_Device_Interface_ListW(&GUID_GPIOBUTTONS_NOTIFY_INTERFACE, 0LL, v2, pulLen, 0);
  return v2;
}
