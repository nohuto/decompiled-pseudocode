/*
 * XREFs of InitCreateObjectDirectory @ 0x1402E5628
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEditionCreateDefaultWindowStation @ 0x1401915CC (ApiSetEditionCreateDefaultWindowStation.c)
 */

__int64 InitCreateObjectDirectory()
{
  CTouchProcessor *v0; // rcx
  bool v1; // bl
  bool v2; // di
  __int64 UserSessionState; // rax
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rbx
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int DefaultWindowStation; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v0 = WPP_GLOBAL_Control;
  v1 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v4) = v2;
    LOBYTE(v5) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v4,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      20,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  v6 = W32GetUserSessionState(v0);
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(v6 + 63648));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v7 = *(void **)(v6 + 63576);
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.SecurityDescriptor = v7;
  DefaultWindowStation = ZwCreateDirectoryObject((PHANDLE)(v6 + 63640), 4u, &ObjectAttributes);
  if ( DefaultWindowStation >= 0 )
    DefaultWindowStation = ApiSetEditionCreateDefaultWindowStation(v9, v8);
  GreDeleteFastMutex(*(char **)(v6 + 63576));
  *(_QWORD *)(v6 + 63576) = 0LL;
  return (unsigned int)DefaultWindowStation;
}
