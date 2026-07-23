/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1800B4FC0
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     EtwpCreateEtwThread @ 0x1800B4ED0 (EtwpCreateEtwThread.c)
 *     RtlCreateUserThread @ 0x1800B4F50 (RtlCreateUserThread.c)
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180133EC8 (RtlpWow64SuspendProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlSetProcessDebugInformation @ 0x180135690 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtCreateThreadEx @ 0x180164B30 (NtCreateThreadEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpCreateUserThreadEx(
        HANDLE ProcessHandle,
        void *a2,
        int a3,
        unsigned int a4,
        SIZE_T MaximumStackSize,
        SIZE_T StackSize,
        int a7,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        HANDLE *a10,
        _OWORD *a11)
{
  SIZE_T ZeroBits; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r10d
  ULONG CreateFlags; // ecx
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int128 v22; // [rsp+98h] [rbp-68h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int128 v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-10h]

  ZeroBits = a4;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  v22 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return -1073741811;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  v14 = a3 & 1 | 2;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityDescriptor = a2;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  AttributeList.Attributes[0].Value = (ULONG_PTR)&v22;
  AttributeList.Attributes[0].Attribute = 65539LL;
  v15 = v14 | 4;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  AttributeList.TotalLength = 40LL;
  if ( (a3 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x10;
  if ( (a3 & 0x10) == 0 )
    v16 = v15;
  v17 = v16 | 0x20;
  if ( (a3 & 0x20) == 0 )
    v17 = v16;
  CreateFlags = v17 | 0x40;
  if ( (a3 & 0x40) == 0 )
    CreateFlags = v17;
  result = NtCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             StartRoutine,
             Argument,
             CreateFlags,
             ZeroBits,
             StackSize,
             MaximumStackSize,
             &AttributeList);
  if ( result >= 0 )
  {
    if ( a10 )
      *a10 = ThreadHandle;
    else
      NtClose(ThreadHandle);
    if ( a11 )
      *a11 = v22;
    return 0;
  }
  return result;
}
