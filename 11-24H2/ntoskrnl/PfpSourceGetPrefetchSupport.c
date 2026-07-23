/*
 * XREFs of PfpSourceGetPrefetchSupport @ 0x140AB1900
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x140936C3C (PfpPrefetchPrivatePages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtOpenProcess @ 0x1408505E0 (NtOpenProcess.c)
 */

__int64 __fastcall PfpSourceGetPrefetchSupport(int *a1, __int64 a2)
{
  PVOID v2; // r8
  HANDLE v3; // rbx
  int v6; // ecx
  unsigned __int64 v7; // rax
  NTSTATUS v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE ProcessHandle; // [rsp+A8h] [rbp+28h] BYREF

  v2 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(_DWORD *)a2 = *a1;
  v6 = *a1;
  Object = 0LL;
  ProcessHandle = 0LL;
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_12;
  }
  if ( v6 != 2 )
    return (unsigned int)-1073741637;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueThread = 0LL;
  v7 = (unsigned int)a1[1];
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = (HANDLE)v7;
  v8 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v8 >= 0 )
  {
    v3 = ProcessHandle;
    v9 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)ProcessHandle,
           0x1FFFFF,
           (__int64)PsProcessType,
           0,
           0x73576650u,
           &Object,
           0LL,
           0LL);
    v2 = Object;
    v8 = v9;
    if ( v9 < 0 )
      goto LABEL_13;
    v10 = *((_QWORD *)a1 + 2);
    if ( v10 && v10 != ((*((_QWORD *)Object + 58) ^ *((_QWORD *)Object + 63)) & 0x1FFFFFFFFFFFFFFFLL) )
    {
      v8 = -1073741275;
      goto LABEL_13;
    }
    *(_QWORD *)(a2 + 8) = v3;
    v3 = 0LL;
LABEL_12:
    v8 = 0;
LABEL_13:
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x73576650u);
    goto LABEL_15;
  }
  v3 = ProcessHandle;
LABEL_15:
  if ( v3 )
    NtClose(v3);
  return (unsigned int)v8;
}
