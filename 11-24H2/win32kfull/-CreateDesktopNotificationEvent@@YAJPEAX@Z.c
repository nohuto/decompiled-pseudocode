/*
 * XREFs of ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x14020F144
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401CA8E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CreateDesktopNotificationEvent(void *a1, __int64 a2)
{
  unsigned int CurrentWin32kSessionId; // eax
  __int64 result; // rax
  unsigned __int16 *v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  NTSTATUS v10; // eax
  PVOID v11; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void **Handle; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  void *DirectoryHandle; // [rsp+48h] [rbp-C0h] BYREF
  void *EventHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v23[256]; // [rsp+A8h] [rbp-60h] BYREF

  EventHandle = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  DirectoryHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68868) )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    result = RtlStringCchPrintfW(v23, 256LL, L"\\Sessions\\%ld\\BaseNamedObjects", CurrentWin32kSessionId);
    if ( (int)result < 0 )
      return result;
    v5 = v23;
  }
  else
  {
    v5 = L"\\BaseNamedObjects";
  }
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v5);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"WinSta0_DesktopSwitch");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.Attributes = 640;
    ObjectAttributes.SecurityDescriptor = a1;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    ZwClose(DirectoryHandle);
    if ( v6 >= 0 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      DestinationString[0] = 0LL;
      v10 = ObReferenceObjectByHandle(
              EventHandle,
              0x1F0003u,
              (POBJECT_TYPE)ExEventObjectType,
              0,
              DestinationString,
              0LL);
      v11 = DestinationString[0];
      v6 = v10;
      *(PVOID *)(UserSessionState + 63008) = DestinationString[0];
      if ( v10 >= 0 )
      {
        UserGdiSessionState = W32GetUserGdiSessionState(v11);
        KeAttachProcess(*(PRKPROCESS *)(UserGdiSessionState + 40));
        Handle = (void **)(W32GetUserSessionState(v14, v13) + 63000);
        v18 = W32GetUserSessionState(v17, v16);
        v6 = ObOpenObjectByPointer(*(PVOID *)(v18 + 63008), 0, 0LL, 0x1F0003u, 0LL, 0, Handle);
        KeDetachProcess();
      }
      ZwClose(EventHandle);
    }
  }
  return (unsigned int)v6;
}
