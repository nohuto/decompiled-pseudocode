/*
 * XREFs of CheckDesktopPolicy @ 0x14009FC30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall CheckDesktopPolicy(PCUNICODE_STRING Source, PCWSTR SourceString)
{
  __int64 UserSessionState; // rax
  HANDLE v5; // rbx
  int v6; // ebx
  BYTE *Text; // rdx
  __int64 v8; // rbx
  void *v9; // rsi
  NTSTATUS v11; // ebx
  int v12; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v17[80]; // [rsp+60h] [rbp-A0h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  UserSessionState = W32GetUserSessionState(Source);
  v12 = *(_DWORD *)(UserSessionState + 62824) & 6;
  if ( !v12 )
    return 0LL;
  v5 = *(HANDLE *)(W32GetUserSessionState(*(_DWORD *)(UserSessionState + 62824) & 6) + 63584);
  if ( PsGetCurrentProcessId() == v5 )
    return 0LL;
  if ( ((unsigned __int64)SourceString & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_9;
  MessageResourceEntry = 0LL;
  v6 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)SourceString, &MessageResourceEntry) < 0 )
    goto LABEL_14;
  Text = MessageResourceEntry->Text;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&Text[2 * v8] );
  v6 = v8 - 2;
  if ( v6 >= 0 )
  {
    if ( v6 > 79 )
      v6 = 79;
    memmove(v17, Text, 2LL * v6);
LABEL_14:
    v17[v6] = 0;
  }
  SourceString = v17;
LABEL_9:
  do
  {
    v9 = (void *)OpenCacheKeyEx(Source);
    if ( !v9 )
      break;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v11 = ZwQueryValueKey(v9, &DestinationString, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
    ZwClose(v9);
    if ( (v11 & 0xC0000000) != 0xC0000000 )
    {
      UserSetLastError(1260);
      return 1LL;
    }
  }
  while ( v12 );
  return 0LL;
}
