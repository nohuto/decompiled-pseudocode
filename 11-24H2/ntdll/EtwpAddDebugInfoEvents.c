/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x18008145C
 * Callers:
 *     EtwpAddProviderTrackingInfo @ 0x18001F3FC (EtwpAddProviderTrackingInfo.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x18007ECD0 (RtlUnicodeToMultiByteN.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     EtwpAddEventToBuffer @ 0x1800F3000 (EtwpAddEventToBuffer.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

int __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  int result; // eax
  __int64 v7; // rax
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  _DWORD v10[4]; // [rsp+40h] [rbp-358h] BYREF
  CHAR MultiByteString[272]; // [rsp+50h] [rbp-348h] BYREF
  WCHAR UnicodeString[264]; // [rsp+160h] [rbp-238h] BYREF

  v10[0] = 0;
  v3 = a3 - *(_DWORD *)(a2 + 48);
  result = EtwpQueryRegString(
             L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",
             L"BuildLabEx",
             UnicodeString,
             260LL);
  if ( result >= 0 )
  {
    result = RtlUnicodeToMultiByteN(MultiByteString, 0x104u, 0LL, UnicodeString, 0x208u);
    if ( result >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( MultiByteString[v7] );
      result = EtwpAddEventToBuffer(a2, 66LL, a2 + 88, MultiByteString, (int)v7 + 1, v3, v10);
      if ( result < 0 )
        return result;
      result = (v10[0] + 7) & 0xFFFFFFF8;
      v3 -= result;
    }
  }
  v8 = (__int64 **)(a1 + 448);
  v9 = *v8;
  while ( v9 != (__int64 *)v8 )
  {
    result = EtwpAddEventToBuffer(a2, 64LL, a2 + 88, (char *)v9 + 28, *((_DWORD *)v9 + 5) - 4, v3, v10);
    if ( result < 0 )
      break;
    v9 = (__int64 *)*v9;
    result = (v10[0] + 7) & 0xFFFFFFF8;
    v3 -= result;
  }
  return result;
}
