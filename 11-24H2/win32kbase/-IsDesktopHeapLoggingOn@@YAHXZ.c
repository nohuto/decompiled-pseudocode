/*
 * XREFs of ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x14009E788
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall IsDesktopHeapLoggingOn(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  void *v3; // rsi
  int v5; // [rsp+30h] [rbp-40h]
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v9; // [rsp+54h] [rbp-1Ch]

  v1 = 0;
  v2 = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  v5 = *(_DWORD *)(W32GetUserSessionState(a1) + 62824);
  while ( 1 )
  {
    v3 = (void *)OpenCacheKeyEx(0LL);
    if ( !v3 )
      break;
    RtlInitUnicodeString(&DestinationString, L"DesktopHeapLogging");
    if ( ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v2 = v9;
      v5 = 0;
    }
    else
    {
      v2 = v5 != 0 ? v2 : 0;
    }
    ZwClose(v3);
    if ( !v5 )
      goto LABEL_6;
  }
  v2 = 0;
LABEL_6:
  LOBYTE(v1) = v2 != 0;
  return v1;
}
