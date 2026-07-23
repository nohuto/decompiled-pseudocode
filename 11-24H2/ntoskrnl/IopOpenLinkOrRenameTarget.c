/*
 * XREFs of IopOpenLinkOrRenameTarget @ 0x140955124
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     IopGetBasicInformationFile @ 0x1409567DC (IopGetBasicInformationFile.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409568C0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A676F0 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall IopOpenLinkOrRenameTarget(HANDLE *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  HANDLE v6; // rbx
  __int64 v7; // r13
  bool v8; // zf
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  char v13; // al
  char v14; // cl
  int v15; // ecx
  _QWORD *FileObjectExtension; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  BOOL v20; // esi
  int v21; // edi
  NTSTATUS v22; // ebx
  struct _FILE_OBJECT *v23; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v26; // [rsp+88h] [rbp-78h]
  __int16 Src; // [rsp+90h] [rbp-70h] BYREF
  _BYTE BugCheckParameter4[22]; // [rsp+92h] [rbp-6Eh] BYREF
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  _WORD v32[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v33; // [rsp+C4h] [rbp-3Ch]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D0h] [rbp-30h] BYREF
  int v36[2]; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE v37; // [rsp+E0h] [rbp-20h]
  _WORD *v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F4h] [rbp-Ch]
  __int128 v41; // [rsp+F8h] [rbp-8h]
  int v42[4]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v43; // [rsp+118h] [rbp+18h]
  __int128 v44; // [rsp+128h] [rbp+28h]
  __int64 v45; // [rsp+138h] [rbp+38h]

  v45 = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  v7 = a2;
  v26 = 0LL;
  v8 = (a4->Flags & 0x800) == 0;
  v36[1] = 0;
  v40 = 0;
  *(_OWORD *)v42 = 0LL;
  v33 = 0;
  HandleInformation = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  if ( v8 )
  {
    result = IopGetBasicInformationFile(a4);
    if ( (int)result < 0 )
      return result;
  }
  v11 = *(_QWORD *)(a3 + 8);
  if ( v11 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      LOBYTE(a2) = 1;
      result = IoConvertFileHandleToKernelHandle(v11, a2, 0LL);
      if ( (int)result < 0 )
        return result;
      v6 = v26;
    }
    else
    {
      v6 = *(HANDLE *)(a3 + 8);
      v26 = v6;
    }
  }
  v12 = *(_QWORD *)(v7 + 184);
  v32[0] = *(_WORD *)(a3 + 16);
  v32[1] = v32[0];
  v34 = a3 + 20;
  v13 = ~(unsigned __int8)(a4->Flags >> 11);
  v36[0] = 48;
  v37 = v6;
  v14 = ~*(_BYTE *)(v12 - 70);
  Src = 40;
  v30 = 1LL;
  v15 = v13 & 0x40 | ((v14 & 1) << 10) | 0x200;
  v38 = v32;
  FileObjectExtension = a4->FileObjectExtension;
  v39 = v15;
  v41 = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  if ( FileObjectExtension )
  {
    v17 = (_QWORD *)FileObjectExtension[2];
    if ( v17 )
      *(_QWORD *)&BugCheckParameter4[14] = *v17;
  }
  v18 = a4->FileObjectExtension;
  if ( v18 )
    v19 = v18[1];
  else
    v19 = 0LL;
  v29 = v19;
  v20 = (*(_BYTE *)(v12 - 70) & 1) == 0;
  v21 = *(_QWORD *)&BugCheckParameter4[14] != 0LL;
  if ( !*(_QWORD *)&BugCheckParameter4[6] )
    goto LABEL_12;
  v22 = FsRtlpPrepareExtraCreateParametersForCreate(*(ULONG_PTR *)&BugCheckParameter4[6]);
  if ( v22 >= 0 )
  {
    v19 = v29;
LABEL_12:
    if ( v19 )
      v21 |= 4u;
    v22 = IopCreateFile(
            (int)&Handle,
            1048578,
            (int)v36,
            (int)v42,
            0LL,
            0,
            7,
            1,
            0x4000,
            0LL,
            0,
            0,
            0LL,
            v20 | 0x104u,
            v21,
            &Src);
    if ( v22 >= 0 )
    {
      Object = 0LL;
      v22 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, &HandleInformation);
      if ( v22 < 0 )
      {
        ObCloseHandle(Handle, 0);
      }
      else
      {
        v23 = (struct _FILE_OBJECT *)Object;
        ObfDereferenceObject(Object);
        RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
        if ( IoGetRelatedDeviceObject(v23) == RelatedDeviceObject )
        {
          *(_QWORD *)(v12 - 48) = v23;
          v22 = 0;
          *a1 = Handle;
        }
        else
        {
          ObCloseHandle(Handle, 0);
          v22 = -1073741612;
        }
      }
    }
  }
  if ( v26 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      ObCloseHandle(v26, 0);
  }
  return (unsigned int)v22;
}
