/*
 * XREFs of IopValidateJunctionTarget @ 0x140707338
 * Callers:
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     FsRtlValidateReparsePointBuffer @ 0x140441130 (FsRtlValidateReparsePointBuffer.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IoVolumeDeviceToGuidPath @ 0x140822890 (IoVolumeDeviceToGuidPath.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     IoVolumeDeviceToDosName @ 0x1408BF350 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopValidateJunctionTarget(
        int a1,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6)
{
  size_t v6; // rbx
  void *v9; // r13
  wchar_t *v10; // r14
  ULONG v11; // r15d
  _REPARSE_DATA_BUFFER *Pool2; // rax
  const void *v13; // rdx
  size_t v14; // r8
  _REPARSE_DATA_BUFFER *v15; // rsi
  int XxxInformation; // ebx
  PVOID *v17; // r15
  char v18; // r12
  int v19; // r8d
  unsigned int v20; // ebx
  unsigned int v21; // r12d
  _OWORD *v22; // rax
  _OWORD *v23; // r15
  unsigned int Length; // ecx
  char v26; // [rsp+40h] [rbp-128h]
  UNICODE_STRING v27; // [rsp+50h] [rbp-118h] BYREF
  __int64 v28; // [rsp+60h] [rbp-108h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+80h] [rbp-E8h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-E0h] BYREF
  int v32; // [rsp+98h] [rbp-D0h]
  _REPARSE_DATA_BUFFER *v33; // [rsp+A0h] [rbp-C8h]
  HANDLE FileHandle; // [rsp+A8h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-B8h] BYREF
  UNICODE_STRING String1; // [rsp+C0h] [rbp-A8h] BYREF
  UNICODE_STRING v37; // [rsp+D0h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+120h] [rbp-48h] BYREF

  v6 = a3;
  String2 = 0LL;
  *(_QWORD *)&Source.Length = 1572886LL;
  Source.Buffer = L"\\??\\Global\\";
  *(_QWORD *)&v37.Length = 2359330LL;
  v37.Buffer = L"\\??\\Global\\Volume";
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&String1.Length = 1441812LL;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v33 = 0LL;
  v9 = 0LL;
  FileHandle = 0LL;
  Object = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a1 == 590860 )
  {
    v11 = v6 - 32;
    v32 = v6 - 32;
    Pool2 = (_REPARSE_DATA_BUFFER *)ExAllocatePool2(0x63uLL);
    v13 = a2 + 2;
    v14 = (unsigned int)(v6 - 32);
  }
  else
  {
    v11 = v6;
    v32 = v6;
    Pool2 = (_REPARSE_DATA_BUFFER *)ExAllocatePool2(0x63uLL);
    v14 = v6;
    v13 = a2;
  }
  v15 = Pool2;
  v33 = Pool2;
  memmove(Pool2, v13, v14);
  if ( v15->ReparseTag != -1610612733 )
    goto LABEL_5;
  XxxInformation = FsRtlValidateReparsePointBuffer(v11, v15);
  if ( XxxInformation >= 0 )
  {
    String2.Buffer = v15->MountPointReparseBuffer.PathBuffer;
    String2.Length = v15->SymbolicLinkReparseBuffer.SubstituteNameLength & 0xFFFE;
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    XxxInformation = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( XxxInformation >= 0 )
    {
      XxxInformation = IopReferenceFileObject(FileHandle, 0, 0, &Object, 0LL);
      if ( XxxInformation >= 0 )
      {
        v17 = (PVOID *)Object;
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) != 0 )
        {
LABEL_5:
          XxxInformation = -1073741811;
          goto LABEL_44;
        }
        v18 = 0;
        v26 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v37, &String2, 1u)
          || (XxxInformation = IoVolumeDeviceToDosName(v17[1], &DestinationString), XxxInformation < 0) )
        {
          v18 = 1;
          v26 = 1;
        }
        if ( v18 )
          XxxInformation = IoVolumeDeviceToGuidPath((PDEVICE_OBJECT)v17[1]);
        if ( XxxInformation >= 0 )
        {
          while ( 1 )
          {
            v10 = (wchar_t *)ExAllocatePool2(0x40uLL);
            if ( !v10 )
              goto LABEL_43;
            XxxInformation = IopQueryXxxInformation((ULONG_PTR)Object, (__int64)v10, (__int64)&v28, 1);
            if ( XxxInformation != -2147483643 )
              break;
            ExFreePoolWithTag(v10, 0);
          }
          if ( XxxInformation < 0 )
            goto LABEL_44;
          if ( !*(_DWORD *)v10 || v10[2] != 92 )
            goto LABEL_5;
          v19 = DestinationString.Length + *(_DWORD *)v10 + 14;
          if ( !v18 )
            v19 = DestinationString.Length + *(_DWORD *)v10 + 22;
          v20 = v19 - 2;
          if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92 )
            v20 = v19;
          if ( v20 >= 0xFFFD )
            goto LABEL_5;
          v21 = a3 + v20 - String2.Length;
          v22 = (_OWORD *)ExAllocatePool2(0x41uLL);
          v9 = v22;
          if ( !v22 )
          {
LABEL_43:
            XxxInformation = -1073741670;
            goto LABEL_44;
          }
          if ( a1 == 590860 )
          {
            *v22 = *a2;
            v22[1] = a2[1];
            v23 = v22 + 2;
            LODWORD(v28) = v21 - 32;
          }
          else
          {
            v23 = v22;
            LODWORD(v28) = v21;
          }
          Destination.Buffer = (wchar_t *)(v23 + 1);
          Destination.Length = 0;
          Destination.MaximumLength = v20;
          XxxInformation = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( XxxInformation >= 0 )
          {
            v27 = DestinationString;
            if ( v26 )
            {
              v27.Length = DestinationString.Length - 8;
              v27.Buffer += 4;
            }
            if ( v27.Buffer[((unsigned __int64)v27.Length >> 1) - 1] == 92 )
              v27.Length -= 2;
            if ( !v27.Length || v27.Length > DestinationString.Length )
              goto LABEL_5;
            XxxInformation = RtlAppendUnicodeStringToString(&Destination, &v27);
            if ( XxxInformation >= 0 )
            {
              v27.Buffer = v10 + 2;
              v27.Length = *v10;
              v27.MaximumLength = v27.Length;
              XxxInformation = RtlAppendUnicodeStringToString(&Destination, &v27);
              if ( XxxInformation >= 0 )
              {
                *(_DWORD *)v23 = -1610612733;
                *(_DWORD *)((char *)v23 + 6) = 0;
                *((_WORD *)v23 + 2) = v28 - 8;
                Length = Destination.Length;
                *((_WORD *)v23 + 5) = Destination.Length;
                *((_WORD *)v23 + ((unsigned __int64)Length >> 1) + 8) = 0;
                LOWORD(Length) = Length + 2;
                *((_WORD *)v23 + 6) = Length;
                memmove(
                  (char *)v23 + (unsigned __int16)Length + 16,
                  &v15->GenericReparseBuffer + v15->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                  v15->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v23 + 7) = v15->SymbolicLinkReparseBuffer.PrintNameLength;
                *a5 = v9;
                *a6 = v21;
                v9 = 0LL;
              }
            }
          }
        }
        else
        {
          DestinationString.Buffer = 0LL;
        }
      }
    }
  }
LABEL_44:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)XxxInformation;
}
