/*
 * XREFs of LdrpResMapFile @ 0x180109564
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlReleaseRelativeName @ 0x180094110 (RtlReleaseRelativeName.c)
 *     LdrpResFileSize @ 0x180095274 (LdrpResFileSize.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800DDCB0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180160AF0 (ZwCreateFile.c)
 */

NTSTATUS __fastcall LdrpResMapFile(HANDLE FileHandle, PVOID *BaseModule, PSIZE_T Size, int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  NTSTATUS v11; // ebx
  NTSTATUS result; // eax
  __int64 v13; // rcx
  wchar_t *Buffer; // r15
  unsigned __int64 ContainingDirectory; // rdx
  HANDLE SectionHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp-80h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+A8h] [rbp-60h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+B8h] [rbp-50h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+C0h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+158h] [rbp+50h] BYREF

  v20[0] = 2752552LL;
  v22[0] = 2621478LL;
  Handle = 0LL;
  SectionHandle = 0LL;
  v20[1] = L"LdrpResMapFile Enter";
  ViewSize = 0LL;
  v22[1] = L"LdrpResMapFile Exit";
  NtFileName = 0LL;
  SectionOffset.QuadPart = 0LL;
  memset(&ObjectAttributes, 0, 44);
  BaseAddress = 0LL;
  v17 = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  IoStatusBlock = 0LL;
  v8 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v20, *(unsigned __int8 *)v13);
  }
  if ( !FileHandle || !BaseModule || !Size )
    goto LABEL_30;
  *BaseModule = 0LL;
  if ( LdrRemoveLoadAsDataTable(FileHandle, BaseModule, Size, a4 | 0x200000) >= 0 )
  {
    v11 = -1073741302;
    goto LABEL_17;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( !RtlDosPathNameToRelativeNtPathName_U((PCWSTR)FileHandle, &NtFileName, 0LL, &RelativeName) )
    {
      v11 = -1073020927;
      goto LABEL_17;
    }
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(Buffer != 0LL));
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwCreateFile(&Handle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
    if ( Buffer )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
    if ( v11 < 0 )
      goto LABEL_17;
    FileHandle = Handle;
    goto LABEL_11;
  }
  if ( (a4 & 0x800) == 0 )
  {
LABEL_30:
    v11 = -1073741811;
    goto LABEL_17;
  }
  Handle = FileHandle;
LABEL_11:
  if ( (a4 & 0x20000) == 0 )
  {
LABEL_12:
    v11 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
    if ( (~(_WORD)a4 & 0x800) != 0 )
      NtClose(Handle);
    if ( v11 >= 0 )
    {
      v11 = ZwMapViewOfSection(
              SectionHandle,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseAddress,
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewShare,
              0,
              2u);
      NtClose(SectionHandle);
      if ( v11 >= 0 )
      {
        *BaseModule = (PVOID)((unsigned __int64)BaseAddress | 1);
        *Size = ViewSize;
      }
    }
    goto LABEL_17;
  }
  result = LdrpResFileSize((char *)FileHandle, &v17);
  if ( result < 0 )
    return result;
  if ( (unsigned int)v17 <= *Size )
  {
    FileHandle = Handle;
    goto LABEL_12;
  }
  v11 = -1073741793;
LABEL_17:
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v22, *(unsigned __int8 *)v10);
  }
  return v11;
}
