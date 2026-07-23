/*
 * XREFs of WaitForWerSvc @ 0x1800CEE9C
 * Callers:
 *     SendMessageToWERService @ 0x1800CFEA0 (SendMessageToWERService.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenEvent @ 0x180163A20 (NtOpenEvent.c)
 */

NTSTATUS __fastcall WaitForWerSvc(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  char v3; // dl
  LARGE_INTEGER *v4; // r8
  NTSTATUS v5; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v6[0] = 4718662LL;
  v6[1] = L"\\KernelObjects\\SystemErrorPortReady";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  memset(&ObjectAttributes.Attributes, 0, 24);
  EventHandle = 0LL;
  v9 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  result = NtOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (_DWORD)v1 == -1 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      v9 = -10000 * v1;
    }
    v4 = (LARGE_INTEGER *)&v9;
    if ( v3 )
      v4 = 0LL;
    v5 = NtWaitForSingleObject(EventHandle, 0, v4);
    NtClose(EventHandle);
    return v5;
  }
  return result;
}
