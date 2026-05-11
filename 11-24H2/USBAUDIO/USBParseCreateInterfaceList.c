/*
 * XREFs of USBParseCreateInterfaceList @ 0x140037058
 * Callers:
 *     USBHwCreateInterfaceList @ 0x14003526C (USBHwCreateInterfaceList.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003B61C (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseCreateInterfaceList(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        __int64 a2,
        _QWORD *a3)
{
  int v3; // ebx
  _QWORD *v4; // r15
  UCHAR *v6; // r14
  unsigned int v7; // edi
  __int64 AudioSpecificInterface; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v12; // r14
  PUSB_INTERFACE_DESCRIPTOR v13; // rcx
  __int64 v14; // rax
  _DWORD v15[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = 0;
  v4 = (_QWORD *)*a3;
  v6 = &StartPosition->bLength + StartPosition->wTotalLength;
  *(_QWORD *)*a3 = a2;
  v7 = 1;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(StartPosition, a2, a3, 8LL);
  v10 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return (unsigned int)-1073741438;
  if ( AudioSpecificInterface + (unsigned __int64)*(unsigned __int8 *)(AudioSpecificInterface + 7) + 8 > (unsigned __int64)v6 )
  {
    v15[0] = 55059908;
    v15[1] = 1;
    v15[2] = -1073741438;
    RtlLogUnexpectedCodepath(v15, v9);
    return 3221225858LL;
  }
  v12 = 0LL;
  while ( (unsigned int)v12 < *(unsigned __int8 *)(v10 + 7) )
  {
    v13 = USBD_ParseConfigurationDescriptorEx(
            StartPosition,
            StartPosition,
            *(unsigned __int8 *)(v12 + v10 + 8),
            -1,
            1,
            2,
            -1);
    if ( v13
      || (v13 = USBD_ParseConfigurationDescriptorEx(
                  StartPosition,
                  StartPosition,
                  *(unsigned __int8 *)(v12 + v10 + 8),
                  -1,
                  1,
                  3,
                  -1)) != 0LL )
    {
      v14 = 2LL * v7++;
      v4[v14] = v13;
    }
    else
    {
      v3 = -1073741438;
    }
    if ( v7 > StartPosition->bNumInterfaces )
      return (unsigned int)-1073741438;
    v12 = (unsigned int)(v12 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  if ( v7 == StartPosition->bNumInterfaces )
    v4[2 * v7] = 0LL;
  else
    return (unsigned int)-1073741438;
  return (unsigned int)v3;
}
