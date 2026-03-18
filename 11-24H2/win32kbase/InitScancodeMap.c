/*
 * XREFs of InitScancodeMap @ 0x14009E260
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     FastGetProfileValue @ 0x14009F680 (FastGetProfileValue.c)
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

int __fastcall InitScancodeMap(__int64 a1)
{
  __int64 v1; // rcx
  const WCHAR *v2; // rsi
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // rbx
  BYTE *Text; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  NTSTATUS v9; // eax
  ULONG v10; // ebx
  __int64 v11; // rcx
  const WCHAR *v12; // rsi
  int v13; // ebx
  BYTE *v14; // rdx
  _DWORD *v15; // rax
  void *v16; // rbx
  NTSTATUS v17; // eax
  ULONG v18; // ebx
  __int64 UserSessionState; // rax
  __int64 v20; // rcx
  void *v21; // rax
  void *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _DWORD *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  PULONG ResultLength; // [rsp+30h] [rbp-61h]
  PULONG ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG Length; // [rsp+48h] [rbp-49h] BYREF
  int v34; // [rsp+4Ch] [rbp-45h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+50h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int128 KeyValueInformation; // [rsp+68h] [rbp-29h] BYREF
  _WORD v38[40]; // [rsp+78h] [rbp-19h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 12896) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    GreDeleteFastMutex(*(char **)(UserSessionState + 12896));
    *(_QWORD *)(W32GetUserSessionState(v20) + 12896) = 0LL;
  }
  Length = 0;
  v2 = L"Scancode Map";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v3 = -1LL;
  v34 = *(_DWORD *)(W32GetUserSessionState(v1) + 62824);
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v38[0] = 0;
    v4 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)L"Scancode Map", &MessageResourceEntry) >= 0 )
    {
      v5 = -1LL;
      Text = MessageResourceEntry->Text;
      do
        ++v5;
      while ( *(_WORD *)&Text[2 * v5] );
      v4 = v5 - 2;
      if ( v4 < 0 )
        goto LABEL_8;
      if ( v4 > 39 )
        v4 = 39;
      memmove(v38, Text, 2LL * v4);
    }
    v38[v4] = 0;
LABEL_8:
    v2 = v38;
  }
  while ( 1 )
  {
    v8 = (void *)OpenCacheKeyEx(0LL);
    if ( !v8 )
      break;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v2);
    v9 = ZwQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v9 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      ZwClose(v8);
      v10 = Length;
LABEL_12:
      if ( v10 - 13 <= 0xFFF1 )
      {
        v21 = (void *)Win32AllocPoolZInitImpl(256LL, v10 + 8LL, 0x6D637355u);
        v22 = v21;
        if ( v21 )
        {
          LODWORD(ResultLength) = v10;
          FastGetProfileValue(0LL, v21, (size_t)ResultLength, 0);
          *(_QWORD *)(W32GetUserSessionState(v23) + 12896) = v22;
        }
      }
      break;
    }
    if ( v9 == -2147483643 )
    {
      ZwClose(v8);
      v10 = DWORD2(KeyValueInformation);
      goto LABEL_12;
    }
    if ( !v34 )
    {
      ZwClose(v8);
      break;
    }
    ZwClose(v8);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v7) + 12904) )
  {
    v24 = W32GetUserSessionState(v11);
    GreDeleteFastMutex(*(char **)(v24 + 12904));
    *(_QWORD *)(W32GetUserSessionState(v25) + 12904) = 0LL;
    *(_DWORD *)(W32GetUserSessionState(v26) + 12912) = 0;
  }
  Length = 0;
  v12 = L"Scancode Map Ex";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v34 = *(_DWORD *)(W32GetUserSessionState(v11) + 62824);
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v38[0] = 0;
    v13 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)L"Scancode Map Ex", &MessageResourceEntry) >= 0 )
    {
      v14 = MessageResourceEntry->Text;
      do
        ++v3;
      while ( *(_WORD *)&v14[2 * v3] );
      v13 = v3 - 2;
      if ( (int)v3 - 2 < 0 )
        goto LABEL_20;
      if ( v13 > 39 )
        v13 = 39;
      memmove(v38, v14, 2LL * v13);
    }
    v38[v13] = 0;
LABEL_20:
    v12 = v38;
  }
  while ( 1 )
  {
    v15 = (_DWORD *)OpenCacheKeyEx(0LL);
    v16 = v15;
    if ( !v15 )
      return (int)v15;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v12);
    v17 = ZwQueryValueKey(v16, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v17 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      LODWORD(v15) = ZwClose(v16);
      v18 = Length;
LABEL_24:
      if ( v18 >= 0x10 && (v18 & 0xF) == 0 )
      {
        v15 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v18, 0x6D637355u);
        v27 = v15;
        if ( v15 )
        {
          LODWORD(ResultLengtha) = v18;
          FastGetProfileValue(0LL, v15, (size_t)ResultLengtha, 0);
          *(_QWORD *)(W32GetUserSessionState(v28) + 12904) = v27;
          v15 = (_DWORD *)W32GetUserSessionState(v29);
          v15[3228] = v18 >> 4;
        }
      }
      return (int)v15;
    }
    if ( v17 == -2147483643 )
    {
      LODWORD(v15) = ZwClose(v16);
      v18 = DWORD2(KeyValueInformation);
      goto LABEL_24;
    }
    if ( !v34 )
    {
      LODWORD(v15) = ZwClose(v16);
      return (int)v15;
    }
    ZwClose(v16);
  }
}
