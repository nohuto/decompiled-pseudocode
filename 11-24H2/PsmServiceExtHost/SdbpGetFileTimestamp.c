/*
 * XREFs of SdbpGetFileTimestamp @ 0x180092F44
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x180093640 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpOpenLocalDatabaseEx @ 0x180094F04 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpGetFileTimestamp(_QWORD *a1, const WCHAR *a2, int a3)
{
  struct _UNICODE_STRING *p_DestinationString; // rbx
  NTSTATUS v7; // ebx
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  __int128 FileInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  _BYTE v24[24]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v25; // [rsp+108h] [rbp+8h]

  v16 = 0LL;
  FileHandle = 0LL;
  v23 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v22 = 0LL;
  memset_0(v24, 0, 0x48uLL);
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  p_DestinationString = &DestinationString;
  if ( _wcsnicmp(a2, L"\\SystemRoot\\", 0xCuLL) )
  {
    v7 = RtlDosPathNameToNtPathName_U_WithStatus(a2, &v16, 0LL, 0LL);
    if ( v7 < 0 )
      goto LABEL_18;
    p_DestinationString = (struct _UNICODE_STRING *)&v16;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = p_DestinationString;
  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( !ModuleHandleW )
  {
    v7 = -1073741823;
    goto LABEL_18;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "NtQueryInformationByName");
  if ( !ProcAddress )
    goto LABEL_10;
  v10 = ((__int64 (__fastcall *)(struct _OBJECT_ATTRIBUTES *, struct _IO_STATUS_BLOCK *, _BYTE *, __int64, int))ProcAddress)(
          &ObjectAttributes,
          &IoStatusBlock,
          v24,
          72LL,
          68);
  v7 = v10;
  if ( v10 == -1073741772 )
    goto LABEL_18;
  if ( v10 < 0 )
  {
LABEL_10:
    v13 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x60u, 0LL, 0);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v7 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
      if ( v7 >= 0 )
      {
        v11 = *((_QWORD *)&v22 + 1);
        v12 = v22;
        v25 = v22;
        goto LABEL_15;
      }
    }
    else if ( v13 == -1073741772 )
    {
      goto LABEL_18;
    }
    AslLogCallPrintf(1LL);
    goto LABEL_18;
  }
  v11 = *((_QWORD *)&v25 + 1);
  v12 = v25;
LABEL_15:
  if ( a3 )
    v11 = v12;
  v7 = 0;
  *a1 = v11;
LABEL_18:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v7;
}
