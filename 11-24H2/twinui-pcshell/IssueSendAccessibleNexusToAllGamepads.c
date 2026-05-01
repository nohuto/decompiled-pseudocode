/*
 * XREFs of IssueSendAccessibleNexusToAllGamepads @ 0x1806CA100
 * Callers:
 *     EnumerateAndIssueToXInputDevice @ 0x1806C9D98 (EnumerateAndIssueToXInputDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     IssueSendAccessibleNexus @ 0x1806CA070 (IssueSendAccessibleNexus.c)
 */

signed int __fastcall IssueSendAccessibleNexusToAllGamepads(void *a1, int a2)
{
  signed int result; // eax
  unsigned __int8 v5; // bl
  DWORD v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( DeviceIoControl(a1, 0x80006000, 0LL, 0, &v7, 0xCu, &v6, 0LL) )
  {
    if ( (v7 & 0x8000000000LL) == 0 && (v5 = 0, BYTE2(v7)) )
    {
      while ( 1 )
      {
        result = IssueSendAccessibleNexus(a1, v5, a2);
        if ( result >= 0 )
          break;
        if ( ++v5 >= BYTE2(v7) )
          return -2147467259;
      }
    }
    else
    {
      return -2147467259;
    }
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
