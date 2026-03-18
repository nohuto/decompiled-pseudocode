/*
 * XREFs of ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1401CA53C
 * Callers:
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401CA8E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x140263FDC (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

NTSTATUS __fastcall GrepDwmCreateComposedEvent(wchar_t *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  unsigned int v5; // esi
  NTSTATUS v6; // ebx
  unsigned __int16 *v7; // rdi
  unsigned __int64 v8; // r14
  NTSTATUS result; // eax
  Gre::Base *v10; // rcx
  void *v11; // rcx
  int CurrentWin32kSessionId; // [rsp+30h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  void *EventHandle; // [rsp+C0h] [rbp+67h] BYREF
  void *DirectoryHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned __int16 *v17; // [rsp+D0h] [rbp+77h] BYREF
  unsigned __int64 v18; // [rsp+D8h] [rbp+7Fh] BYREF

  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = Gre::Base::Globals((Gre::Base *)a1);
  v4 = Gre::Base::Globals(v3);
  ++*(_DWORD *)(*((_QWORD *)v4 + 221) + 1573020LL);
  v5 = *(_DWORD *)(*((_QWORD *)v2 + 221) + 1573020LL);
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  v6 = RtlStringCchPrintfExW(
         a1 + 96,
         0x44uLL,
         &v17,
         &v18,
         0x1000u,
         L"\\Sessions\\%ld\\BaseNamedObjects",
         CurrentWin32kSessionId);
  if ( v6 < 0
    || (RtlInitUnicodeString(&DestinationString, a1 + 96),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v6 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes),
        v6 < 0) )
  {
    v11 = EventHandle;
LABEL_11:
    if ( v11 )
      ObCloseHandle(v11, 0);
    if ( DirectoryHandle )
      ObCloseHandle(DirectoryHandle, 0);
    return v6;
  }
  else
  {
    v7 = v17;
    v8 = v18;
    *v17 = 92;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = &unk_140354A60;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    while ( 1 )
    {
      result = RtlStringCchPrintfW(v7 + 1, v8 - 1, L"DwmComposedEvent_%x", v5);
      if ( result < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v7 + 1);
      result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      v6 = result;
      if ( result != -1073741771 )
      {
        if ( result < 0 )
          return result;
        *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v10) + 221) + 1573020LL) = v5;
        v11 = 0LL;
        *((_QWORD *)a1 + 41) = EventHandle;
        EventHandle = 0LL;
        goto LABEL_11;
      }
      ++v5;
    }
  }
  return result;
}
