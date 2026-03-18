/*
 * XREFs of ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1401C7BD4
 * Callers:
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401C82AC (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkpCopyAttributes@@YAJPEAX0@Z @ 0x1401C7A9C (-DxgkpCopyAttributes@@YAJPEAX0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1401C80D8 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 */

__int64 __fastcall DxgkpCopyFile(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // r9
  __int64 v5; // rdi
  void *v6; // rsi
  NTSTATUS v7; // eax
  const wchar_t *v8; // r9
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  struct _UNICODE_STRING v14; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES v16; // [rsp+C0h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+130h] [rbp+77h] BYREF
  void *FileHandle; // [rsp+138h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  v14 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v14, a2);
  FileHandle = (void *)-1LL;
  Handle = (HANDLE)-1LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)&v16.Length = 48LL;
  *(_QWORD *)&v16.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16.RootDirectory = 0LL;
  v16.ObjectName = &v14;
  *(_OWORD *)&v16.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v3 = ZwCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x4010u, 0LL, 0);
  if ( v3 < 0 )
  {
    LODWORD(v5) = 0;
    if ( v3 != -1073741772 )
      LODWORD(v5) = v3;
    WdLogSingleEntry1(2LL, (int)v5);
    WdLogGlobalForLineNumber = 465;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed ZwCreateFile for source in DxgkpCopyFile: 0x%I64x",
      (int)v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v5;
  }
  v6 = (void *)operator new[](0x10000uLL, 0x4B677844u, 258LL, v4);
  if ( !v6 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 473;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed allocate memory for CopyBuffer",
      473LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_17;
  }
  v7 = ZwCreateFile(&Handle, 0x1F019Fu, &v16, &IoStatusBlock, 0LL, 0x80u, 7u, 5u, 0x4010u, 0LL, 0);
  v5 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v5) = DxgkpCopyAttributes(FileHandle, Handle);
    if ( (int)v5 < 0 )
      goto LABEL_17;
    while ( 1 )
    {
      v9 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v6, 0x10000u, 0LL, 0LL);
      v5 = v9;
      if ( v9 < 0 )
        break;
      v10 = ZwWriteFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v6, IoStatusBlock.Information, 0LL, 0LL);
      v5 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL, v10);
        v8 = L"Failed ZwWriteFile in DxgkpCopyFile: 0x%I64x";
        WdLogGlobalForLineNumber = 546;
        goto LABEL_16;
      }
    }
    if ( v9 == -1073741807 )
    {
      LODWORD(v5) = 0;
      goto LABEL_17;
    }
    WdLogSingleEntry1(2LL, v9);
    v8 = L"Failed ZwReadFile in DxgkpCopyFile: 0x%I64x";
    WdLogGlobalForLineNumber = 526;
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    v8 = L"Failed ZwCreateFile for dest in DxgkpCopyFile: 0x%I64x";
    WdLogGlobalForLineNumber = 492;
  }
LABEL_16:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, v5, 0LL, 0LL, 0LL, 0LL);
LABEL_17:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    if ( (int)v5 < 0 )
      DxgkpDeleteFile(a2);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
