/*
 * XREFs of CimfsInitializeBootDisk @ 0x140C4CD70
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14069B220 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     IoGetConfigurationInformation @ 0x1407080D0 (IoGetConfigurationInformation.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14076F0B0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CimfsInitializeBootDisk(__int64 a1, wchar_t *a2, UNICODE_STRING *a3)
{
  int *v4; // r15
  _DWORD *v6; // rdi
  ULONG v7; // r13d
  ULONG DiskCount; // eax
  ULONG OutputBufferLength; // esi
  _DWORD *OutputBuffer; // rax
  NTSTATUS v11; // ebx
  int v12; // ecx
  bool v13; // zf
  __int64 i; // r8
  bool v15; // zf
  __int64 v16; // rdx
  NTSTATUS v17; // esi
  ULONG v18; // esi
  NTSTATUS v19; // eax
  NTSTATUS v20; // ebx
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG ShareAccessa[2]; // [rsp+20h] [rbp-E0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v24; // [rsp+58h] [rbp-A8h]
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v29; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t SourceString[56]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+140h] [rbp+40h] BYREF

  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v29 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v4 = *(int **)a2;
  if ( !*(_QWORD *)a2 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(PCSTR *)(a1 + 184)) )
    return 3221225473LL;
  v6 = 0LL;
  v7 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  Handle = 0LL;
  v24 = DiskCount;
  if ( DiskCount )
  {
    do
    {
      if ( RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v7) < 0
        || RtlInitUnicodeStringEx(&DestinationString, pszDest) < 0 )
      {
        goto LABEL_36;
      }
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      if ( ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) < 0 )
        goto LABEL_36;
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
      {
        OutputBuffer = (_DWORD *)ExAllocatePool2(0x40uLL, OutputBufferLength, 0x426D6943uLL);
        v6 = OutputBuffer;
        if ( !OutputBuffer )
          goto LABEL_36;
        v11 = ZwDeviceIoControlFile(
                Handle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                0x70050u,
                0LL,
                0,
                OutputBuffer,
                OutputBufferLength);
        if ( v11 != -1073741789 )
          break;
        ExFreePoolWithTag(v6, 0);
      }
      if ( v11 < 0 )
        goto LABEL_36;
      v12 = *v4;
      if ( *v6 != *v4 )
        goto LABEL_36;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_36;
        v13 = RtlCompareMemory(v6 + 2, a2 + 4, 0x10uLL) == 16;
      }
      else
      {
        v13 = RtlCompareMemory(v6 + 2, a2 + 12, 4uLL) == 4;
      }
      if ( v13 )
      {
        for ( i = 0LL; (unsigned int)i < v6[1]; i = (unsigned int)(i + 1) )
        {
          if ( *v6 )
          {
            if ( *v6 != 1 )
              continue;
            v16 = *(_QWORD *)&v6[36 * i + 24] - *((_QWORD *)v4 + 6);
            if ( !v16 )
              v16 = *(_QWORD *)&v6[36 * i + 26] - *((_QWORD *)v4 + 7);
            v15 = v16 == 0;
          }
          else
          {
            v15 = *(_QWORD *)&v6[36 * i + 14] == *((_QWORD *)v4 + 1);
          }
          if ( v15 )
          {
            v18 = v6[36 * i + 18];
            ShareAccess[0] = v18;
            v19 = RtlStringCbPrintfW(
                    SourceString,
                    0x64uLL,
                    L"\\Device\\Harddisk%d\\Partition%d",
                    v7,
                    *(_QWORD *)ShareAccess);
            ShareAccessa[0] = v18;
            v20 = v19;
            if ( RtlStringCbPrintfW(a2 + 14, 0x50uLL, L"\\Device\\Harddisk%d\\Partition%d", v7, *(_QWORD *)ShareAccessa) >= 0
              && v20 >= 0
              && RtlInitUnicodeStringEx(&v29, SourceString) >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = &v29;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v17 = ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
              if ( v17 >= 0 )
                goto LABEL_38;
            }
            goto LABEL_37;
          }
        }
      }
LABEL_36:
      ++v7;
    }
    while ( v7 < v24 );
  }
LABEL_37:
  v17 = -1073741810;
  if ( v6 )
LABEL_38:
    ExFreePoolWithTag(v6, 0x426D6943u);
  if ( Handle )
    ZwClose(Handle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v17;
}
