/*
 * XREFs of ExpQueryCodeIntegrityCertificateInfo @ 0x140A6E09C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1406A6910 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1406A6950 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1406A6D50 (ZwCreateSection.c)
 *     SeValidateFileAsImageType @ 0x14078E40C (SeValidateFileAsImageType.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x140942760 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A6E1F0 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall ExpQueryCodeIntegrityCertificateInfo(__int64 a1, __int64 a2)
{
  PVOID v2; // rsi
  unsigned int v3; // r12d
  int v4; // edi
  NTSTATUS v5; // eax
  __int64 QuadPart; // rbx
  __int64 v8; // r9
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  FileSize.QuadPart = 0LL;
  ViewSize = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      v3 = 2;
    }
    else
    {
      if ( (_DWORD)a2 != 2 )
      {
        v4 = -1073741811;
        goto LABEL_8;
      }
      v3 = 3;
    }
  }
  else
  {
    v3 = 1;
  }
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  v4 = IoConvertFileHandleToKernelHandle(a1, a2, 1LL);
  if ( v4 >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(0LL, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v2 = Object;
    v4 = v5;
    if ( v5 < 0 )
    {
      v2 = 0LL;
    }
    else if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
    {
      v4 = -1073741757;
    }
    else
    {
      v4 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
      if ( v4 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, 0LL);
        if ( v4 >= 0 )
        {
          QuadPart = FileSize.QuadPart;
          ViewSize = FileSize.QuadPart;
          v4 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewShare,
                 0,
                 2u);
          if ( v4 < 0 )
          {
            BaseAddress = 0LL;
            goto LABEL_10;
          }
          v4 = SeValidateFileAsImageType(v3, (__int64)BaseAddress, QuadPart, v8);
        }
        else
        {
          SectionHandle = 0LL;
        }
      }
    }
  }
LABEL_8:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_10:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v4;
}
