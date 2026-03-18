/*
 * XREFs of ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x14014A2E4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 VerifyDWMApiSetImplementation(void)
{
  char v0; // di
  NTSTATUS v1; // ebx
  bool v2; // si
  __int64 UserSessionState; // rax
  int v4; // r8d
  int v5; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\dwminit.dll");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v0 = 1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v1 < 0 )
  {
    if ( v1 != -1073741772 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v0 = 0;
      }
      v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v4) = v2;
        LOBYTE(v5) = v0;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v5,
          v4,
          *(_QWORD *)(UserSessionState + 69400),
          3,
          3,
          12,
          (__int64)&WPP_9723802cc44d3ab29e76f6ade2a2f4e4_Traceguids,
          v1);
      }
    }
  }
  else
  {
    ZwClose(FileHandle);
  }
  return (unsigned int)v1;
}
