/*
 * XREFs of ExpInitializeCallbacks @ 0x140C44978
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtCreateDirectoryObject @ 0x140A3B280 (NtCreateDirectoryObject.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 */

char ExpInitializeCallbacks()
{
  unsigned int v0; // ebx
  PCALLBACK_OBJECT *v1; // rcx
  _QWORD DestinationString[3]; // [rsp+20h] [rbp-91h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-71h] BYREF
  __int16 v6; // [rsp+78h] [rbp-39h] BYREF
  char v7; // [rsp+7Ah] [rbp-37h]
  int v8; // [rsp+80h] [rbp-31h]
  __int128 v9; // [rsp+84h] [rbp-2Dh]
  int v10; // [rsp+94h] [rbp-1Dh]
  int v11; // [rsp+9Ch] [rbp-15h]
  _QWORD *(__fastcall *v12)(__int64); // [rsp+C0h] [rbp+Fh]

  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  ExpCallbackListLock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  qword_140EFAAB8 = (__int64)&ExpCallbackListHead;
  ExpCallbackListHead = (__int64)&ExpCallbackListHead;
  *(_OWORD *)&DestinationString[1] = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"Callback");
  memset_0(&v6, 0, 0x78uLL);
  v7 |= 4u;
  v6 = 120;
  v8 = 256;
  v12 = ExpDeleteCallback;
  v11 = 512;
  v9 = ExpCallbackMapping;
  v10 = 2031617;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)&DestinationString[1], &v6, 0LL, (__int64)&ExCallbackObjectType) < 0 )
    return 0;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"\\Callback");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  NtClose(DirectoryHandle);
  LOWORD(ExpCallbackEvent.Header.Lock) = 0;
  ExpCallbackEvent.Header.SignalState = 0;
  ExpCallbackEvent.Header.WaitListHead.Blink = &ExpCallbackEvent.Header.WaitListHead;
  v0 = 0;
  ExpCallbackEvent.Header.WaitListHead.Flink = &ExpCallbackEvent.Header.WaitListHead;
  ExpCallbackEvent.Header.Size = 6;
  while ( ExpInitializeCallback[2 * v0] )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)ExpInitializeCallback[2 * v0 + 1]);
    v1 = (PCALLBACK_OBJECT *)ExpInitializeCallback[2 * v0];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(v1, &ObjectAttributes, 1u, 1u) < 0 )
      return 0;
    ++v0;
  }
  return 1;
}
