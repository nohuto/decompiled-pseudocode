/*
 * XREFs of ExpQueryElamCertInfo @ 0x1407B5054
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1406A78B0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1406A78F0 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeRegisterElamCertResources @ 0x14078E1F8 (SeRegisterElamCertResources.c)
 *     SeValidateFileAsImageType @ 0x14078E33C (SeValidateFileAsImageType.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A676F0 (IoConvertFileHandleToKernelHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryElamCertInfo(__int64 a1, __int64 a2)
{
  PVOID v2; // r14
  void *v3; // r15
  int v4; // esi
  HANDLE FileHandle; // r12
  ULONG_PTR QuadPart; // rbx
  void *Pool2; // rax
  __int64 v8; // rdx
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-88h] BYREF
  ULONG_PTR ViewSize[4]; // [rsp+68h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+20h]

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileSize.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  v2 = 0LL;
  SectionHandle = 0LL;
  v3 = 0LL;
  BaseAddress = 0LL;
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  v4 = IoConvertFileHandleToKernelHandle(a1, a2, 1LL);
  if ( v4 >= 0 )
  {
    Object = 0LL;
    FileHandle = Handle;
    v4 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v2 = Object;
    ViewSize[3] = (ULONG_PTR)Object;
    if ( v4 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
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
          v4 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v4 >= 0 )
          {
            QuadPart = FileSize.QuadPart;
            ViewSize[0] = FileSize.QuadPart;
            v4 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v4 >= 0 )
            {
              v4 = SeValidateFileAsImageType(0LL, (__int64)BaseAddress);
              if ( v4 >= 0 )
              {
                Pool2 = (void *)ExAllocatePool2(0x101uLL, QuadPart, 0x4D414C45u);
                v3 = Pool2;
                ViewSize[2] = (ULONG_PTR)Pool2;
                if ( Pool2 )
                {
                  memmove(Pool2, BaseAddress, QuadPart);
                  v4 = SeValidateFileAsImageType(0LL, (__int64)v3);
                  if ( v4 >= 0 )
                  {
                    v4 = SeRegisterElamCertResources((int)v3, v8, 1);
                    if ( v4 >= 0 )
                      v4 = 0;
                  }
                }
                else
                {
                  v4 = -1073741670;
                }
              }
            }
            else
            {
              BaseAddress = 0LL;
            }
          }
          else
          {
            SectionHandle = 0LL;
          }
        }
      }
    }
    else
    {
      v2 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4D414C45u);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
