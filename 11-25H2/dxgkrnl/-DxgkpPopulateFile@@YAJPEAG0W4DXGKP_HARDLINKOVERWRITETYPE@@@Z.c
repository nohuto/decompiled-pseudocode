/*
 * XREFs of ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401C82AC
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401C7468 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1401C7BD4 (-DxgkpCopyFile@@YAJPEBG0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1401C80D8 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1401C8148 (-DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x14039B1E0 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall DxgkpPopulateFile(const WCHAR *a1, _WORD *a2, int a3)
{
  bool v4; // si
  NTSTATUS v5; // eax
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v9; // rdi
  unsigned int v10; // edi
  ULONG v11; // r13d
  void *v12; // r14
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  const wchar_t *v16; // rbx
  int FileVersion; // eax
  const WCHAR *v18; // rdi
  int v19; // eax
  NTSTATUS v20; // eax
  union _LARGE_INTEGER v21; // [rsp+58h] [rbp-59h] BYREF
  union _LARGE_INTEGER v22; // [rsp+60h] [rbp-51h] BYREF
  union _LARGE_INTEGER v23; // [rsp+68h] [rbp-49h] BYREF
  union _LARGE_INTEGER v24; // [rsp+70h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-29h] BYREF
  struct _UNICODE_STRING v27; // [rsp+98h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  void *FileHandle; // [rsp+130h] [rbp+7Fh] BYREF

  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v27 = 0LL;
  FileHandle = (void *)-1LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenFile(&FileHandle, 0x100100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204020u);
  v7 = v5;
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741790 )
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 831;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to open file in DxgkpPopulateFile: 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v10 = 2 * v9;
  v11 = 0;
  v12 = 0LL;
  if ( v5 == -1073741790 )
    goto LABEL_11;
  v11 = v10 + 24;
  v13 = operator new[](v10 + 24, 0x4B677844u, 256LL, v6);
  v12 = (void *)v13;
  if ( v13 )
  {
    *(_DWORD *)(v13 + 16) = v10;
    memmove((void *)(v13 + 20), a2, v10);
    v15 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v12, v11, FileLinkInformation);
    v14 = v15;
    if ( v15 >= 0 )
      goto LABEL_37;
    if ( v15 != -1073741771 )
      goto LABEL_36;
LABEL_11:
    if ( a3 == 1 )
    {
      v22.QuadPart = 0LL;
      v24.QuadPart = 0LL;
      v21.QuadPart = 0LL;
      v23.QuadPart = 0LL;
      if ( (v10 & 0xFFFFFFFE) < 8 )
        goto LABEL_22;
      v16 = &a2[(unsigned __int64)v10 >> 1];
      if ( _wcsnicmp(v16 - 4, L".dll", 4uLL) )
      {
        if ( _wcsnicmp(v16 - 4, L".exe", 4uLL) )
          goto LABEL_22;
      }
      if ( (int)DxgkpGetFileVersion(&DestinationString, &v22, 0LL) < 0 )
        goto LABEL_22;
      RtlInitUnicodeString(&v27, a2);
      FileVersion = DxgkpGetFileVersion(&v27, &v21, 0LL);
      v14 = FileVersion;
      if ( FileVersion >= 0 )
      {
        v4 = v22.QuadPart > v21.QuadPart;
        if ( v22.QuadPart != v21.QuadPart )
        {
          v18 = a1;
          goto LABEL_19;
        }
LABEL_22:
        v18 = a1;
        v14 = DxgkpGetFileLastWriteTime(a1, &v24);
        if ( v14 >= 0 )
        {
          v19 = DxgkpGetFileLastWriteTime(a2, &v23);
          v14 = v19;
          if ( v19 < 0 )
          {
            if ( v19 == -1073741772 )
              v4 = 1;
          }
          else if ( v24.QuadPart > v23.QuadPart )
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
    v18 = a1;
LABEL_30:
    if ( (_DWORD)v7 == -1073741790 )
    {
      v20 = DxgkpCopyFile(v18, a2);
      goto LABEL_34;
    }
    v14 = DxgkpDeleteFile(a2);
    if ( v14 >= 0 )
    {
      v20 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v12, v11, FileLinkInformation);
LABEL_34:
      v14 = v20;
LABEL_35:
      if ( v14 < 0 )
        goto LABEL_36;
LABEL_37:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
      goto LABEL_38;
    }
LABEL_36:
    WdLogSingleEntry1(3LL, v14);
    WdLogGlobalForLineNumber = 948;
    goto LABEL_37;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 844;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed allocate memory for LinkInfo in DxgkpPopulateFile",
    844LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v14 = -1073741801;
LABEL_38:
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v14;
}
