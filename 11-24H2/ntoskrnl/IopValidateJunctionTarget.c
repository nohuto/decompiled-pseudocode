/*
 * XREFs of IopValidateJunctionTarget @ 0x140710FC8
 * Callers:
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     FsRtlValidateReparsePointBuffer @ 0x140437800 (FsRtlValidateReparsePointBuffer.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     IoVolumeDeviceToGuidPath @ 0x14094FDC0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140950A40 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopValidateJunctionTarget(
        int a1,
        _OWORD *a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  ULONG_PTR v6; // rbx
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
  unsigned int v19; // r15d
  int v20; // r8d
  unsigned int v21; // ebx
  unsigned int v22; // r12d
  unsigned int v23; // eax
  _OWORD *v24; // rax
  _OWORD *v25; // r15
  unsigned int Length; // ecx
  char v28; // [rsp+40h] [rbp-128h]
  UNICODE_STRING v29; // [rsp+50h] [rbp-118h] BYREF
  __int64 v30; // [rsp+60h] [rbp-108h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+80h] [rbp-E8h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-E0h] BYREF
  int v34; // [rsp+98h] [rbp-D0h]
  _REPARSE_DATA_BUFFER *v35; // [rsp+A0h] [rbp-C8h]
  HANDLE FileHandle; // [rsp+A8h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-B8h] BYREF
  UNICODE_STRING String1; // [rsp+C0h] [rbp-A8h] BYREF
  UNICODE_STRING v39; // [rsp+D0h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+120h] [rbp-48h] BYREF

  v6 = a3;
  String2 = 0LL;
  *(_QWORD *)&Source.Length = 1572886LL;
  Source.Buffer = L"\\??\\Global\\";
  *(_QWORD *)&v39.Length = 2359330LL;
  v39.Buffer = L"\\??\\Global\\Volume";
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&String1.Length = 1441812LL;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v35 = 0LL;
  v9 = 0LL;
  FileHandle = 0LL;
  Object = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a1 == 590860 )
  {
    v11 = v6 - 32;
    v34 = v6 - 32;
    Pool2 = (_REPARSE_DATA_BUFFER *)ExAllocatePool2(0x63uLL, (unsigned int)(v6 - 32), 0x65526F49u);
    v13 = a2 + 2;
    v14 = (unsigned int)(v6 - 32);
  }
  else
  {
    v11 = v6;
    v34 = v6;
    Pool2 = (_REPARSE_DATA_BUFFER *)ExAllocatePool2(0x63uLL, v6, 0x65526F49u);
    v14 = v6;
    v13 = a2;
  }
  v15 = Pool2;
  v35 = Pool2;
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
          goto LABEL_47;
        }
        v18 = 0;
        v28 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v39, &String2, 1u)
          || (XxxInformation = IoVolumeDeviceToDosName(v17[1], &DestinationString), XxxInformation < 0) )
        {
          v18 = 1;
          v28 = 1;
        }
        if ( v18 )
          XxxInformation = IoVolumeDeviceToGuidPath((PDEVICE_OBJECT)v17[1]);
        if ( XxxInformation >= 0 )
        {
          v19 = String2.Length + 8;
          while ( 1 )
          {
            v10 = (wchar_t *)ExAllocatePool2(0x40uLL, v19, 0x65546F49u);
            if ( !v10 )
              goto LABEL_46;
            XxxInformation = IopQueryXxxInformation((ULONG_PTR)Object, (__int64)v10, (__int64)&v30, 1);
            if ( XxxInformation != -2147483643 )
              break;
            v19 = *(_DWORD *)v10 + 8;
            ExFreePoolWithTag(v10, 0);
          }
          if ( XxxInformation < 0 )
            goto LABEL_47;
          if ( !*(_DWORD *)v10 || v10[2] != 92 )
            goto LABEL_5;
          v20 = DestinationString.Length + *(_DWORD *)v10 + 14;
          if ( !v18 )
            v20 = DestinationString.Length + *(_DWORD *)v10 + 22;
          v21 = v20 - 2;
          if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92 )
            v21 = v20;
          if ( v21 >= 0xFFFD )
            goto LABEL_5;
          v22 = a3 + v21 - String2.Length;
          v23 = a4;
          if ( v22 > a4 )
            v23 = a3 + v21 - String2.Length;
          v24 = (_OWORD *)ExAllocatePool2(0x41uLL, v23, 0x65526F49u);
          v9 = v24;
          if ( !v24 )
          {
LABEL_46:
            XxxInformation = -1073741670;
            goto LABEL_47;
          }
          if ( a1 == 590860 )
          {
            *v24 = *a2;
            v24[1] = a2[1];
            v25 = v24 + 2;
            LODWORD(v30) = v22 - 32;
          }
          else
          {
            v25 = v24;
            LODWORD(v30) = v22;
          }
          Destination.Buffer = (wchar_t *)(v25 + 1);
          Destination.Length = 0;
          Destination.MaximumLength = v21;
          XxxInformation = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( XxxInformation >= 0 )
          {
            v29 = DestinationString;
            if ( v28 )
            {
              v29.Length = DestinationString.Length - 8;
              v29.Buffer += 4;
            }
            if ( v29.Buffer[((unsigned __int64)v29.Length >> 1) - 1] == 92 )
              v29.Length -= 2;
            if ( !v29.Length || v29.Length > DestinationString.Length )
              goto LABEL_5;
            XxxInformation = RtlAppendUnicodeStringToString(&Destination, &v29);
            if ( XxxInformation >= 0 )
            {
              v29.Buffer = v10 + 2;
              v29.Length = *v10;
              v29.MaximumLength = v29.Length;
              XxxInformation = RtlAppendUnicodeStringToString(&Destination, &v29);
              if ( XxxInformation >= 0 )
              {
                *(_DWORD *)v25 = -1610612733;
                *(_DWORD *)((char *)v25 + 6) = 0;
                *((_WORD *)v25 + 2) = v30 - 8;
                Length = Destination.Length;
                *((_WORD *)v25 + 5) = Destination.Length;
                *((_WORD *)v25 + ((unsigned __int64)Length >> 1) + 8) = 0;
                LOWORD(Length) = Length + 2;
                *((_WORD *)v25 + 6) = Length;
                memmove(
                  (char *)v25 + (unsigned __int16)Length + 16,
                  &v15->GenericReparseBuffer + v15->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                  v15->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v25 + 7) = v15->SymbolicLinkReparseBuffer.PrintNameLength;
                *a5 = v9;
                *a6 = v22;
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
LABEL_47:
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
