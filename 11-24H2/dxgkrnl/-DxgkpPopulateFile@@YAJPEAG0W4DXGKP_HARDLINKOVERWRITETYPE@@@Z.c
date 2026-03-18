/*
 * XREFs of ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401CD53C
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401CC6F8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1401CCE64 (-DxgkpCopyFile@@YAJPEBG0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1401CD368 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1401CD3D8 (-DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x140393240 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall DxgkpPopulateFile(const WCHAR *a1, _WORD *a2, int a3)
{
  bool v4; // si
  NTSTATUS v5; // eax
  __int64 v6; // r12
  __int64 v8; // rdi
  unsigned int v9; // edi
  ULONG v10; // r13d
  void *v11; // r14
  __int64 v12; // rax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // eax
  const wchar_t *v15; // rbx
  int FileVersion; // eax
  const WCHAR *v17; // rdi
  int v18; // eax
  NTSTATUS v19; // eax
  union _LARGE_INTEGER v20; // [rsp+58h] [rbp-59h] BYREF
  union _LARGE_INTEGER v21; // [rsp+60h] [rbp-51h] BYREF
  union _LARGE_INTEGER v22; // [rsp+68h] [rbp-49h] BYREF
  union _LARGE_INTEGER v23; // [rsp+70h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-29h] BYREF
  struct _UNICODE_STRING v26; // [rsp+98h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  void *FileHandle; // [rsp+130h] [rbp+7Fh] BYREF

  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v26 = 0LL;
  FileHandle = (void *)-1LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenFile(&FileHandle, 0x100100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204020u);
  v6 = v5;
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741790 )
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 831;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to open file in DxgkpPopulateFile: 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  v9 = 2 * v8;
  v10 = 0;
  v11 = 0LL;
  if ( v5 == -1073741790 )
    goto LABEL_11;
  v10 = v9 + 24;
  v12 = operator new[](v9 + 24, 0x4B677844u, 256LL);
  v11 = (void *)v12;
  if ( v12 )
  {
    *(_DWORD *)(v12 + 16) = v9;
    memmove((void *)(v12 + 20), a2, v9);
    v14 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v11, v10, FileLinkInformation);
    v13 = v14;
    if ( v14 >= 0 )
      goto LABEL_37;
    if ( v14 != -1073741771 )
      goto LABEL_36;
LABEL_11:
    if ( a3 == 1 )
    {
      v21.QuadPart = 0LL;
      v23.QuadPart = 0LL;
      v20.QuadPart = 0LL;
      v22.QuadPart = 0LL;
      if ( (v9 & 0xFFFFFFFE) < 8 )
        goto LABEL_22;
      v15 = &a2[(unsigned __int64)v9 >> 1];
      if ( _wcsnicmp(v15 - 4, L".dll", 4uLL) )
      {
        if ( _wcsnicmp(v15 - 4, L".exe", 4uLL) )
          goto LABEL_22;
      }
      if ( (int)DxgkpGetFileVersion(&DestinationString, &v21, 0LL) < 0 )
        goto LABEL_22;
      RtlInitUnicodeString(&v26, a2);
      FileVersion = DxgkpGetFileVersion(&v26, &v20, 0LL);
      v13 = FileVersion;
      if ( FileVersion >= 0 )
      {
        v4 = v21.QuadPart > v20.QuadPart;
        if ( v21.QuadPart != v20.QuadPart )
        {
          v17 = a1;
          goto LABEL_19;
        }
LABEL_22:
        v17 = a1;
        v13 = DxgkpGetFileLastWriteTime(a1, &v23);
        if ( v13 >= 0 )
        {
          v18 = DxgkpGetFileLastWriteTime(a2, &v22);
          v13 = v18;
          if ( v18 < 0 )
          {
            if ( v18 == -1073741772 )
              v4 = 1;
          }
          else if ( v23.QuadPart > v22.QuadPart )
          {
            v4 = 1;
          }
        }
LABEL_19:
        if ( !v4 )
          goto LABEL_35;
        goto LABEL_30;
      }
      if ( FileVersion != -1073741772 )
        goto LABEL_22;
    }
    v17 = a1;
LABEL_30:
    if ( (_DWORD)v6 == -1073741790 )
    {
      v19 = DxgkpCopyFile(v17, a2);
      goto LABEL_34;
    }
    v13 = DxgkpDeleteFile(a2);
    if ( v13 >= 0 )
    {
      v19 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v11, v10, FileLinkInformation);
LABEL_34:
      v13 = v19;
LABEL_35:
      if ( v13 < 0 )
        goto LABEL_36;
LABEL_37:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
      goto LABEL_38;
    }
LABEL_36:
    WdLogSingleEntry1(3LL, v13);
    WdLogGlobalForLineNumber = 948;
    goto LABEL_37;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 844;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed allocate memory for LinkInfo in DxgkpPopulateFile",
    844LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v13 = -1073741801;
LABEL_38:
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v13;
}
