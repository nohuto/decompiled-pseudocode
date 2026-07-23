/*
 * XREFs of LdrpMapResourceFile @ 0x1405E509C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x1408EB520 (MmMapViewInSessionSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140A41A80 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, UNICODE_STRING *a2, HANDLE *a3, _QWORD *a4, ULONG_PTR *a5)
{
  PVOID v8; // rdi
  NTSTATUS v9; // ebx
  unsigned __int16 MajorSubsystemVersion; // si
  PIMAGE_NT_HEADERS v11; // rsi
  NTSTATUS v12; // eax
  int v13; // eax
  ULONG_PTR *v14; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-41h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-39h] BYREF
  PVOID MappedBase; // [rsp+70h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-29h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+7h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+5Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  v8 = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  if ( a1 && a2 && a4 )
  {
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
    if ( OutHeaders )
    {
      MajorSubsystemVersion = OutHeaders->OptionalHeader.MajorSubsystemVersion;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwCreateFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( v9 >= 0 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateSection(
               &SectionHandle,
               0xF0005u,
               &ObjectAttributes,
               &MaximumSize,
               MajorSubsystemVersion < 6u ? 8 : 2,
               0x8000000u,
               FileHandle);
        if ( v9 >= 0 )
        {
          OutHeaders = 0LL;
          v9 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, (PVOID *)&OutHeaders, 0LL);
          ZwClose(SectionHandle);
          v11 = OutHeaders;
          if ( v9 >= 0 )
          {
            v12 = MmMapViewInSessionSpace(OutHeaders, &MappedBase, &ViewSize);
            v8 = MappedBase;
            v9 = v12;
            if ( v12 >= 0 )
            {
              OutHeaders = 0LL;
              RtlImageNtHeaderEx(1u, MappedBase, 0LL, &OutHeaders);
              v13 = v9;
              if ( !OutHeaders )
                v13 = -1073741701;
              v9 = v13;
            }
          }
          if ( v11 )
            ObfDereferenceObjectWithTag(v11, 0x746C6644u);
          if ( v9 < 0 )
          {
            if ( v8 )
              MmUnmapViewInSystemSpace(v8);
          }
          else
          {
            v14 = a5;
            *a4 = v8;
            if ( v14 )
              *v14 = ViewSize;
            if ( a3 )
            {
              *a3 = FileHandle;
              return (unsigned int)v9;
            }
          }
        }
      }
    }
    else
    {
      v9 = -1073741701;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v9;
  }
  return 3221225485LL;
}
