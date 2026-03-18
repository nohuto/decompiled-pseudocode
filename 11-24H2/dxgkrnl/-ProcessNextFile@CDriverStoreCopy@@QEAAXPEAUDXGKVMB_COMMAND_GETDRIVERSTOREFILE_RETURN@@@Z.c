/*
 * XREFs of ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401CE318
 * Callers:
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401CD908 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1400332C4 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

void __fastcall CDriverStoreCopy::ProcessNextFile(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rbx
  wchar_t *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  _WORD *v10; // r11
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  char v18; // cl
  int v19; // edx
  __int64 Pool2; // rax
  char *v21; // rcx
  char *v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  void *FileHandle; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-41h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-1h]
  __int128 v32; // [rsp+D0h] [rbp+7h] BYREF
  __int128 v33; // [rsp+E0h] [rbp+17h]
  __int64 v34; // [rsp+F0h] [rbp+27h]

  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  while ( 1 )
  {
    v4 = ZwQueryDirectoryFile(
           *((HANDLE *)this + 2),
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           *(PVOID *)this,
           *((_DWORD *)this + 2),
           FileNamesInformation,
           1u,
           0LL,
           0);
    *((_DWORD *)a2 + 4) = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(3LL, v4);
      WdLogGlobalForLineNumber = 1191;
      return;
    }
    v5 = *(_DWORD *)(*(_QWORD *)this + 8LL);
    if ( v5 > 0x206 )
      v5 = 518;
    v6 = v5;
    memmove((char *)this + 1064, (const void *)(*(_QWORD *)this + 12LL), v5);
    *((_WORD *)this + (v6 >> 1) + 532) = 0;
    _wcslwr((wchar_t *)this + 532);
    if ( *((_WORD *)this + 532) != 46 )
    {
      v7 = wcsstr((const wchar_t *)this + 532, L".sys");
      if ( !v7 || v7[4] )
        break;
    }
  }
  v8 = RtlStringCbCopyW((char *)a2 + 60, 0x208uLL, (char *)this + 544);
  *((_DWORD *)a2 + 4) = v8;
  if ( v8 >= 0 )
  {
    if ( !*v10
      || (v11 = RtlStringCbCatW((unsigned __int16 *)a2 + 30, v9, (char *)L"\\"), *((_DWORD *)a2 + 4) = v11, v11 >= 0) )
    {
      v12 = RtlStringCbCatW((unsigned __int16 *)a2 + 30, v9, (char *)this + 1064);
      *((_DWORD *)a2 + 4) = v12;
      if ( v12 >= 0 )
      {
        v13 = RtlStringCbCopyW((char *)this + 1064, 0x208uLL, (char *)this + 24);
        *((_DWORD *)a2 + 4) = v13;
        if ( v13 >= 0 )
        {
          v15 = RtlStringCbCatW((unsigned __int16 *)this + 532, v14, (char *)a2 + 60);
          *((_DWORD *)a2 + 4) = v15;
          if ( v15 >= 0 )
          {
            FileHandle = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v16 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
            *((_DWORD *)a2 + 4) = v16;
            if ( v16 < 0 )
            {
              WdLogSingleEntry1(3LL, v16);
              WdLogGlobalForLineNumber = 1262;
              return;
            }
            v34 = 0LL;
            v31 = 0LL;
            v32 = 0LL;
            v33 = 0LL;
            v30 = 0LL;
            v17 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v30, 0x18u, FileStandardInformation);
            *((_DWORD *)a2 + 4) = v17;
            if ( v17 >= 0 && !BYTE5(v31) )
              *((_DWORD *)a2 + 4) = ZwQueryInformationFile(
                                      FileHandle,
                                      &IoStatusBlock,
                                      &v32,
                                      0x28u,
                                      FileBasicInformation);
            ZwClose(FileHandle);
            if ( *((int *)a2 + 4) < 0 )
            {
              WdLogSingleEntry1(3LL, *((int *)a2 + 4));
              WdLogGlobalForLineNumber = 1289;
              return;
            }
            v18 = BYTE5(v31);
            v19 = DWORD2(v30);
            *((_QWORD *)a2 + 1) = *((_QWORD *)&v30 + 1);
            *(_BYTE *)a2 = v18;
            if ( !v18 )
            {
              *((_QWORD *)a2 + 3) = v32;
              *((_QWORD *)a2 + 6) = *((_QWORD *)&v33 + 1);
              *((_QWORD *)a2 + 4) = *((_QWORD *)&v32 + 1);
              *((_QWORD *)a2 + 5) = v33;
              *((_DWORD *)a2 + 14) = v34;
            }
            *((_DWORD *)this + 396) = v19;
            if ( !v18 )
              goto LABEL_29;
            Pool2 = ExAllocatePool2(256LL, 536LL, 1265072196LL);
            v21 = (char *)Pool2;
            if ( !Pool2 )
            {
              *((_DWORD *)a2 + 4) = -1073741801;
              return;
            }
            v22 = (char *)this + 1592;
            v23 = (_QWORD *)(Pool2 + 520);
            v24 = *(_QWORD *)v22;
            if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
              __fastfail(3u);
            *v23 = v24;
            v23[1] = v22;
            *(_QWORD *)(v24 + 8) = v23;
            *(_QWORD *)v22 = v23;
            v25 = RtlStringCbCopyW(v21, 0x208uLL, (char *)a2 + 60);
            *((_DWORD *)a2 + 4) = v25;
            if ( v25 >= 0 )
LABEL_29:
              *((_DWORD *)a2 + 4) = 0;
          }
        }
      }
    }
  }
}
