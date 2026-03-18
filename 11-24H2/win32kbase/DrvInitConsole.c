/*
 * XREFs of DrvInitConsole @ 0x1401794EC
 * Callers:
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsRemoteConnection @ 0x14008C9F0 (UserIsRemoteConnection.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ldevLoadDriver @ 0x140101130 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1401015E0 (ldevUnloadImage.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvInitConsole(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rsi
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  unsigned int v5; // eax
  _DWORD *i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  char *Driver; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( UserIsRemoteConnection(v3) )
    goto LABEL_19;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_19;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
    && ResultLength > 0x10 )
  {
    v4 = (_DWORD *)PALLOCNOZ(ResultLength, 0x706D7447u);
    if ( v4 )
    {
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v4, ResultLength, &ResultLength) >= 0 )
      {
        v5 = v4[2];
        if ( v5 >= 0x12 )
        {
          for ( i = v4 + 3; i <= (_DWORD *)((char *)v4 + v5 - 6); i = (_DWORD *)((char *)i + 2) )
          {
            if ( *(_QWORD *)i == 0x45005300410042LL
              && *((_QWORD *)i + 1) == 0x45004400490056LL
              && *((_WORD *)i + 8) == 79 )
            {
              v1 = 1;
              break;
            }
          }
        }
      }
      GreDeleteFastMutex((char *)v4);
    }
  }
  ZwClose(KeyHandle);
  if ( !v1 )
  {
LABEL_19:
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 23991;
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 23986;
  }
  v8 = *(_QWORD *)(W32GetSessionState(v7) + 88);
  *(_DWORD *)(v8 + 1060) = v1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8);
  v10 = (*(__int64 (**)(void))(DxgkWin32kInterface + 80))();
  *(_DWORD *)(v2 + 1140) = v10;
  v11 = PALLOCMEM((unsigned int)(8 * v10), 0x616C6147u);
  v12 = *(unsigned int *)(v2 + 1140);
  *(_QWORD *)(v2 + 1144) = v11;
  v13 = PALLOCMEM(v12, 0x616C6147u);
  v14 = *(_QWORD *)(v2 + 1144) == 0LL;
  *(_QWORD *)(v2 + 1152) = v13;
  if ( v14 || !v13 )
    return 3221225495LL;
  Driver = (char *)ldevLoadDriver(L"CDD", 1, 1);
  if ( Driver )
    ldevUnloadImage(Driver);
  DrvUpdateGraphicsDeviceList(1);
  return 0LL;
}
