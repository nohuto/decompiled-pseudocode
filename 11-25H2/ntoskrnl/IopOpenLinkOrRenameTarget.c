/*
 * XREFs of IopOpenLinkOrRenameTarget @ 0x1408ED610
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1408ED4B0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopGetBasicInformationFile @ 0x1408ED534 (IopGetBasicInformationFile.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A6C040 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall IopOpenLinkOrRenameTarget(HANDLE *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  HANDLE v6; // rbx
  __int64 v7; // r13
  bool v8; // zf
  ACCESS_MASK v9; // r14d
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  char v14; // al
  char v15; // cl
  int v16; // ecx
  _QWORD *FileObjectExtension; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  BOOL v21; // esi
  int v22; // edi
  NTSTATUS v23; // ebx
  struct _FILE_OBJECT *v24; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v27; // [rsp+88h] [rbp-78h]
  __int16 Src; // [rsp+90h] [rbp-70h] BYREF
  _BYTE BugCheckParameter4[22]; // [rsp+92h] [rbp-6Eh] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  _WORD v33[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v34; // [rsp+C4h] [rbp-3Ch]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D0h] [rbp-30h] BYREF
  int v37[2]; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE v38; // [rsp+E0h] [rbp-20h]
  _WORD *v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F4h] [rbp-Ch]
  __int128 v42; // [rsp+F8h] [rbp-8h]
  int v43[4]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v44[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v45; // [rsp+138h] [rbp+38h]

  v45 = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  v7 = a2;
  v27 = 0LL;
  v8 = (a4->Flags & 0x800) == 0;
  v9 = 2;
  v37[1] = 0;
  v41 = 0;
  *(_OWORD *)v43 = 0LL;
  v34 = 0;
  HandleInformation = 0LL;
  memset(v44, 0, sizeof(v44));
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  if ( v8 )
  {
    result = IopGetBasicInformationFile(a4, (struct _IRP *)v44);
    if ( (int)result < 0 )
      return result;
    if ( (v45 & 0x10) != 0 )
      v9 = 4;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      LOBYTE(a2) = 1;
      result = IoConvertFileHandleToKernelHandle(v12, a2, 0LL);
      if ( (int)result < 0 )
        return result;
      v6 = v27;
    }
    else
    {
      v6 = *(HANDLE *)(a3 + 8);
      v27 = v6;
    }
  }
  v13 = *(_QWORD *)(v7 + 184);
  v33[0] = *(_WORD *)(a3 + 16);
  v33[1] = v33[0];
  v35 = a3 + 20;
  v14 = ~(unsigned __int8)(a4->Flags >> 11);
  v37[0] = 48;
  v38 = v6;
  v15 = ~*(_BYTE *)(v13 - 70);
  Src = 40;
  v31 = 1LL;
  v16 = v14 & 0x40 | ((v15 & 1) << 10) | 0x200;
  v39 = v33;
  FileObjectExtension = a4->FileObjectExtension;
  v40 = v16;
  v42 = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  if ( FileObjectExtension )
  {
    v18 = (_QWORD *)FileObjectExtension[2];
    if ( v18 )
      *(_QWORD *)&BugCheckParameter4[14] = *v18;
  }
  v19 = a4->FileObjectExtension;
  if ( v19 )
    v20 = v19[1];
  else
    v20 = 0LL;
  v30 = v20;
  v21 = (*(_BYTE *)(v13 - 70) & 1) == 0;
  v22 = *(_QWORD *)&BugCheckParameter4[14] != 0LL;
  if ( !*(_QWORD *)&BugCheckParameter4[6] )
    goto LABEL_14;
  v23 = FsRtlpPrepareExtraCreateParametersForCreate(*(ULONG_PTR *)&BugCheckParameter4[6]);
  if ( v23 >= 0 )
  {
    v20 = v30;
LABEL_14:
    if ( v20 )
      v22 |= 4u;
    v23 = IopCreateFile(
            (int)&Handle,
            v9 | 0x100000,
            (int)v37,
            (int)v43,
            0LL,
            0,
            7,
            1,
            0x4000,
            0LL,
            0,
            0,
            0LL,
            v21 | 0x104u,
            v22,
            &Src);
    if ( v23 >= 0 )
    {
      Object = 0LL;
      v23 = ObReferenceObjectByHandle(Handle, v9, (POBJECT_TYPE)IoFileObjectType, 0, &Object, &HandleInformation);
      if ( v23 < 0 )
      {
        ObCloseHandle(Handle, 0);
      }
      else
      {
        v24 = (struct _FILE_OBJECT *)Object;
        ObfDereferenceObject(Object);
        RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
        if ( IoGetRelatedDeviceObject(v24) == RelatedDeviceObject )
        {
          *(_QWORD *)(v13 - 48) = v24;
          v23 = 0;
          *a1 = Handle;
        }
        else
        {
          ObCloseHandle(Handle, 0);
          v23 = -1073741612;
        }
      }
    }
  }
  if ( v27 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      ObCloseHandle(v27, 0);
  }
  return (unsigned int)v23;
}
