/*
 * XREFs of DpiKsrSetBootGraphicsInformation @ 0x14025131C
 * Callers:
 *     DxgkStopAdapters @ 0x1401D78C8 (DxgkStopAdapters.c)
 *     DpiFdoHandleSystemPower @ 0x1403B9E38 (DpiFdoHandleSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

NTSTATUS DpiKsrSetBootGraphicsInformation()
{
  __int64 SystemInformation; // [rsp+20h] [rbp-30h] BYREF
  int v2; // [rsp+28h] [rbp-28h]
  __int64 v3; // [rsp+2Ch] [rbp-24h]
  __int64 v4; // [rsp+34h] [rbp-1Ch]
  int v5; // [rsp+3Ch] [rbp-14h]

  v4 = 0LL;
  v5 = 0;
  v2 = xmmword_140161070;
  v3 = DWORD1(xmmword_140161070);
  SystemInformation = xmmword_140161080;
  if ( HIDWORD(xmmword_140161070) == 20 )
  {
    HIDWORD(v4) = 3;
    HIDWORD(v3) = DWORD2(xmmword_140161070) / 3;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  if ( HIDWORD(xmmword_140161070) == 21 || HIDWORD(xmmword_140161070) == 22 )
  {
    HIDWORD(v4) = 4;
    goto LABEL_8;
  }
  if ( (unsigned int)(HIDWORD(xmmword_140161070) - 32) < 2 )
  {
    HIDWORD(v4) = 2;
LABEL_8:
    HIDWORD(v3) = DWORD2(xmmword_140161070) >> 2;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  HIDWORD(v4) = 0;
  return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
}
