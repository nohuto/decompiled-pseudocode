/*
 * XREFs of ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18005F850
 * Callers:
 *     AudioServerCreateStream @ 0x18008D370 (AudioServerCreateStream.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall GetThreadLogonSessionStringSid(unsigned __int16 **a1)
{
  _DWORD *v1; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  __int64 v6; // rcx
  _DWORD *v8; // rdx
  DWORD TokenInformationLength; // [rsp+58h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+30h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+38h] BYREF

  TokenHandle = 0LL;
  v1 = 0LL;
  TokenInformationLength = 0;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
    if ( !GetTokenInformation(TokenHandle, TokenGroups, 0LL, 0, &TokenInformationLength) )
    {
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError != 122 )
        goto LABEL_9;
      v1 = CoTaskMemAlloc(TokenInformationLength);
      if ( !v1 )
      {
        v5 = -2147024882;
LABEL_26:
        if ( StringSid )
        {
          LocalFree(StringSid);
          StringSid = 0LL;
        }
        goto LABEL_12;
      }
    }
    if ( GetTokenInformation(TokenHandle, TokenGroups, v1, TokenInformationLength, &TokenInformationLength) )
    {
      v6 = 0LL;
      if ( !*v1 )
        goto LABEL_7;
      v8 = v1 + 4;
      do
      {
        if ( (*v8 & 0xC0000000) == 0xC0000000 )
          break;
        v6 = (unsigned int)(v6 + 1);
        v8 += 4;
      }
      while ( (unsigned int)v6 < *v1 );
      if ( (unsigned int)v6 >= *v1 )
      {
LABEL_7:
        v5 = 1365;
        goto LABEL_12;
      }
      if ( ConvertSidToStringSidW(*(PSID *)&v1[4 * v6 + 2], &StringSid) )
      {
        v5 = 0;
        *a1 = StringSid;
        goto LABEL_12;
      }
    }
  }
  LastError = GetLastError();
  v5 = LastError;
LABEL_9:
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( v5 < 0 )
    goto LABEL_26;
LABEL_12:
  if ( v1 )
    CoTaskMemFree(v1);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("GetThreadLogonSessionStringSid", 390, v5);
  return (unsigned int)v5;
}
