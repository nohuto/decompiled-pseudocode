/*
 * XREFs of __std_fs_get_stats @ 0x1802D42C0
 * Callers:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x180063114 (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 *     ?_Get_any_status@directory_entry@filesystem@std@@AEBA?AU_File_status_and_error@23@W4__std_fs_stats_flags@@@Z @ 0x18029CBDC (-_Get_any_status@directory_entry@filesystem@std@@AEBA-AU_File_status_and_error@23@W4__std_fs_sta.c)
 *     __std_fs_create_directory @ 0x1802D4158 (__std_fs_create_directory.c)
 *     ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x180616C98 (-last_write_time@filesystem@std@@YA-AV-$time_point@U_File_time_clock@filesystem@std@@V-$duration.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     __std_fs_open_handle @ 0x1802D4638 (__std_fs_open_handle.c)
 */

DWORD __fastcall _std_fs_get_stats(LPCWSTR lpFileName, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 v7; // bl
  DWORD result; // eax
  HANDLE FirstFileW; // rax
  FILETIME ftLastWriteTime; // rax
  DWORD dwFileAttributes; // edx
  DWORD nFileSizeHigh; // r8d
  DWORD nFileSizeLow; // r9d
  int v14; // ebx
  HANDLE v15; // rbx
  DWORD LastError; // edi
  int v17; // ecx
  HANDLE hObject; // [rsp+20h] [rbp-E0h] BYREF
  __int128 FileInformation; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  _WIN32_FIND_DATAW FindFileData; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a3 & 0xFFFFFFFE;
  v7 = a3 & 1;
  if ( (a3 & 1) != 0 && (a3 & 4) != 0 )
    return 87;
  if ( (a3 & 2) != 0 && a4 != -1 && ((a4 & 0x400) == 0 || !v7) )
  {
    v4 = a3 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 16) = a4;
  }
  if ( !v4 )
    return 0;
  if ( (v4 & 0x2A) != 0 && (a4 == -1 || (a4 & 0x400) == 0 || !v7) )
  {
    LODWORD(v21) = 0;
    FileInformation = 0LL;
    v20 = 0LL;
    if ( GetFileAttributesExW(lpFileName, GetFileExInfoStandard, &FileInformation) )
    {
      nFileSizeLow = v21;
      nFileSizeHigh = HIDWORD(v20);
      ftLastWriteTime = *(FILETIME *)((char *)&v20 + 4);
      dwFileAttributes = FileInformation;
    }
    else
    {
      result = GetLastError();
      if ( result != 32 )
        return result;
      memset_0(&FindFileData, 0, sizeof(FindFileData));
      FirstFileW = FindFirstFileW(lpFileName, &FindFileData);
      if ( FirstFileW == (HANDLE)-1LL )
        return GetLastError();
      FindClose(FirstFileW);
      ftLastWriteTime = FindFileData.ftLastWriteTime;
      dwFileAttributes = FindFileData.dwFileAttributes;
      nFileSizeHigh = FindFileData.nFileSizeHigh;
      nFileSizeLow = FindFileData.nFileSizeLow;
      *(FILETIME *)((char *)&v20 + 4) = FindFileData.ftLastWriteTime;
    }
    if ( !v7 || (dwFileAttributes & 0x400) == 0 )
    {
      *(_DWORD *)(a2 + 16) = dwFileAttributes;
      *(_QWORD *)(a2 + 8) = nFileSizeLow | ((unsigned __int64)nFileSizeHigh << 32);
      *(_QWORD *)a2 = DWORD1(v20) | *(_QWORD *)&ftLastWriteTime & 0xFFFFFFFF00000000uLL;
      v4 &= 0xFFFFFFD5;
      if ( !v4 )
        return 0;
    }
  }
  v14 = _std_fs_open_handle(&hObject, lpFileName, 128LL, ((v7 ^ 1u) + 16) << 21);
  if ( v14 )
  {
    if ( hObject == (HANDLE)-1LL || CloseHandle(hObject) )
      return v14;
LABEL_55:
    abort();
  }
  v15 = hObject;
  if ( (v4 & 0x26) != 0 )
  {
    v21 = 0LL;
    FileInformation = 0LL;
    v20 = 0LL;
    if ( !GetFileInformationByHandleEx(hObject, FileBasicInfo, &FileInformation, 0x28u) )
    {
      LastError = GetLastError();
      if ( v15 != (HANDLE)-1LL && !CloseHandle(v15) )
        abort();
      return LastError;
    }
    v4 &= 0xFFFFFFDD;
    v17 = v21;
    *(_QWORD *)a2 = v20;
    *(_DWORD *)(a2 + 16) = v17;
    if ( (v4 & 4) != 0 )
    {
      if ( (v17 & 0x400) != 0 )
      {
        hObject = 0LL;
        if ( !GetFileInformationByHandleEx(v15, FileAttributeTagInfo, &hObject, 8u) )
        {
          LastError = GetLastError();
          if ( v15 != (HANDLE)-1LL && !CloseHandle(v15) )
            abort();
          return LastError;
        }
        *(_DWORD *)(a2 + 20) = HIDWORD(hObject);
      }
      else
      {
        *(_DWORD *)(a2 + 20) = 0;
      }
      v4 &= ~4u;
    }
  }
  if ( (v4 & 0x18) != 0 )
  {
    *(_QWORD *)&v20 = 0LL;
    FileInformation = 0LL;
    if ( !GetFileInformationByHandleEx(v15, FileStandardInfo, &FileInformation, 0x18u) )
    {
      LastError = GetLastError();
      if ( v15 != (HANDLE)-1LL && !CloseHandle(v15) )
        abort();
      return LastError;
    }
    v4 &= 0xFFFFFFE7;
    *(_QWORD *)(a2 + 8) = *((_QWORD *)&FileInformation + 1);
    *(_DWORD *)(a2 + 24) = v20;
  }
  if ( !v4 )
  {
    if ( v15 != (HANDLE)-1LL && !CloseHandle(v15) )
      goto LABEL_55;
    return 0;
  }
  if ( v15 != (HANDLE)-1LL && !CloseHandle(v15) )
    goto LABEL_55;
  return 50;
}
